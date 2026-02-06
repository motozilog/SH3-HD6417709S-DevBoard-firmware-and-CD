-------- PROJECT GENERATOR --------
PROJECT NAME :	trap_2
PROJECT DIRECTORY :	C:\Program Files\Renesas\HEW30\trap_2\trap_2
CPU SERIES :	SH-3
CPU TYPE :	SH7709S
TOOLCHAIN NAME :	Hitachi SuperH RISC engine Standard Toolchain
TOOLCHAIN VERSION :	8.0.0.0
GENERATION FILES :
    C:\Program Files\Renesas\HEW30\trap_2\trap_2\dbsct.c
        Setting of B,R Section
    C:\Program Files\Renesas\HEW30\trap_2\trap_2\sbrk.c
        Program of sbrk
    C:\Program Files\Renesas\HEW30\trap_2\trap_2\iodefine.h
        Definition of I/O Register
    C:\Program Files\Renesas\HEW30\trap_2\trap_2\intprg.src
        Interrupt Program
    C:\Program Files\Renesas\HEW30\trap_2\trap_2\vecttbl.src
        Initialize of Vector Table
    C:\Program Files\Renesas\HEW30\trap_2\trap_2\vect.inc
        Definition of Vector
    C:\Program Files\Renesas\HEW30\trap_2\trap_2\env.inc
        Define Interruput Event Register
    C:\Program Files\Renesas\HEW30\trap_2\trap_2\vhandler.src
        Reset/Interrupt Handler
    C:\Program Files\Renesas\HEW30\trap_2\trap_2\resetprg.c
        Reset Program
    C:\Program Files\Renesas\HEW30\trap_2\trap_2\trap_2.c
        Main Program
    C:\Program Files\Renesas\HEW30\trap_2\trap_2\sbrk.h
        Header file of sbrk file
    C:\Program Files\Renesas\HEW30\trap_2\trap_2\stacksct.h
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
DATE & TIME : 2006-10-25 17:15:00
