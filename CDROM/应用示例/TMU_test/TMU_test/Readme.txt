-------- PROJECT GENERATOR --------
PROJECT NAME :	TMU_test
PROJECT DIRECTORY :	C:\Documents and Settings\aguan.TSINGHUA-5E69FB\桌面\SH_test\TMU_test\TMU_test
CPU SERIES :	SH-3
CPU TYPE :	SH7709S
TOOLCHAIN NAME :	Hitachi SuperH RISC engine Standard Toolchain
TOOLCHAIN VERSION :	8.0.0.0
GENERATION FILES :
    C:\Documents and Settings\aguan.TSINGHUA-5E69FB\桌面\SH_test\TMU_test\TMU_test\dbsct.c
        Setting of B,R Section
    C:\Documents and Settings\aguan.TSINGHUA-5E69FB\桌面\SH_test\TMU_test\TMU_test\sbrk.c
        Program of sbrk
    C:\Documents and Settings\aguan.TSINGHUA-5E69FB\桌面\SH_test\TMU_test\TMU_test\iodefine.h
        Definition of I/O Register
    C:\Documents and Settings\aguan.TSINGHUA-5E69FB\桌面\SH_test\TMU_test\TMU_test\intprg.src
        Interrupt Program
    C:\Documents and Settings\aguan.TSINGHUA-5E69FB\桌面\SH_test\TMU_test\TMU_test\vecttbl.src
        Initialize of Vector Table
    C:\Documents and Settings\aguan.TSINGHUA-5E69FB\桌面\SH_test\TMU_test\TMU_test\vect.inc
        Definition of Vector
    C:\Documents and Settings\aguan.TSINGHUA-5E69FB\桌面\SH_test\TMU_test\TMU_test\env.inc
        Define Interruput Event Register
    C:\Documents and Settings\aguan.TSINGHUA-5E69FB\桌面\SH_test\TMU_test\TMU_test\vhandler.src
        Reset/Interrupt Handler
    C:\Documents and Settings\aguan.TSINGHUA-5E69FB\桌面\SH_test\TMU_test\TMU_test\resetprg.c
        Reset Program
    C:\Documents and Settings\aguan.TSINGHUA-5E69FB\桌面\SH_test\TMU_test\TMU_test\TMU_test.c
        Main Program
    C:\Documents and Settings\aguan.TSINGHUA-5E69FB\桌面\SH_test\TMU_test\TMU_test\sbrk.h
        Header file of sbrk file
    C:\Documents and Settings\aguan.TSINGHUA-5E69FB\桌面\SH_test\TMU_test\TMU_test\stacksct.h
        Setting of Stack area
START ADDRESS OF SECTION :
    H'000000000	RSTHandler
    H'000000800	INTHandler,VECTTBL,INTTBL,IntPRG
    H'000001000	PResetPRG
    H'000002000	P,C,C$BSEC,C$DSEC,D
    H'07F000000	B,R
    H'07FFFFBF0	S

* When the user program is executed,
* the interrupt mask has been masked.
* 
* Program start H'2000.
* RAM start H'7F000000.

SELECT TARGET :
    SH-3 Simulator
DATE & TIME : 2006-11-1 15:43:02
