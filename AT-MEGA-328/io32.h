/*
AtMega32 header file

*/

#ifndef _IO32_H_
#define _IO32_H_

/* INCLUDES */
#include <stdint.h>
#include <stdlib.h>
#include "pins32.h"


/* Base address */
// OFFSET
#define BASE_OFFSET 0x20

// GPIO PORTS
#define BASE_GPIO_D 0x10
#define BASE_GPIO_C 0x13
#define BASE_GPIO_B 0x16
#define BASE_GPIO_A 0x19

// ADC
#define BASE_ADC 0x04

// TIMERS
// TIMER 2 8 bit
#define BASE_TIMER_2 0x23
#define BASE_TIMER_1 0x26
#define BASE_TIMER_0 0x32

// CONTROL REGISTERS
#define BASE_CTRL_REG 0x33

// FLAGS
#define BASE_FLAGS 0x3A
// PROTOCOLS
// i2c
#define BASE_I2C 0x00

// UART
#define BASE_UART 0x09
#define BASE_UART_REG 0x20
// SPI
#define BASE_SPI 0x0D

/* POINTERS */
// GPIO
#define GPIOA   ((GPIO_TypeDef *) (BASE_GPIO_A + BASE_OFFSET))
#define GPIOB   ((GPIO_TypeDef *) (BASE_GPIO_B + BASE_OFFSET))
#define GPIOC   ((GPIO_TypeDef *) (BASE_GPIO_C + BASE_OFFSET))
#define GPIOD   ((GPIO_TypeDef *) (BASE_GPIO_D + BASE_OFFSET))

// ADC
#define ADC     ((ADC_TypeDef *) (BASE_ADC + BASE_OFFSET))

// I2C
#define I2C     ((I2C_TypeDef *) (BASE_I2C + BASE_OFFSET))

// UART
#define UART    ((UART_TypeDef *) (BASE_UART + BASE_OFFSET))

// SPI
#define SPI     ((SPI_TypeDef *) (BASE_SPI + BASE_OFFSET))

// TIMER 0
#define TIMER_0 ((TIMER_0_TypeDef *) (BASE_TIMER_0 + BASE_OFFSET))
// TIMER 1
#define TIMER_1 ((TIMER_1_TypeDef *) (BASE_TIMER_1 + BASE_OFFSET))
// TIMER 2
#define TIMER_2 ((TIMER_2_TypeDef *) (BASE_TIMER_2 + BASE_OFFSET))

// CONTROL REGISTER
#define CTRL_REG    ((CTRL_REG_TypeDef *) (BASE_CTRL_REG + BASE_OFFSET))


/* STRUCTS */

// GPIO
typedef struct{
    volatile uint8_t PIN;
    volatile uint8_t DDR;
    volatile uint8_t PORT;
} GPIO_TypeDef;

// ADC
typedef struct{
    volatile uint8_t ADCL;
    volatile uint8_t ADCH;
    volatile uint8_t ADCSRA;
    volatile uint8_t ADMUX;
    volatile uint8_t ACSR;
} ADC_TypeDef;

// I2C
typedef struct{
    volatile uint8_t TWBR;
    volatile uint8_t TWSR;
    volatile uint8_t TWAR;
    volatile uint8_t TWDR;
} I2C_TypeDef;

// UART
typedef struct{
    volatile uint8_t UBRRL;
    volatile uint8_t UCSRB;
    volatile uint8_t UCSRA;
    volatile uint8_t UDR;
    volatile uint64_t PAD;  //8
    volatile uint64_t PAD;  //8
    volatile uint16_t PAD;  //2
    volatile uint8_t  PAD;  //1
    volatile uint8_t UCSRC;  
} UART_TypeDef;

// SPI
typedef struct {
    volatile uint8_t SPCR;
    volatile uint8_t SPSR;
    volatile uint8_t SPDR;
} SPI_TypeDef;

/* TIMERS */
// Timer 2
typedef struct{
    volatile uint8_t OCR;
    volatile uint8_t TCNT;
    volatile uint8_t TCCR;
} TIMER_2_TypeDef;

// Timer 1
typedef struct{
    volatile uint8_t ICRL;
    volatile uint8_t ICRH;
    volatile uint8_t OCRBL;
    volatile uint8_t OCRBH;
    volatile uint8_t OCRAL;
    volatile uint8_t OCRAH;
    volatile uint8_t TCNTL;
    volatile uint8_t TCNTH;
    volatile uint8_t TCCRB;
    volatile uint8_t TCCRA;
} TIMER_1_TypeDef;

// Timer 0
typedef struct{
    volatile uint8_t TCNT;
    volatile uint8_t TCCR;
    volatile uint32_t PAD;
    volatile uint8_t OCR;
} TIMER_0_TypeDef;

/* CONTROL REGISTERS */

typedef struct{
    volatile uint8_t EECR;       //0x1C
    volatile uint8_t EEDR;
    volatile uint8_t EEARL;
    volatile uint8_t EEARH;      //0x1F
    volatile uint8_t PAD;        //0x20
    volatile uint8_t WDTCR;      //0x21
    volatile uint8_t ASSR;       //0x22 
    volatile uint64_t PAD;       // 8
    volatile uint32_t PAD;       // 4
    volatile uint8_t PAD;        // 1
    volatile uint8_t SFIOR;      // 0x30
    volatile uint16_t PAD;       // 2
    volatile uint8_t MCUCSR;
    volatile uint8_t MCUCR;
    volatile uint8_t TWCR;
    volatile uint8_t SPMCR;
    volatile uint8_t TIFR;
    volatile uint8_t TIMSK;
    volatile uint8_t GIFR;
    volatile uint8_t GICR;
    volatile uint8_t PAD;        // 1
    volatile uint8_t SPL;
    volatile uint8_t SPH;
    volatile uint8_t SREG;
} CTRL_REG_TypeDef;

#endif