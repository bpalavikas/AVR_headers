/*
Header file for ATmega328p
*/

#ifndef _IO328P_H
#define _IO328P_H

#include <stdlib.h>
#include <stdint.h>
#include "register_pins.h"

// DEFINE BASE
//PORT
#define PORTB_BASE 0x03
#define PORTC_BASE 0x06
#define PORTD_BASE 0x09

#define OFFSET 0x20

// Timers
#define TIMER0_BASE 0x24
#define TIMER1_BASE 0x80
#define TIMER2_BASE 0xB0

// ADC
#define ADC_BASE 0x78
#define ADC_REG_BASE 0x30

// Protocols
//IC2
#define I2C_BASE 0xB8
// UART
#define UART_BASE 0xC0
// SPI
#define SPI_BASE 0x2C

// INTERUPTS FLAGS
#define INT_TIMER_BASE 0x6E
#define FLAG_TIMER_BASE 0x15
#define EICRA_BASE 0x69
#define INT_EXTERNAL_BASE 0x1C

#define INT_PIN_BASE 0x6B

#define CONTROL_REG_BASE 0x33


// Pointers
//GPIO
#define GPIOB           ((GPIO_TypeDef *)(PORTB_BASE + OFFSET))
#define GPIOC           ((GPIO_TypeDef *)(PORTC_BASE + OFFSET))
#define GPIOD           ((GPIO_TypeDef *)(PORTD_BASE + OFFSET))

//TIMERS
#define TIMER0          ((TIMER_8_BIT_TypeDef  *) (TIMER0_BASE + OFFSET))
#define TIMER1          ((TIMER_16_BIT_TypeDef *) TIMER1_BASE)
#define TIMER2          ((TIMER_8_BIT_TypeDef  *) TIMER2_BASE)
#define FLAG_TIMER      ((FLAG_TIMER_TypeDef *) (FLAG_TIMER_BASE + OFFSET))
#define INT_TIMER       ((INT_TIMER_TypeDef *) INT_TIMER_BASE)

//ADC
#define ADC             ((ADC_TypeDef *) ADC_BASE)
#define ACSR            ((uint8_t *) (ADC_REG_BASE + OFFSET))

// PROTOCOLS
#define I2C             ((I2C_TypeDef *) I2C_BASE)
#define UART            ((UART_TypeDef *) UART_BASE)
#define SPI             ((SPI_TypeDef *) SPI_BASE)

// Interupts flags
#define INT_EXTERNAL    ((INT_EXTERNAL_TypeDef *) (INT_EXTERNAL_BASE + OFFSET))
#define INT_PIN         ((INT_PIN_TypeDef *) INT_PIN_BASE)
#define EICRA           ((uint8_t *) EICRA_BASE)

#define CONTROL_REG     ((CONTROL_REG_TypeDef *)(CONTROL_REG_BASE + OFFSET))

// Struct registers
// GPIO
typedef struct{
    volatile uint8_t PIN;
    volatile uint8_t DDR;
    volatile uint8_t PORT;
}GPIO_TypeDef;

// TIMER 8 BIT
typedef struct{
    volatile uint8_t TCCRA;
    volatile uint8_t TCCRB;
    volatile uint8_t TCNT;
    volatile uint8_t OCRA;
    volatile uint8_t OCRB; 
    volatile uint8_t PAD1;
    volatile uint8_t ASSR;
}TIMER_8_BIT_TypeDef;

// TIMER 16 BIT
typedef struct{
    volatile uint8_t TCCRA;
    volatile uint8_t TCCRB;
    volatile uint8_t TCCRC;
    volatile uint8_t PAD;
    volatile uint8_t TCNTL;
    volatile uint8_t TCNTH;
    volatile uint8_t ICRL;
    volatile uint8_t ICRH;
    volatile uint8_t OCRAL;
    volatile uint8_t OCRAH;
    volatile uint8_t OCRBL;
    volatile uint8_t OCRBH;
}TIMER_16_BIT_TypeDef;

// ADC
typedef struct{
    volatile uint8_t ADCL;
    volatile uint8_t ADCH;
    volatile uint8_t ADCSRA;
    volatile uint8_t ADCSRB;
    volatile uint8_t ADMUX;
    volatile uint8_t PAD;
    volatile uint8_t DIDR0;
    volatile uint8_t DIDR1;
}ADC_TypeDef;

// I2C
typedef struct{
    volatile uint8_t TWBR;
    volatile uint8_t TWSR;
    volatile uint8_t TWAR;
    volatile uint8_t TWDR;
    volatile uint8_t TWCR;
    volatile uint8_t TWAMR;
}I2C_TypeDef;

// UART
typedef struct{
    volatile uint8_t UCSR0A;
    volatile uint8_t UCSR0B;
    volatile uint8_t UCSR0C;
    volatile uint8_t PAD1;
    volatile uint8_t UBRR0L;
    volatile uint8_t UBRR0H;
    volatile uint8_t UDR0;
}UART_TypeDef;

//SPI
typedef struct{
    volatile uint8_t SPCR;
    volatile uint8_t SPSR;
    volatile uint8_t SPDR;
}SPI_TypeDef;

// INTERUPTS

// TImer
typedef struct{
    volatile uint8_t TIMSK0;
    volatile uint8_t TIMSK1;
    volatile uint8_t TIMSK2;
}INT_TIMER_TypeDef;


// FLAGS

// TIMER
typedef struct{
    volatile uint8_t TIFR0;
    volatile uint8_t TIFR1;
    volatile uint8_t TIFR2;
}FLAG_TIMER_TypeDef;

// External INT 
typedef struct{
    volatile uint8_t EIFR;
    volatile uint8_t EIMSK;
}INT_EXTERNAL_TypeDef;

// PIN INT
typedef struct{
    volatile uint8_t PCMSK0;
    volatile uint8_t PCMSK1;
    volatile uint8_t PCMSK2;
}INT_PIN_TypeDef;

//CONTROL REG
typedef struct{
    volatile uint8_t SMCR;
    volatile uint8_t MCUSR;
    volatile uint8_t MCUCR;
}CONTROL_REG_TypeDef;

#endif
