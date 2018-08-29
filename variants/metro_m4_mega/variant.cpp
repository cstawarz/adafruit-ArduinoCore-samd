/*
  Copyright (c) 2014-2015 Arduino LLC.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

#include "variant.h"

/*
 * Pins descriptions
 * TODO: sercoms, PWM, adc channel, interrupt defs
 */
const PinDescription g_APinDescription[]=
{
  // 0..13 - Digital pins
  // ----------------------
  // 0/1 - SERCOM/UART (Serial1)
  { PORTB, 25, PIO_SERCOM, (PIN_ATTR_DIGITAL|PIN_ATTR_PWM|PIN_ATTR_TIMER_ALT), No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_FAKE }, // RX: SERCOM3/PAD[1]
  { PORTB, 24, PIO_SERCOM, (PIN_ATTR_DIGITAL|PIN_ATTR_PWM|PIN_ATTR_TIMER_ALT), No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_FAKE }, // TX: SERCOM3/PAD[0]

  // 2..12
  // Digital Low
  { PORTC,  18, PIO_TCC_PDEC, (PIN_ATTR_DIGITAL|PIN_ATTR_PWM|PIN_ATTR_TIMER), No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER,  EXTERNAL_INT_FAKE },
  { PORTC,  19, PIO_TCC_PDEC, (PIN_ATTR_DIGITAL|PIN_ATTR_PWM|PIN_ATTR_TIMER), No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER,  EXTERNAL_INT_FAKE },
  { PORTC,  20, PIO_TCC_PDEC, (PIN_ATTR_DIGITAL|PIN_ATTR_PWM|PIN_ATTR_TIMER), No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER,  EXTERNAL_INT_FAKE },
  { PORTC,  21, PIO_TCC_PDEC, (PIN_ATTR_DIGITAL|PIN_ATTR_PWM|PIN_ATTR_TIMER), No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER,  EXTERNAL_INT_FAKE },
  { PORTD,  20, PIO_TCC_PDEC, (PIN_ATTR_DIGITAL|PIN_ATTR_PWM|PIN_ATTR_TIMER), No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER,  EXTERNAL_INT_FAKE },
  { PORTD,  21, PIO_TCC_PDEC, (PIN_ATTR_DIGITAL|PIN_ATTR_PWM|PIN_ATTR_TIMER), No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER,  EXTERNAL_INT_FAKE },

  // Digital High
  { PORTB,  18, PIO_TCC_PDEC, (PIN_ATTR_DIGITAL|PIN_ATTR_PWM|PIN_ATTR_TIMER), No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER,  EXTERNAL_INT_FAKE },
  { PORTB,  19, PIO_TCC_PDEC, (PIN_ATTR_DIGITAL|PIN_ATTR_PWM|PIN_ATTR_TIMER), No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER,  EXTERNAL_INT_FAKE },
  { PORTB,  22, PIO_TCC_PDEC, (PIN_ATTR_DIGITAL|PIN_ATTR_PWM|PIN_ATTR_TIMER), No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER,  EXTERNAL_INT_FAKE },
  { PORTB,  23, PIO_TCC_PDEC, (PIN_ATTR_DIGITAL|PIN_ATTR_PWM|PIN_ATTR_TIMER), No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER,  EXTERNAL_INT_FAKE },
  { PORTB,  0, PIO_TCC_PDEC, (PIN_ATTR_DIGITAL|PIN_ATTR_PWM|PIN_ATTR_TIMER), No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER,  EXTERNAL_INT_FAKE },

  // 13 (LED)
  { PORTB,  1, PIO_TCC_PDEC, (PIN_ATTR_DIGITAL|PIN_ATTR_PWM|PIN_ATTR_TIMER), No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER,  EXTERNAL_INT_FAKE },

  // 14..21 - Analog pins
  // --------------------
  { PORTA,  2, PIO_ANALOG, PIN_ATTR_ANALOG, ADC_ChannelFake, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_FAKE },
  { PORTA,  5, PIO_ANALOG, PIN_ATTR_ANALOG, ADC_ChannelFake, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_FAKE },
  { PORTB,  3, PIO_ANALOG, PIN_ATTR_ANALOG, ADC_ChannelFake, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_FAKE },
  { PORTC,  0, PIO_ANALOG, PIN_ATTR_ANALOG, ADC_ChannelFake, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_FAKE },
  { PORTC,  1, PIO_ANALOG, PIN_ATTR_ANALOG, ADC_ChannelFake, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_FAKE },
  { PORTC,  2, PIO_ANALOG, PIN_ATTR_ANALOG, ADC_ChannelFake, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_FAKE },
  { PORTC,  3, PIO_ANALOG, PIN_ATTR_ANALOG, ADC_ChannelFake, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_FAKE },
  { PORTB,  4, PIO_ANALOG, PIN_ATTR_ANALOG, ADC_ChannelFake, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_FAKE },

  // 22..53 - Extra Digital Pins
  // ----------------------
  // 22..29
  { NOT_A_PORT,  0, PIO_DIGITAL, (PIN_ATTR_DIGITAL), No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER,  EXTERNAL_INT_NONE },
  { NOT_A_PORT,  0, PIO_DIGITAL, (PIN_ATTR_DIGITAL), No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER,  EXTERNAL_INT_NONE },
  { PORTC,  17, PIO_DIGITAL, (PIN_ATTR_DIGITAL), No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER,  EXTERNAL_INT_FAKE },
  { PORTC,  16, PIO_DIGITAL, (PIN_ATTR_DIGITAL), No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER,  EXTERNAL_INT_FAKE },
  { PORTA,  12, PIO_DIGITAL, (PIN_ATTR_DIGITAL), No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER,  EXTERNAL_INT_FAKE },
  { PORTA,  13, PIO_DIGITAL, (PIN_ATTR_DIGITAL), No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER,  EXTERNAL_INT_FAKE },
  { PORTA,  14, PIO_DIGITAL, (PIN_ATTR_DIGITAL), No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER,  EXTERNAL_INT_FAKE },
  { NOT_A_PORT,  0, PIO_DIGITAL, (PIN_ATTR_DIGITAL), No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER,  EXTERNAL_INT_NONE },

  // 30..37
  { PORTA,  23, PIO_DIGITAL, (PIN_ATTR_DIGITAL), No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER,  EXTERNAL_INT_FAKE },
  { PORTA,  22, PIO_DIGITAL, (PIN_ATTR_DIGITAL), No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER,  EXTERNAL_INT_FAKE },
  { PORTA,  21, PIO_DIGITAL, (PIN_ATTR_DIGITAL), No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER,  EXTERNAL_INT_FAKE },
  { PORTA,  20, PIO_DIGITAL, (PIN_ATTR_DIGITAL), No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER,  EXTERNAL_INT_FAKE },
  { PORTA,  19, PIO_DIGITAL, (PIN_ATTR_DIGITAL), No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER,  EXTERNAL_INT_FAKE },
  { PORTA,  18, PIO_DIGITAL, (PIN_ATTR_DIGITAL), No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER,  EXTERNAL_INT_FAKE },
  { PORTA,  17, PIO_DIGITAL, (PIN_ATTR_DIGITAL), No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER,  EXTERNAL_INT_FAKE },
  { PORTA,  16, PIO_DIGITAL, (PIN_ATTR_DIGITAL), No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER,  EXTERNAL_INT_FAKE },

  // 38..45
  { PORTB,  15, PIO_DIGITAL, (PIN_ATTR_DIGITAL), No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER,  EXTERNAL_INT_FAKE },
  { PORTB,  14, PIO_DIGITAL, (PIN_ATTR_DIGITAL), No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER,  EXTERNAL_INT_FAKE },
  { PORTC,  13, PIO_DIGITAL, (PIN_ATTR_DIGITAL), No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER,  EXTERNAL_INT_FAKE },
  { PORTC,  12, PIO_DIGITAL, (PIN_ATTR_DIGITAL), No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER,  EXTERNAL_INT_FAKE },
  { PORTC,  15, PIO_DIGITAL, (PIN_ATTR_DIGITAL), No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER,  EXTERNAL_INT_FAKE },
  { PORTC,  14, PIO_DIGITAL, (PIN_ATTR_DIGITAL), No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER,  EXTERNAL_INT_FAKE },
  { PORTC,  11, PIO_DIGITAL, (PIN_ATTR_DIGITAL), No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER,  EXTERNAL_INT_FAKE },
  { PORTC,  10, PIO_DIGITAL, (PIN_ATTR_DIGITAL), No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER,  EXTERNAL_INT_FAKE },

  // 46..53
  { PORTC,  6, PIO_DIGITAL, (PIN_ATTR_DIGITAL), No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER,  EXTERNAL_INT_FAKE },
  { PORTC,  7, PIO_DIGITAL, (PIN_ATTR_DIGITAL), No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER,  EXTERNAL_INT_FAKE },
  { PORTC,  4, PIO_DIGITAL, (PIN_ATTR_DIGITAL), No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER,  EXTERNAL_INT_FAKE },
  { PORTC,  5, PIO_DIGITAL, (PIN_ATTR_DIGITAL), No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER,  EXTERNAL_INT_FAKE },
  { PORTD,  11, PIO_DIGITAL, (PIN_ATTR_DIGITAL), No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER,  EXTERNAL_INT_FAKE }, //same as MISO
  { PORTD,  8, PIO_DIGITAL, (PIN_ATTR_DIGITAL), No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER,  EXTERNAL_INT_FAKE }, //same as MOSI
  { PORTD,  9, PIO_DIGITAL, (PIN_ATTR_DIGITAL), No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER,  EXTERNAL_INT_FAKE }, //same as SCK
  { PORTD,  10, PIO_DIGITAL, (PIN_ATTR_DIGITAL), No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER,  EXTERNAL_INT_FAKE }, //same as SS

  // 54..61 - Additional ADC
  { PORTB,  5, PIO_ANALOG, PIN_ATTR_ANALOG, ADC_ChannelFake, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_FAKE },
  { PORTB,  6, PIO_ANALOG, PIN_ATTR_ANALOG, ADC_ChannelFake, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_FAKE },
  { PORTB,  7, PIO_ANALOG, PIN_ATTR_ANALOG, ADC_ChannelFake, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_FAKE },
  { PORTB,  8, PIO_ANALOG, PIN_ATTR_ANALOG, ADC_ChannelFake, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_FAKE },
  { PORTB,  9, PIO_ANALOG, PIN_ATTR_ANALOG, ADC_ChannelFake, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_FAKE },
  { PORTA,  4, PIO_ANALOG, PIN_ATTR_ANALOG, ADC_ChannelFake, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_FAKE },
  { PORTA,  6, PIO_ANALOG, PIN_ATTR_ANALOG, ADC_ChannelFake, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_FAKE },
  { PORTA,  7, PIO_ANALOG, PIN_ATTR_ANALOG, ADC_ChannelFake, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_FAKE },

  // 62..63 - I2C pins (SDA/SCL)
  // ----------------------
  { PORTB,  20, PIO_SERCOM_FAKE, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_FAKE }, //sda
  { PORTB,  21, PIO_SERCOM_FAKE, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_FAKE }, //scl

  // 64..66 - SPI pins (ICSP:MISO,SCK,MOSI)
  // ----------------------
  { PORTD,  11, PIO_DIGITAL, (PIN_ATTR_DIGITAL), No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER,  EXTERNAL_INT_FAKE },
  { PORTD,  8, PIO_DIGITAL, (PIN_ATTR_DIGITAL), No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER,  EXTERNAL_INT_FAKE },
  { PORTD,  9, PIO_DIGITAL, (PIN_ATTR_DIGITAL), No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER,  EXTERNAL_INT_FAKE },

  //67..74 - UARTS
  { PORTB,  16, PIO_SERCOM_FAKE, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_FAKE },
  { PORTB,  17, PIO_SERCOM_FAKE, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_FAKE },
  { PORTC,  22, PIO_SERCOM_FAKE, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_FAKE },
  { PORTC,  23, PIO_SERCOM_FAKE, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_FAKE },
  { PORTB,  12, PIO_SERCOM_FAKE, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_FAKE },
  { PORTB,  13, PIO_SERCOM_FAKE, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_FAKE },
  { PORTB,  20, PIO_SERCOM_FAKE, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_FAKE }, //same as sda
  { PORTB,  21, PIO_SERCOM_FAKE, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_FAKE }, //same as scl

  // 75..76 - RX/TX LEDS
  // --------------------
  { PORTC, 31, PIO_OUTPUT, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_FAKE }, // used as output only
  { PORTC, 30, PIO_OUTPUT, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_FAKE }, // used as output only

  // 77..79 - USB
  // --------------------
  { PORTA, 27, PIO_COM, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_FAKE }, // USB Host enable
  { PORTA, 24, PIO_COM, PIN_ATTR_NONE, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_8 }, // USB/DM
  { PORTA, 25, PIO_COM, PIN_ATTR_NONE, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_9 }, // USB/DP

  // 80..83 - SD SPI pins (SD:MISO,SCK,MOSI,CS)
  // ----------------------
  { PORTB,  29, PIO_SERCOM_FAKE, PIO_SERCOM, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_FAKE  },
  { PORTB,  27, PIO_SERCOM_FAKE, PIO_SERCOM, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_FAKE  },
  { PORTB,  26, PIO_SERCOM_FAKE, PIO_SERCOM, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_FAKE  },
  { PORTB,  28, PIO_SERCOM_FAKE, PIO_SERCOM, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_FAKE  },

  // 84 (AREF)
  { PORTA, 3, PIO_ANALOG, PIN_ATTR_ANALOG, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_3 }, // DAC/VREFP

  // ----------------------
  // 85..86 - Alternate use of A0 and A1 (DAC output)
  { PORTA,  2, PIO_ANALOG, PIN_ATTR_ANALOG, DAC_Channel0, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_2 }, // DAC/VOUT[0]
  { PORTA,  5, PIO_ANALOG, PIN_ATTR_ANALOG, DAC_Channel1, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_5 }, // DAC/VOUT[1]

  // 87 - LED #13 duplicate placeholder
  { PORTB,  1, PIO_TCC_PDEC, (PIN_ATTR_DIGITAL|PIN_ATTR_PWM|PIN_ATTR_TIMER), No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER,  EXTERNAL_INT_FAKE },

  // 88 - Internal NeoPixel
  { PORTC,  24, PIO_DIGITAL, (PIN_ATTR_DIGITAL), No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER,  EXTERNAL_INT_FAKE }, // used as output only

  // ----------------------
  // 89 - 94 QSPI (SCK, CS, IO0, IO1, IO2, IO3)
  { PORTB, 10, PIO_COM, PIN_ATTR_NONE, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_10 },
  { PORTB, 11, PIO_COM, PIN_ATTR_NONE, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_11 },
  { PORTA, 8, PIO_COM, PIN_ATTR_NONE, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_NMI },
  { PORTA, 9, PIO_COM, PIN_ATTR_NONE, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_9 },
  { PORTA, 10, PIO_COM, PIN_ATTR_NONE, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_10 },
  { PORTA, 11, PIO_COM, PIN_ATTR_NONE, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_11 },
} ;

const void* g_apTCInstances[TCC_INST_NUM+TC_INST_NUM]={ TCC0, TCC1, TCC2, TCC3, TCC4, TC5 } ;

// Multi-serial objects instantiation
SERCOM sercom0( SERCOM0 ) ;
SERCOM sercom1( SERCOM1 ) ;
SERCOM sercom2( SERCOM2 ) ;
SERCOM sercom3( SERCOM3 ) ;
SERCOM sercom4( SERCOM4 ) ;
SERCOM sercom5( SERCOM5 ) ;
SERCOM sercom6( SERCOM6 ) ;
SERCOM sercom7( SERCOM7 ) ;

Uart Serial1( &sercom0, PIN_SERIAL1_RX, PIN_SERIAL1_TX, PAD_SERIAL1_RX, PAD_SERIAL1_TX ) ;

void SERCOM0_0_Handler()
{
  Serial1.IrqHandler();
}
void SERCOM0_1_Handler()
{
  Serial1.IrqHandler();
}
void SERCOM0_2_Handler()
{
  Serial1.IrqHandler();
}
void SERCOM0_3_Handler()
{
  Serial1.IrqHandler();
}
