/*  EasyPIO.h
 *    Created:    8 October 2013
 *            Sarah_Lichtman@hmc.edu & Joshua_Vasquez@hmc.edu
 *    Last Modified:  5 April 2014
 *            Sarah_Lichtman@hmc.edu & Joshua_Vasquez@hmc.edu
 *                      15 August 2014
 *                      David_Harris@hmc.edu  (simplify pinMode)
 *            
 *  Library to simplify memory access on Raspberry Pi (Broadcom BCM2835). 
 *  Must be run with root permissions using sudo.
*/

#ifndef EASY_PIO_H
#define EASY_PIO_H

// Include statements
#include <sys/mman.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/////////////////////////////////////////////////////////////////////
// Constants
/////////////////////////////////////////////////////////////////////

// GPIO FSEL Types
#define INPUT  0
#define OUTPUT 1
#define ALT0   4
#define ALT1   5
#define ALT2   6
#define ALT3   7
#define ALT4   3
#define ALT5   2

// Clock Manager Bitfield offsets:
#define PWM_CLK_PASSWORD 0x5a000000
#define PWM_MASH 9
#define PWM_KILL 5
#define PWM_ENAB 4
#define PWM_SRC 0

// PWM Constants
#define PLL_FREQUENCY 500000000 // default PLLD value is 500 [MHz]
#define CM_FREQUENCY 25000000   // max pwm clk is 25 [MHz]
#define PLL_CLOCK_DIVISOR (PLL_FREQUENCY / CM_FREQUENCY)

/////////////////////////////////////////////////////////////////////
// Memory Map
/////////////////////////////////////////////////////////////////////

// These #define values are specific to the BCM2835, taken from "BCM2835 ARM Peripherals"
//#define BCM2835_PERI_BASE        0x20000000
// Updated to BCM2836 for Raspberry Pi 2.0 Fall 2015 dmh
#define BCM2835_PERI_BASE        0x3F000000

#define GPIO_BASE         (BCM2835_PERI_BASE + 0x200000)
#define UART_BASE         (BCM2835_PERI_BASE + 0x201000)
#define SPI0_BASE         (BCM2835_PERI_BASE + 0x204000)
#define PWM_BASE          (BCM2835_PERI_BASE + 0x20c000)

#define SYS_TIMER_BASE        (BCM2835_PERI_BASE + 0x3000) 
#define ARM_TIMER_BASE        (BCM2835_PERI_BASE + 0xB000)

#define CM_PWM_BASE             (BCM2835_PERI_BASE + 0x101000)

#define BLOCK_SIZE (4*1024)

// Pointers that will be memory mapped when pioInit() is called
volatile unsigned int *gpio; //pointer to base of gpio
volatile unsigned int *spi;  //pointer to base of spi registers
volatile unsigned int *pwm;

volatile unsigned int *sys_timer;
volatile unsigned int *arm_timer; // pointer to base of arm timer registers

volatile unsigned int *uart;
volatile unsigned int *cm_pwm;

/////////////////////////////////////////////////////////////////////
// GPIO Registers
/////////////////////////////////////////////////////////////////////

// Function Select
#define GPFSEL    ((volatile unsigned int *) (gpio + 0))
typedef struct
{
    unsigned FSEL0      : 3;
    unsigned FSEL1      : 3;
    unsigned FSEL2      : 3;
    unsigned FSEL3      : 3;
    unsigned FSEL4      : 3;
    unsigned FSEL5      : 3;
    unsigned FSEL6      : 3;
    unsigned FSEL7      : 3;
    unsigned FSEL8      : 3;
    unsigned FSEL9      : 3;
    unsigned            : 2;
}gpfsel0bits;
#define GPFSEL0bits (*(volatile gpfsel0bits*) (gpio + 0))   
#define GPFSEL0 (*(volatile unsigned int*) (gpio + 0))

typedef struct
{
    unsigned FSEL10      : 3;
    unsigned FSEL11      : 3;
    unsigned FSEL12      : 3;
    unsigned FSEL13      : 3;
    unsigned FSEL14      : 3;
    unsigned FSEL15      : 3;
    unsigned FSEL16      : 3;
    unsigned FSEL17      : 3;
    unsigned FSEL18      : 3;
    unsigned FSEL19      : 3;
    unsigned             : 2;
}gpfsel1bits;
#define GPFSEL1bits (*(volatile gpfsel1bits*) (gpio + 1))   
#define GPFSEL1 (*(volatile unsigned int*) (gpio + 1))

typedef struct
{
    unsigned FSEL20      : 3;
    unsigned FSEL21      : 3;
    unsigned FSEL22      : 3;
    unsigned FSEL23      : 3;
    unsigned FSEL24      : 3;
    unsigned FSEL25      : 3;
    unsigned FSEL26      : 3;
    unsigned FSEL27      : 3;
    unsigned FSEL28      : 3;
    unsigned FSEL29      : 3;
    unsigned             : 2;
}gpfsel2bits;
#define GPFSEL2bits (* (volatile gpfsel2bits*) (gpio + 2))   
#define GPFSEL2 (* (volatile unsigned int *) (gpio + 2))                        

typedef struct
{
    unsigned FSEL30      : 3;
    unsigned FSEL31      : 3;
    unsigned FSEL32      : 3;
    unsigned FSEL33      : 3;
    unsigned FSEL34      : 3;
    unsigned FSEL35      : 3;
    unsigned FSEL36      : 3;
    unsigned FSEL37      : 3;
    unsigned FSEL38      : 3;
    unsigned FSEL39      : 3;
    unsigned             : 2;
}gpfsel3bits;
#define GPFSEL3bits (* (volatile gpfsel3bits*) (gpio + 3))   
#define GPFSEL3 (* (volatile unsigned int *) (gpio + 3))                        


typedef struct
{
    unsigned FSEL40      : 3;
    unsigned FSEL41      : 3;
    unsigned FSEL42      : 3;
    unsigned FSEL43      : 3;
    unsigned FSEL44      : 3;
    unsigned FSEL45      : 3;
    unsigned FSEL46      : 3;
    unsigned FSEL47      : 3;
    unsigned FSEL48      : 3;
    unsigned FSEL49      : 3;
    unsigned             : 2;
}gpfsel4bits;
#define GPFSEL4bits (* (volatile gpfsel4bits*) (gpio + 4))   
#define GPFSEL4 (* (volatile unsigned int *) (gpio + 4))                        

typedef struct
{
    unsigned FSEL50      : 3;
    unsigned FSEL51      : 3;
    unsigned FSEL52      : 3;
    unsigned FSEL53      : 3;
    unsigned             : 20;
}gpfsel5bits;
#define GPFSEL5bits (* (volatile gpfsel5bits*) (gpio + 5))   
#define GPFSEL5 (* (volatile unsigned int *) (gpio + 5))                        

// Pin Output Select
#define GPSET    ((volatile unsigned int *) (gpio + 7))
typedef struct
{
    unsigned SET0       : 1;
    unsigned SET1       : 1;
    unsigned SET2       : 1;
    unsigned SET3       : 1;
    unsigned SET4       : 1;
    unsigned SET5       : 1;
    unsigned SET6       : 1;
    unsigned SET7       : 1;
    unsigned SET8       : 1;
    unsigned SET9       : 1;
    unsigned SET10      : 1;
    unsigned SET11      : 1;
    unsigned SET12      : 1;
    unsigned SET13      : 1;
    unsigned SET14      : 1;
    unsigned SET15      : 1;
    unsigned SET16      : 1;
    unsigned SET17      : 1;
    unsigned SET18      : 1;
    unsigned SET19      : 1;
    unsigned SET20      : 1;
    unsigned SET21      : 1;
    unsigned SET22      : 1;
    unsigned SET23      : 1;
    unsigned SET24      : 1;
    unsigned SET25      : 1;
    unsigned SET26      : 1;
    unsigned SET27      : 1;
    unsigned SET28      : 1;
    unsigned SET29      : 1;
    unsigned SET30      : 1;
    unsigned SET31      : 1;
}gpset0bits;
#define GPSET0bits (* (volatile gpset0bits*) (gpio + 7))   
#define GPSET0 (* (volatile unsigned int *) (gpio + 7)) 

typedef struct
{
    unsigned SET32       : 1;
    unsigned SET33       : 1;
    unsigned SET34       : 1;
    unsigned SET35       : 1;
    unsigned SET36       : 1;
    unsigned SET37       : 1;
    unsigned SET38       : 1;
    unsigned SET39       : 1;
    unsigned SET40       : 1;
    unsigned SET41       : 1;
    unsigned SET42       : 1;
    unsigned SET43       : 1;
    unsigned SET44       : 1;
    unsigned SET45       : 1;
    unsigned SET46       : 1;
    unsigned SET47       : 1;
    unsigned SET48       : 1;
    unsigned SET49       : 1;
    unsigned SET50       : 1;
    unsigned SET51       : 1;
    unsigned SET52       : 1;
    unsigned SET53       : 1;
    unsigned             : 10;
}gpset1bits;
#define GPSET1bits (* (volatile gpset1bits*) (gpio + 8))   
#define GPSET1 (* (volatile unsigned int *) (gpio + 8)) 

// Pin Output Clear
#define GPCLR    ((volatile unsigned int *) (gpio + 10))
typedef struct
{
    unsigned CLR0       : 1;
    unsigned CLR1       : 1;
    unsigned CLR2       : 1;
    unsigned CLR3       : 1;
    unsigned CLR4       : 1;
    unsigned CLR5       : 1;
    unsigned CLR6       : 1;
    unsigned CLR7       : 1;
    unsigned CLR8       : 1;
    unsigned CLR9       : 1;
    unsigned CLR10      : 1;
    unsigned CLR11      : 1;
    unsigned CLR12      : 1;
    unsigned CLR13      : 1;
    unsigned CLR14      : 1;
    unsigned CLR15      : 1;
    unsigned CLR16      : 1;
    unsigned CLR17      : 1;
    unsigned CLR18      : 1;
    unsigned CLR19      : 1;
    unsigned CLR20      : 1;
    unsigned CLR21      : 1;
    unsigned CLR22      : 1;
    unsigned CLR23      : 1;
    unsigned CLR24      : 1;
    unsigned CLR25      : 1;
    unsigned CLR26      : 1;
    unsigned CLR27      : 1;
    unsigned CLR28      : 1;
    unsigned CLR29      : 1;
    unsigned CLR30      : 1;
    unsigned CLR31      : 1;
}gpclr0bits;
#define GPCLR0bits (* (volatile gpclr0bits*) (gpio + 10))   
#define GPCLR0 (* (volatile unsigned int *) (gpio + 10)) 

typedef struct
{
    unsigned CLR32       : 1;
    unsigned CLR33       : 1;
    unsigned CLR34       : 1;
    unsigned CLR35       : 1;
    unsigned CLR36       : 1;
    unsigned CLR37       : 1;
    unsigned CLR38       : 1;
    unsigned CLR39       : 1;
    unsigned CLR40       : 1;
    unsigned CLR41       : 1;
    unsigned CLR42       : 1;
    unsigned CLR43       : 1;
    unsigned CLR44       : 1;
    unsigned CLR45       : 1;
    unsigned CLR46       : 1;
    unsigned CLR47       : 1;
    unsigned CLR48       : 1;
    unsigned CLR49       : 1;
    unsigned CLR50       : 1;
    unsigned CLR51       : 1;
    unsigned CLR52       : 1;
    unsigned CLR53       : 1;
    unsigned             : 10;
}gpclr1bits;
#define GPCLR1bits (* (volatile gpclr1bits*) (gpio + 11))   
#define GPCLR1 (* (volatile unsigned int *) (gpio + 11)) 

// Pin Level
#define GPLEV    ((volatile unsigned int *) (gpio + 13))
typedef struct
{
    unsigned LEV0       : 1;
    unsigned LEV1       : 1;
    unsigned LEV2       : 1;
    unsigned LEV3       : 1;
    unsigned LEV4       : 1;
    unsigned LEV5       : 1;
    unsigned LEV6       : 1;
    unsigned LEV7       : 1;
    unsigned LEV8       : 1;
    unsigned LEV9       : 1;
    unsigned LEV10      : 1;
    unsigned LEV11      : 1;
    unsigned LEV12      : 1;
    unsigned LEV13      : 1;
    unsigned LEV14      : 1;
    unsigned LEV15      : 1;
    unsigned LEV16      : 1;
    unsigned LEV17      : 1;
    unsigned LEV18      : 1;
    unsigned LEV19      : 1;
    unsigned LEV20      : 1;
    unsigned LEV21      : 1;
    unsigned LEV22      : 1;
    unsigned LEV23      : 1;
    unsigned LEV24      : 1;
    unsigned LEV25      : 1;
    unsigned LEV26      : 1;
    unsigned LEV27      : 1;
    unsigned LEV28      : 1;
    unsigned LEV29      : 1;
    unsigned LEV30      : 1;
    unsigned LEV31      : 1;
}gplev0bits;
#define GPLEV0bits (* (volatile gplev0bits*) (gpio + 13))   
#define GPLEV0 (* (volatile unsigned int *) (gpio + 13)) 


typedef struct
{
    unsigned LEV32       : 1;
    unsigned LEV33       : 1;
    unsigned LEV34       : 1;
    unsigned LEV35       : 1;
    unsigned LEV36       : 1;
    unsigned LEV37       : 1;
    unsigned LEV38       : 1;
    unsigned LEV39       : 1;
    unsigned LEV40       : 1;
    unsigned LEV41       : 1;
    unsigned LEV42       : 1;
    unsigned LEV43       : 1;
    unsigned LEV44       : 1;
    unsigned LEV45       : 1;
    unsigned LEV46       : 1;
    unsigned LEV47       : 1;
    unsigned LEV48       : 1;
    unsigned LEV49       : 1;
    unsigned LEV50       : 1;
    unsigned LEV51       : 1;
    unsigned LEV52       : 1;
    unsigned LEV53       : 1;
    unsigned             : 10;
}gplev1bits;
#define GPLEV1bits (* (volatile gplev1bits*) (gpio + 14))   
#define GPLEV1 (* (volatile unsigned int *) (gpio + 14)) 

/////////////////////////////////////////////////////////////////////
// SPI Registers
/////////////////////////////////////////////////////////////////////

typedef struct
{
  unsigned CS     :2;
  unsigned CPHA   :1;
  unsigned CPOL   :1;
  unsigned CLEAR    :2;
  unsigned CSPOL    :1;
  unsigned TA     :1;
  unsigned DMAEN    :1;
  unsigned INTD     :1;
  unsigned INTR     :1;
  unsigned ADCS   :1;
  unsigned REN    :1;
  unsigned LEN    :1;
  unsigned LMONO    :1;
  unsigned TE_EN    :1;
  unsigned DONE   :1;
  unsigned RXD    :1;
  unsigned TXD    :1;
  unsigned RXR    :1;
  unsigned RXF    :1;
  unsigned CSPOL0   :1;
  unsigned CSPOL1   :1;
  unsigned CSPOL2   :1;
  unsigned DMA_LEN  :1;
  unsigned LEN_LONG :1;
  unsigned      :6;
}spi0csbits;
#define SPI0CSbits (* (volatile spi0csbits*) (spi + 0))   
#define SPI0CS (* (volatile unsigned int *) (spi + 0))

#define SPI0FIFO (* (volatile unsigned int *) (spi + 1))
#define SPI0CLK (* (volatile unsigned int *) (spi + 2))
#define SPI0DLEN (* (volatile unsigned int *) (spi + 3))

/////////////////////////////////////////////////////////////////////
// System Timer Registers
/////////////////////////////////////////////////////////////////////

typedef struct
{
  unsigned M0   :1;
  unsigned M1   :1;
  unsigned M2   :1;
  unsigned M3   :1;
  unsigned    :28;
}sys_timer_csbits;
#define SYS_TIMER_CSbits (*(volatile sys_timer_csbits*) (sys_timer + 0))
#define SYS_TIMER_CS  (* (volatile unsigned int*)(sys_timer + 0))

#define SYS_TIMER_CLO   (* (volatile unsigned int*)(sys_timer + 1))
#define SYS_TIMER_CHI   (* (volatile unsigned int*)(sys_timer + 2))
#define SYS_TIMER_C0  (* (volatile unsigned int*)(sys_timer + 3))
#define SYS_TIMER_C1  (* (volatile unsigned int*)(sys_timer + 4))
#define SYS_TIMER_C2  (* (volatile unsigned int*)(sys_timer + 5))
#define SYS_TIMER_C3  (* (volatile unsigned int*)(sys_timer + 6))

/////////////////////////////////////////////////////////////////////
// ARM Interrupt Registers
/////////////////////////////////////////////////////////////////////

#define IRQ_PENDING_BASIC (* (volatile unsigned int *) (arm_timer + 128))
#define IRQ_PENDING1 (* (volatile unsigned int *) (arm_timer + 129))
#define IRQ_PENDING2 (* (volatile unsigned int *) (arm_timer + 130))

#define IRQ_ENABLE1 (* (volatile unsigned int *) (arm_timer + 132))
#define IRQ_ENABLE2 (* (volatile unsigned int *) (arm_timer + 133))
#define IRQ_ENABLE_BASIC (* (volatile unsigned int *) (arm_timer + 134))
#define IRQ_DISABLE1 (* (volatile unsigned int *) (arm_timer + 135))
#define IRQ_DISABLE2 (* (volatile unsigned int *) (arm_timer + 136))
#define IRQ_DISABLE_BASIC (* (volatile unsigned int *) (arm_timer + 137))

/////////////////////////////////////////////////////////////////////
// ARM Timer Registers
/////////////////////////////////////////////////////////////////////

#define ARM_TIMER_LOAD (* (volatile unsigned int *) (arm_timer + 256))
//TODO: make timer control struct
#define ARM_TIMER_CONTROL  (* (volatile unsigned int *) (arm_timer + 258))
#define ARM_TIMER_IRQCLR (* (volatile unsigned int*) (arm_timer + 259))
#define ARM_TIMER_RAWIRQ (* (volatile unsigned int *) (arm_timer + 260))
#define ARM_TIMER_RELOAD (* (volatile unsigned int *) (arm_timer + 262))
#define ARM_TIMER_DIV (* (volatile unsigned int *) (arm_timer + 263))

/////////////////////////////////////////////////////////////////////
// UART Registers
/////////////////////////////////////////////////////////////////////

typedef struct
{
    unsigned DATA       : 8;
    unsigned FE         : 1;
    unsigned PE         : 1;
    unsigned BE         : 1;
    unsigned OE         : 1;
    unsigned            : 20;  
} uart_drbits;
#define UART_DRbits (* (volatile uart_drbits*) (uart + 0))   
#define UART_DR (*(volatile unsigned int *) (uart + 0))

typedef struct
{
    unsigned int CTS        : 1;
    unsigned int DSR        : 1;
    unsigned int DCD        : 1;
    unsigned int BUSY       : 1;
    unsigned int RXFE       : 1;
    unsigned int TXFF       : 1;
    unsigned int RXFF       : 1;
    unsigned int TXFE       : 1;
    unsigned int RI         : 1;
    unsigned int            : 24;
} uart_frbits;
#define UART_FRbits (*(volatile uart_frbits*) (uart + 6))  
#define UART_FR (*(volatile unsigned int *) (uart + 6))

typedef struct
{
    unsigned int IBRD       : 16;
    unsigned int            : 16;
} uart_ibrdbits;
#define UART_IBRDbits   (*(volatile uart_ibrdbits*) (uart + 9))  
#define UART_IBRD (*(volatile unsigned int *) (uart + 9))

typedef struct
{
    unsigned int FBRD       : 6;
    unsigned int            : 26;
} uart_fbrdbits;
#define UART_FBRDbits    (*(volatile uart_fbrdbits*) (uart + 10)) 
#define UART_FBRD (*(volatile unsigned int *) (uart + 10))

typedef struct
{
    unsigned int BRK        : 1;
    unsigned int PEN        : 1;
    unsigned int EPS        : 1;
    unsigned int STP2       : 1;
    unsigned int FEN        : 1;
    unsigned int WLEN       : 2;
    unsigned int SPS        : 1;
    unsigned int            : 24;
} uart_lcrhbits;
#define UART_LCRHbits (* (volatile uart_lcrhbits*) (uart + 11)) 
#define UART_LCRH (*(volatile unsigned int *) (uart + 11))

typedef struct
{
    unsigned int UARTEN     : 1;
    unsigned int SIREN      : 1;
    unsigned int SIRLP      : 1;
    unsigned int            : 4;
    unsigned int LBE        : 1;
    unsigned int TXE        : 1;
    unsigned int RXE        : 1;
    unsigned int DTR        : 1;
    unsigned int RTS        : 1;
    unsigned int OUT1       : 1;
    unsigned int OUT2       : 1;
    unsigned int RTSEN      : 1;
    unsigned int CTSEN      : 1;
    unsigned int            : 16;
} uart_crbits;
#define UART_CRbits (* (volatile uart_crbits*) (uart + 12))
#define UART_CR (*(volatile unsigned int *) (uart + 12))


typedef struct
{
    unsigned int RIRMIS     : 1;
    unsigned int CTSRMIS    : 1;
    unsigned int DCDRMIS    : 1;
    unsigned int DSRRMIS    : 1;
    unsigned int RXRIS      : 1;
    unsigned int TXRIS      : 1;
    unsigned int RTRIS      : 1;
    unsigned int FERIS      : 1;
    unsigned int PERIS      : 1;
    unsigned int BERIS      : 1;
    unsigned int OERIS      : 1;
    unsigned int            : 21;
} uart_risbits;
#define UART_RISbits (* (volatile uart_risbits*) (uart + 15))
#define UART_RIS (*(volatile unsigned int *) (uart + 15))

/////////////////////////////////////////////////////////////////////
// PWM Registers
/////////////////////////////////////////////////////////////////////

typedef struct
{
    unsigned PWEN1      :1;
    unsigned MODE1      :1;
    unsigned RPTL1      :1;
    unsigned SBIT1      :1;
    unsigned POLA1      :1;
    unsigned USEF1      :1;
    unsigned CLRF1      :1;
    unsigned MSEN1      :1;
    unsigned PWEN2      :1;
    unsigned MODE2      :1;
    unsigned RPTL2      :1;
    unsigned SBIT2      :1;
    unsigned POLA2      :1;
    unsigned USEF2      :1;
    unsigned            :1;
    unsigned MSEN2      :1;
    unsigned            :16;
} pwm_ctlbits;
#define PWM_CTLbits (* (volatile pwm_ctlbits *) (pwm + 0))
#define PWM_CTL (*(volatile unsigned int *) (pwm + 0))

#define PWM_RNG1 (*(volatile unsigned int *) (pwm + 4))
#define PWM_DAT1 (*(volatile unsigned int *)(pwm + 5))

/////////////////////////////////////////////////////////////////////
// Clock Manager Registers
/////////////////////////////////////////////////////////////////////

typedef struct
{
    unsigned SRC        :4;
    unsigned ENAB       :1;
    unsigned KILL       :1;
    unsigned            :1;
    unsigned BUSY       :1;
    unsigned FLIP       :1;
    unsigned MASH       :2;
    unsigned            :13;
    unsigned PASSWD     :8;
}cm_pwmctl_bits;
#define CM_PWMCTLbits (* (volatile cm_pwmctl_bits *) (cm_pwm + 40))
#define CM_PWMCTL (* (volatile unsigned int*) (cm_pwm + 40))

typedef struct
{
    unsigned DIVF       :12;
    unsigned DIVI       :12;
    unsigned PASSWD     :8;
} cm_pwmdivbits;
#define CM_PWMDIVbits (* (volatile cm_pwmdivbits *) (cm_pwm + 41))
#define CM_PWMDIV (*(volatile unsigned int *)(cm_pwm + 41)) 

/////////////////////////////////////////////////////////////////////
// General Functions
/////////////////////////////////////////////////////////////////////

// TODO: return error code instead of printing (mem_fd, reg_map)
void pioInit() {
  int  mem_fd;
  void *reg_map;

  // /dev/mem is a psuedo-driver for accessing memory in the Linux filesystem
  if ((mem_fd = open("/dev/mem", O_RDWR|O_SYNC) ) < 0) {
        printf("can't open /dev/mem \n");
        exit(-1);
  }

  reg_map = mmap(
    NULL,             //Address at which to start local mapping (null means don't-care)
      BLOCK_SIZE,       //Size of mapped memory block
      PROT_READ|PROT_WRITE,// Enable both reading and writing to the mapped memory
      MAP_SHARED,       // This program does not have exclusive access to this memory
      mem_fd,           // Map to /dev/mem
      GPIO_BASE);       // Offset to GPIO peripheral

  if (reg_map == MAP_FAILED) {
      printf("gpio mmap error %d\n", (int)reg_map);
      close(mem_fd);
      exit(-1);
    }

  gpio = (volatile unsigned *)reg_map;

    reg_map = mmap(
    NULL,             //Address at which to start local mapping (null means don't-care)
      BLOCK_SIZE,       //Size of mapped memory block
      PROT_READ|PROT_WRITE,// Enable both reading and writing to the mapped memory
      MAP_SHARED,       // This program does not have exclusive access to this memory
      mem_fd,           // Map to /dev/mem
      SPI0_BASE);       // Offset to SPI peripheral

    if (reg_map == MAP_FAILED) {
      printf("spi mmap error %d\n", (int)reg_map);
      close(mem_fd);
      exit(-1);
    }

    spi = (volatile unsigned *)reg_map;

    reg_map = mmap(
    NULL,             //Address at which to start local mapping (null means don't-care)
      BLOCK_SIZE,       //Size of mapped memory block
      PROT_READ|PROT_WRITE,// Enable both reading and writing to the mapped memory
      MAP_SHARED,       // This program does not have exclusive access to this memory
      mem_fd,           // Map to /dev/mem
      PWM_BASE);       // Offset to PWM peripheral

    if (reg_map == MAP_FAILED) {
      printf("pwm mmap error %d\n", (int)reg_map);
      close(mem_fd);
      exit(-1);
    }

    pwm = (volatile unsigned *)reg_map;

    reg_map = mmap(
    NULL,             //Address at which to start local mapping (null means don't-care)
      BLOCK_SIZE,       //Size of mapped memory block
      PROT_READ|PROT_WRITE,// Enable both reading and writing to the mapped memory
      MAP_SHARED,       // This program does not have exclusive access to this memory
      mem_fd,           // Map to /dev/mem
      SYS_TIMER_BASE);       // Offset to Timer peripheral

    if (reg_map == MAP_FAILED) {
      printf("sys timer mmap error %d\n", (int)reg_map);
      close(mem_fd);
      exit(-1);
    }

    sys_timer = (volatile unsigned *)reg_map;

    reg_map = mmap(
    NULL,             //Address at which to start local mapping (null means don't-care)
      BLOCK_SIZE,       //Size of mapped memory block
      PROT_READ|PROT_WRITE,// Enable both reading and writing to the mapped memory
      MAP_SHARED,       // This program does not have exclusive access to this memory
      mem_fd,           // Map to /dev/mem
      ARM_TIMER_BASE);       // Offset to interrupts


    if (reg_map == MAP_FAILED) {
      printf("arm timer mmap error %d\n", (int)reg_map);
      close(mem_fd);
      exit(-1);
    }

    arm_timer = (volatile unsigned *)reg_map;

    reg_map = mmap(
    NULL,             //Address at which to start local mapping (null means don't-care)
      BLOCK_SIZE,       //Size of mapped memory block
      PROT_READ|PROT_WRITE,// Enable both reading and writing to the mapped memory
      MAP_SHARED,       // This program does not have exclusive access to this memory
      mem_fd,           // Map to /dev/mem
      UART_BASE);       // Offset to UART peripheral

    if (reg_map == MAP_FAILED) {
      printf("uart mmap error %d\n", (int)reg_map);
      close(mem_fd);
      exit(-1);
    }

    uart = (volatile unsigned *)reg_map;

    reg_map = mmap(
    NULL,             //Address at which to start local mapping (null means don't-care)
      BLOCK_SIZE,       //Size of mapped memory block
      PROT_READ|PROT_WRITE,// Enable both reading and writing to the mapped memory
      MAP_SHARED,       // This program does not have exclusive access to this memory
      mem_fd,           // Map to /dev/mem
      CM_PWM_BASE);       // Offset to ARM timer peripheral

    if (reg_map == MAP_FAILED) {
      printf("cm_pwm mmap error %d\n", (int)reg_map);
      close(mem_fd);
      exit(-1);
    }

    cm_pwm = (volatile unsigned *)reg_map;
  close(mem_fd);
}

/////////////////////////////////////////////////////////////////////
// Interrupt Functions
/////////////////////////////////////////////////////////////////////

int irq1, irq2, irqbasic;

void noInterrupts(void) {
    //save current interrupts
    irq1 = IRQ_ENABLE1;
    irq2 = IRQ_ENABLE2;
    irqbasic = IRQ_ENABLE_BASIC;

    //disable interrupts
    IRQ_DISABLE1 = irq1;
    IRQ_DISABLE2 = irq2;
    IRQ_DISABLE_BASIC = irqbasic; 
}

void interrupts(void) {
    if(IRQ_ENABLE1 == 0){ // if interrupts are disabled
    //restore interrupts
        IRQ_ENABLE1 = irq1;
        IRQ_ENABLE2 = irq2;
        IRQ_ENABLE_BASIC = irqbasic;
    }
}

/////////////////////////////////////////////////////////////////////
// GPIO Functions
/////////////////////////////////////////////////////////////////////

void pinMode(int pin, int function) {
    int reg      =  pin/10;
    int offset   = (pin%10)*3;
    GPFSEL[reg] &= ~((0b111 & ~function) << offset);
    GPFSEL[reg] |=  ((0b111 &  function) << offset);
}

void digitalWrite(int pin, int val) {
    int reg = pin / 32;
    int offset = pin % 32;

    if (val) GPSET[reg] = 1 << offset;
    else     GPCLR[reg] = 1 << offset;
}

int digitalRead(int pin) {
    int reg = pin / 32;
    int offset = pin % 32;

    return (GPLEV[reg] >> offset) & 0x00000001;
}

void pinsMode(int pins[], int numPins, int fxn) {
    int i;
    for(i=0; i<numPins; ++i) {
        pinMode(pins[i], fxn);
    }
}

void digitalWrites(int pins[], int numPins, int val) {
    int i;
    for(i=0; i<numPins; i++) {
        digitalWrite(pins[i], (val & 0x00000001));
        val = val >> 1;
    }
}

int digitalReads(int pins[], int numPins) {
    int i, val = digitalRead(pins[0]);
    
    for(i=1; i<numPins; i++) {
        val |= (digitalRead(pins[i]) << i);
    }
    return val;
}

/////////////////////////////////////////////////////////////////////
// Timer Functions
/////////////////////////////////////////////////////////////////////

// RPi timer peripheral clock is 1MHz.
// M0 and M3 are used by the GPU, so we must use M1 or M2

void delayMicros(int micros) {
    SYS_TIMER_C1 = SYS_TIMER_CLO + micros;   // set the compare register
    // 1000 clocks per millisecond
    SYS_TIMER_CSbits.M1 = 1;                 // reset match flag to 0
    while(SYS_TIMER_CSbits.M1 == 0);         // wait until the match flag is set
}

void delayMillis(int millis) {
    delayMicros(millis*1000);                // 1000 microseconds per millisecond
}

/////////////////////////////////////////////////////////////////////
// SPI Functions
/////////////////////////////////////////////////////////////////////

void spiInit(int freq, int settings) {
    //set GPIO 8 (CE), 9 (MISO), 10 (MOSI), 11 (SCLK) alt fxn 0 (SPI0)
    pinMode(8, ALT0);
    pinMode(9, ALT0);
    pinMode(10, ALT0);
    pinMode(11, ALT0);

    //Note: clock divisor will be rounded to the nearest power of 2
    SPI0CLK = 250000000/freq;   // set SPI clock to 250MHz / freq
    SPI0CS = settings;          
    SPI0CSbits.TA = 1;          // turn SPI on with the "transfer active" bit
}

char spiSendReceive(char send){
    SPI0FIFO = send;            // send data to slave
    while(!SPI0CSbits.DONE);    // wait until SPI transmission complete
    return SPI0FIFO;            // return received data
}

short spiSendReceive16(short send) {
    short rec;
    SPI0CSbits.TA = 1;          // turn SPI on with the "transfer active" bit
    rec = spiSendReceive((send & 0xFF00) >> 8); // send data MSB first
    rec = (rec << 8) | spiSendReceive(send & 0xFF);
    SPI0CSbits.TA = 0;          // turn off SPI
    return rec;
}

/////////////////////////////////////////////////////////////////////
// UART Functions
/////////////////////////////////////////////////////////////////////

void uartInit(int baud) {
    uint fb = 12000000/baud; // 3 MHz UART clock
    
    pinMode(14, ALT0);
    pinMode(15, ALT0);
    UART_IBRD = fb >> 6;       // 6 Fract, 16 Int bits of BRD
    UART_FBRD = fb & 63;
    UART_LCRHbits.WLEN = 3;     // 8 Data, 1 Stop, 0 Parity, no FIFO, no Flow
    UART_CRbits.UARTEN = 1;     // Enable uart.
}

char getCharSerial(void) {
    while (UART_FRbits.RXFE);    // Wait until data is available.
    return UART_DRbits.DATA;          // Return char from serial port.
}


void putCharSerial(char c) {
    while (!UART_FRbits.TXFE);
    UART_DRbits.DATA = c;
}

/////////////////////////////////////////////////////////////////////
// Pulse Width Modulation Functions
/////////////////////////////////////////////////////////////////////

void pwmInit() {
    pinMode(18, ALT5);

    // Configure the clock manager to generate a 25 MHz PWM clock.
    // Documentation on the clock manager is missing in the datasheet
    // but found in "BCM2835 Audio and PWM Clocks" by G.J. van Loo 6 Feb 2013.
    // Maximum operating frequency of PWM clock is 25 MHz.
    // Writes to the clock manager registers require simultaneous writing
    // a "password" of 5A to the top bits to reduce the risk of accidental writes.

    CM_PWMCTL = 0; // Turn off PWM before changing
    CM_PWMCTL =  PWM_CLK_PASSWORD|0x20; // Turn off clock generator
    while(CM_PWMCTLbits.BUSY); // Wait for generator to stop
    CM_PWMCTL = PWM_CLK_PASSWORD|0x206; // Src = unfiltered 500 MHz CLKD
    CM_PWMDIV = PWM_CLK_PASSWORD|(PLL_CLOCK_DIVISOR << 12); // PWM Freq = 25 MHz
    CM_PWMCTL = CM_PWMCTL|PWM_CLK_PASSWORD|0x10;    // Enable PWM clock
    while (!CM_PWMCTLbits.BUSY);    // Wait for generator to start    
    PWM_CTLbits.MSEN1 = 1;  // Channel 1 in mark/space mode
    PWM_CTLbits.PWEN1 = 1;  // Enable pwm
}

/**
 * dut is a value between 0 and 1 
 * freq is pwm frequency in Hz
 */
void setPWM(float freq, float dut) {
    PWM_RNG1 = (int)(CM_FREQUENCY / freq);
    PWM_DAT1 = (int)(dut * (CM_FREQUENCY / freq));
}

void analogWrite(int val) {
  setPWM(78125, val/255.0);
}

#endif
