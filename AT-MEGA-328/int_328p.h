/*
Header file for ATmega328p VECTORS
Page 65 Data sheet
9.4 Table 9-6 Reset and Interrupt Vectors in ATmega328P
*/

#ifndef _INT_328P_H
#define _INT_328P_H

// HEADERS
#include <stdint.h>
#include <stdlib.h>



typedef struct{
    volatile uint8_t RESET;
    volatile uint8_t pad;
    volatile uint8_t INT0_VECT;
    volatile uint8_t pad;
    volatile uint8_t INT1_VECT;
    volatile uint8_t pad;
    volatile uint8_t PCINT0_VECT;
    volatile uint8_t pad;
    volatile uint8_t PCINT1_VECT;
    volatile uint8_t pad;
    volatile uint8_t PCINT2_VECT;
    volatile uint8_t pad;
    volatile uint8_t WDT;
    volatile uint8_t pad;
    volatile uint8_t TIMER2_COMPA;
    volatile uint8_t pad;
    volatile uint8_t TIMER2_COMPB;
    volatile uint8_t pad;
    volatile uint8_t TIMER2_OVF;
    volatile uint8_t pad;
    volatile uint8_t TIMER1_CAPT;
    volatile uint8_t pad;
    volatile uint8_t TIMER1_COMPA;
    volatile uint8_t pad;
    volatile uint8_t TIMER1_COMPB;
    volatile uint8_t pad;
    volatile uint8_t TIMER1_OVF;
    volatile uint8_t pad;
    volatile uint8_t TIMER0_COMPA;
    volatile uint8_t pad;
    volatile uint8_t TIMER0_COMPB;
    volatile uint8_t pad;
    volatile uint8_t TIMER0_OVF;
    volatile uint8_t pad;
    volatile uint8_t SPI_STC;
    volatile uint8_t pad;
    volatile uint8_t USART_RX;
    volatile uint8_t pad;
    volatile uint8_t USART_UDRE;
    volatile uint8_t pad;
    volatile uint8_t USART_TX;
    volatile uint8_t pad;
    volatile uint8_t ADC;
    volatile uint8_t pad; 
    volatile uint8_t EE_READY;
    volatile uint8_t pad;
    volatile uint8_t ANALOG_COMP;
    volatile uint8_t pad;
    volatile uint8_t TWI;
    volatile uint8_t pad;
    volatile uint8_t SPM_READY;
    volatile uint8_t pad;
}VECT_TypeDef;

#endif