/*

*/

#ifndef _PINS32_H_
#define _PINS32_H_

//HEADERS
#include <stdint.h>
#include <stdlib.h>

//GPIO 
// PORTA
#define PA0 0x00
#define PA1 0x01
#define PA2 0x02
#define PA3 0x03
#define PA4 0x04
#define PA5 0x05
#define PA6 0x06
#define PA7 0x07

// PORTB
#define PB0 0x00
#define PB1 0x01
#define PB2 0x02
#define PB3 0x03
#define PB4 0x04
#define PB5 0x05
#define PB6 0x06
#define PB7 0x07

// PORTC
#define PC0 0x00
#define PC1 0x01
#define PC2 0x02
#define PC3 0x03
#define PC4 0x04
#define PC5 0x05
#define PC6 0x06
#define PC7 0x07

// PORTD
#define PD0 0x00
#define PD1 0x01
#define PD2 0x02
#define PD3 0x03
#define PD4 0x04
#define PD5 0x05
#define PD6 0x06
#define PD7 0x07

/* I2C */

// TWSR
#define TWPS0 0x00
#define TWPS1 0x01
//#define 0x02
#define TWS3  0x03
#define TWS4  0x04
#define TWS5  0x05
#define TWS6  0x06
#define TWS7  0x07

// TWAR
#define TWGCE 0x00
#define TWA0  0x01
#define TWA1  0x02
#define TWA2  0x03
#define TWA3  0x04
#define TWA4  0x05
#define TWA5  0x06
#define TWA6  0x07

// TWCR
#define TWIE  0x00
//#define 0x01
#define TWEN  0x02
#define TWWC  0x03
#define TWSTO 0x04
#define TWSTA 0x05
#define TWEA  0x06
#define TWINT 0x07

/* ADC */

//ADCSRA
#define ADPS0 0x00
#define ADPS1 0x01
#define ADPS2 0x02
#define ADIE  0x03
#define ADIF  0x04
#define ADATE 0x05
#define ADSC  0x06
#define ADEN  0x07

// ADMUX
#define MUX0  0x00
#define MUX1  0x01
#define MUX2  0x02
#define MUX3  0x03
#define MUX4  0x04
#define ADLAR 0x05
#define REFS0 0x06
#define REFS1 0x07

// ACSR
#define ACIS0 0x00
#define ACIS1 0x01
#define ACIC  0x02
#define ACIE  0x03
#define ACI   0x04
#define ACO   0x05
#define ACBG  0x06
#define ACD   0x07

/* UART */

// UCSRB
#define TXB8  0x00
#define RXB8  0x01
#define UCSZ2 0x02
#define TXEN  0x03
#define RXEN  0x04
#define UDRIE 0x05
#define TXCIE 0x06
#define RXCIE 0x07

// UCSRA
#define MPCM  0x00
#define U2X   0x01
#define PE    0x02
#define DOR   0x03
#define FE    0x04
#define UDRE  0x05
#define TXC   0x06
#define RXC   0x07

// UCSRC
#define UCPOL 0x00
#define UCSZ0 0x01
#define UCSZ1 0x02
#define USBS  0x03
#define UPM0  0x04
#define UPM1  0x05
#define UMSEL 0x06
#define URSEL 0x07

/* spi */

// SPCR
#define SPR0  0x00
#define SPR1  0x01
#define CPHA  0x02
#define CPOL  0x03
#define MSTR  0x04
#define DORD  0x05
#define SPE   0x06
#define SPIE  0x07

// SPSR
#define SPI2X 0x00
//#define 0x01
//#define 0x02
//#define 0x03
//#define 0x04
//#define 0x05
#define WCOL  0x06
#define SPIF  0x07

/* TIMERS */

// TCCR2
#define CS20  0x00
#define CS21  0x01
#define CS22  0x02
#define WGM21 0x03
#define COM20 0x04
#define COM21 0x05
#define WGM20 0x06
#define FOC2  0x07

// TCCR1B
#define CS10  0x00
#define CS11  0x01
#define CS12  0x02
#define WGM12 0x03
#define WGM13 0x04
//#define 0x05
#define ICES1 0x06
#define ICNC1 0x07

// TCCR1A
#define WGM10  0x00
#define WGM11  0x01
#define FOC1B  0x02
#define FOC1A  0x03
#define COM1B0 0x04
#define COM1B1 0x05
#define COM1A0 0x06
#define COM1A1 0x07

// TCCR0
#define CS00  0x00
#define CS01  0x01
#define CS02  0x02
#define WGM01 0x03
#define COM00 0x04
#define COM01 0x05
#define WGM00 0x06
#define FOC0  0x07

// TIFR
#define TOV0  0x00
#define OCF0  0x01
#define TOV1  0x02
#define OCF1B 0x03
#define OCF1A 0x04
#define ICF1  0x05
#define TOV2  0x06
#define OCF2  0x07

// TIMSK
#define TOIE0  0x00
#define OCIE0  0x01
#define TOIE1  0x02
#define OCIE1B 0x03
#define OCIE1A 0x04
#define TICIE1 0x05
#define TOIE2  0x06
#define OCIE2  0x07

/* REGISTERS */

// EECR
#define EERE  0x00
#define EEWE  0x01
#define EEMWE 0x02
#define EERIE 0x03
//#define 0x04
//#define 0x05
//#define 0x06
//#define 0x07

// WDTCR
#define WDP0  0x00
#define WDP1  0x01
#define WDP2  0x02
#define WDE   0x03
#define WDTOE 0x04
//#define 0x05
//#define 0x06
//#define 0x07

// ASSR
#define TCR2UB 0x00
#define OCR2UB 0x01
#define TCN2UB 0x02
#define AS2    0x03
//#define 0x04
//#define 0x05
//#define 0x06
//#define 0x07

// SFIOR
#define PSR10 0x00
#define PSR2  0x01
#define PUD   0x02
#define ACME  0x03
//#define 0x04
#define ADTS0 0x05
#define ADTS1 0x06
#define ADTS2 0x07

// MCUCSR
#define PORF  0x00
#define EXTRF 0x01
#define BORF  0x02
#define WDRF  0x03
#define JTRF  0x04
//#define 0x05
#define ISC2  0x06
#define JTD   0x07

// MCUCR
#define ISC00 0x00
#define ISC01 0x01
#define ISC10 0x02
#define ISC11 0x03
#define SM0   0x04
#define SM1   0x05
#define SM2   0x06
#define SE    0x07

// SPMCR
#define SPMEN  0x00
#define PGERS  0x01
#define PGWRT  0x02
#define BLBSET 0x03
#define RWWSRE 0x04
//#define 0x05
#define RWWSB  0x06
#define SPMIE  0x07

// GIFR
//#define 0x00
//#define 0x01
//#define 0x02
//#define 0x03
//#define 0x04
#define INTF2 0x05
#define INTF0 0x06
#define INTF1 0x07

// GICR
#define IVCE  0x00
#define IVSEL 0x01
//#define 0x02
//#define 0x03
//#define 0x04
#define INT2  0x05
#define INT0  0x06
#define INT1  0x07

// SPL
#define SP0 0x00
#define SP1 0x01
#define SP2 0x02
#define SP3 0x03
#define SP4 0x04
#define SP5 0x05
#define SP6 0x06
#define SP7 0x07

// SPH
#define SP8  0x00
#define SP9  0x01
#define SP10 0x02
#define SP11 0x03
//#define 0x04
//#define 0x05
//#define 0x06
//#define 0x07

// SREG
#define C 0x00
#define Z 0x01
#define N 0x02
#define V 0x03
#define S 0x04
#define H 0x05
#define T 0x06
#define I 0x07

#endif