/***********************************************************************/
/*                                                                     */
/*  FILE        :scinew.c                                                */
/*  DATE        :Wed, Apr 20, 2005                                     */
/*  DESCRIPTION :Main Program                                          */
/*  CPU TYPE    :SH7709S                                               */
/*                                                                     */
/*  This file is for sending the received data.                        */
/*  The sending data can be got and displaied by super terminator.     */
/***********************************************************************/
              
#include 	"7709s.h"

void SCI0_init();
void put_char ( char P );
char get_char ();

#ifdef __cplusplus
//#include <ios>					// Remove the comment when you use ios                  
//int ios_base::Init::init_cnt;		// Remove the comment when you use ios
#endif
#ifdef __cplusplus
extern "C" {
#endif
void abort(void);
#ifdef __cplusplus
}
#endif

#define LED_DATA (*(volatile unsigned short *)0x00800000) 

int i,j;
unsigned short temp;

void main(void)
{
	temp=0x55;
	SCI0_init();
	LED_DATA=temp;				//提示初始化成功
	for(;;) put_char(get_char());
}

void abort(void)
{
	
}

void SCI0_init()
{  
	int i;
	SCI.SCSCR.BYTE = 0x00;				//禁止发送中断、禁止接收中断、发送禁止、接收禁止、多处理器中断禁止、发送结束中断禁止、异步内部时钟SCK引脚输入状态
	SCI.SCSMR.BYTE = 0x00;				//异步、8数据位、无奇偶校验、1位停止位、非多处理器模式、模块时钟不分频
	SCI.SCBRR = 0x19;					//模块时钟32MHz，设置波特率38400bit/s
	for ( i = 0 ; i < 2000 ; i++);		//延时使波特率生效
	SCI.SCSCR.BYTE = 0x30;				//发送接收使能 
}

// Send a character by SCI0
void put_char ( char P )
{
	//while(SCI.SCSSR.BIT.TEND==0);		//等待上次发送结束
	while (SCI.SCSSR.BIT.TDRE==0);  	/* TDRE=1? */
	SCI.SCTDR = P+1;													//写入SCTDR寄存器不影响TDRF状态。
	SCI.SCSSR.BIT.TDRE=0;	  			/* Clear TDRE bit in SCSSR1 */ 	//如果不清零则TDRE将在置1后永远不变，无法判断数据是否已经发出。
	                                                                  	//清零后在本帧数据发出后TDRE=1，可用于判断是否可以写入下一数据。    
	temp = ~temp;
 	LED_DATA = temp;

}

// Recieve a character by SCI0
char get_char ( )
{
	char Q;
	while (SCI.SCSSR.BIT.RDRF==0); 		/* RDRF=1? */
	Q=SCI.SCRDR;														//读取SCRDR寄存器不影响RDRF状态。
	SCI.SCSSR.BIT.RDRF=0;	  			/* Clear RDRF bit in SCSSR */  	//如果不清零则RDRF将在置1后永远不变，无法判断数据是否已被读取。
	                                                                   	//清零后在下帧数据接收后RDRF=1，可用于判断是否可以读取下一数据。
    return(Q);  			   			// Read the receive DATA		
}


/* 使用下面的写法也可以 */

/*
// Send a character by SCI0
void put_char ( char P )
{
	while (!(SCI.SCSSR.BYTE & 0x80) );  // TDRE=1? 
	SCI.SCTDR = P+1;													//写入SCTDR寄存器不影响TDRF状态
	SCI.SCSSR.BYTE &= 0x7f;  			// Clear TDRE bit in SCSSR1  	//如果不清零则TDRE将在置1后永远不变，无法判断数据是否已经发出。
	                                                                   	//清零后在本帧数据发出后TDRE=1，可用于判断是否可以写入下一数据。
}

// Recieve a character by SCI0
char get_char ( )
{
	while (!(SCI.SCSSR.BYTE & 0x40) );  // RDRF=1? 
	
	SCI.SCSSR.BYTE &= 0xbf;  			// Clear RDRF bit in SCSSR  	//如果不清零则RDRF将在置1后永远不变，无法判断数据是否已被读取。
	                                                                   	//清零后在下帧数据接收后RDRF=1，可用于判断是否可以读取下一数据。
    return( SCI.SCRDR );     			// Read the receive DATA		//读取SCRDR寄存器不影响RDRF状态
}
*/