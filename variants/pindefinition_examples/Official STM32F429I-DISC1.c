
enum {
//*=default , +=alternate
//PIN    |BOARD LABEL                      |I2C1|I2C2|I2C3|SPI1 |SPI2 |SPI3 |SPI4 |SPI5 |SPI6 |USART1|USART2|USART3|USART6|ADC1 |TIM (PWM)                                 |USB       |SDIO|RCC       |SYS        
PA0 , // |B1 [Blue PushButton]             |    |    |    |     |     |     |     |     |     |      |      |      |      |*IN0 |*TIM2_CH1 *TIM5_CH1                       |          |    |          |           
PA1 , // |MEMS_INT1 [L3GD20_INT1]          |    |    |    |     |     |     |     |     |     |      |      |      |      |*IN1 |*TIM2_CH2 *TIM5_CH2                       |          |    |          |           
PA2 , // |MEMS_INT2 [L3GD20_INT2]          |    |    |    |     |     |     |     |     |     |      |*TX   |      |      |*IN2 |+TIM9_CH1 *TIM2_CH3 *TIM5_CH3             |          |    |          |           
PA3 , // |B5                               |    |    |    |     |     |     |     |     |     |      |*RX   |      |      |*IN3 |*TIM2_CH4 *TIM5_CH4 +TIM9_CH2             |          |    |          |           
PA4 , // |VSYNC                            |    |    |    |     |     |     |     |     |     |      |      |      |      |*IN4 |                                          |          |    |          |           
PA5 , // |                                 |    |    |    |*SCK |     |     |     |     |     |      |      |      |      |*IN5 |*TIM8_CH1N +TIM2_CH1                      |          |    |          |           
PA6 , // |G2                               |    |    |    |*MISO|     |     |     |     |     |      |      |      |      |*IN6 |*TIM3_CH1 +TIM13_CH1                      |          |    |          |           
PA7 , // |ACP_RST                          |    |    |    |*MOSI|     |     |     |     |     |      |      |      |      |*IN7 |+TIM8_CH1N +TIM14_CH1 *TIM3_CH2 *TIM1_CH1N|          |    |          |           
PA8 , // |I2C3_SCL [ACP/RF_SCL]            |    |    |*SCL|     |     |     |     |     |     |      |      |      |      |     |+TIM1_CH1                                 |          |    |          |           
PA9 , // |STLINK_RX [STM32F103CBT6_PA3]    |    |    |    |     |     |     |     |     |     |*TX   |      |      |      |     |+TIM1_CH2                                 |          |    |          |           
PA10, // |STLINK_TX [STM32F103CBT6_PA2]    |    |    |    |     |     |     |     |     |     |*RX   |      |      |      |     |+TIM1_CH3                                 |          |    |          |           
PA11, // |R4                               |    |    |    |     |     |     |     |     |     |      |      |      |      |     |+TIM1_CH4                                 |*OTG_FS_DM|    |          |           
PA12, // |R5                               |    |    |    |     |     |     |     |     |     |      |      |      |      |     |                                          |*OTG_FS_DP|    |          |           
PA13, // |SWDIO                            |    |    |    |     |     |     |     |     |     |      |      |      |      |     |                                          |          |    |          |*JTMS-SWDIO
PA14, // |SWCLK                            |    |    |    |     |     |     |     |     |     |      |      |      |      |     |                                          |          |    |          |*JTCK-SWCLK
PA15, // |TP_INT1 [Touch Panel]            |    |    |    |     |     |     |     |     |     |      |      |      |      |     |+TIM2_CH1                                 |          |    |          |*JTDI      
PB0 , // |R3                               |    |    |    |     |     |     |     |     |     |      |      |      |      |*IN8 |*TIM8_CH2N *TIM3_CH3 *TIM1_CH2N           |          |    |          |           
PB1 , // |R6                               |    |    |    |     |     |     |     |     |     |      |      |      |      |*IN9 |*TIM3_CH4 *TIM1_CH3N *TIM8_CH3N           |          |    |          |           
PB2 , // |BOOT1                            |    |    |    |     |     |     |     |     |     |      |      |      |      |     |                                          |          |    |          |           
PB3 , // |                                 |    |    |    |+SCK |     |+SCK |     |     |     |      |      |      |      |     |+TIM2_CH2                                 |          |    |          |*JTDO-SWO  
PB4 , // |                                 |    |    |    |+MISO|     |+MISO|     |     |     |      |      |      |      |     |+TIM3_CH1                                 |          |    |          |*JTRST     
PB5 , // |SDCKE1                           |    |    |    |+MOSI|     |+MOSI|     |     |     |      |      |      |      |     |+TIM3_CH2                                 |          |    |          |           
PB6 , // |SDNE1 [SDRAM_CS]                 |*SCL|    |    |     |     |     |     |     |     |+TX   |      |      |      |     |+TIM4_CH1                                 |          |    |          |           
PB7 , // |                                 |*SDA|    |    |     |     |     |     |     |     |+RX   |      |      |      |     |+TIM4_CH2                                 |          |    |          |           
PB8 , // |B6                               |+SCL|    |    |     |     |     |     |     |     |      |      |      |      |     |+TIM10_CH1 +TIM4_CH3                      |          |*D4 |          |           
PB9 , // |B7                               |+SDA|    |    |     |     |     |     |     |     |      |      |      |      |     |+TIM11_CH1 +TIM4_CH4                      |          |*D5 |          |           
PB10, // |G4                               |    |+SCL|    |     |*SCK |     |     |     |     |      |      |*TX   |      |     |+TIM2_CH3                                 |          |    |          |           
PB11, // |G5                               |    |+SDA|    |     |     |     |     |     |     |      |      |*RX   |      |     |+TIM2_CH4                                 |          |    |          |           
PB12, // |OTG_FS_ID                        |    |    |    |     |     |     |     |     |     |      |      |      |      |     |                                          |          |    |          |           
PB13, // |VBUS_FS                          |    |    |    |     |+SCK |     |     |     |     |      |      |      |      |     |+TIM1_CH1N                                |          |    |          |           
PB14, // |OTG_FS_DM                        |    |    |    |     |+MISO|     |     |     |     |      |      |      |      |     |*TIM12_CH1 +TIM8_CH2N +TIM1_CH2N          |*OTG_HS_DM|    |          |           
PB15, // |OTG_FS_DP                        |    |    |    |     |+MOSI|     |     |     |     |      |      |      |      |     |*TIM12_CH2 +TIM1_CH3N +TIM8_CH3N          |*OTG_HS_DP|    |          |           
PC0 , // |SDNWE                            |    |    |    |     |     |     |     |     |     |      |      |      |      |*IN10|                                          |          |    |          |           
PC1 , // |NCS_MEMS_SPI [L3GD20_CS_I2C/SPI] |    |    |    |     |     |     |     |     |     |      |      |      |      |*IN11|                                          |          |    |          |           
PC2 , // |CSX [LCD-RGB_CSX]                |    |    |    |     |*MISO|     |     |     |     |      |      |      |      |*IN12|                                          |          |    |          |           
PC3 , // |                                 |    |    |    |     |*MOSI|     |     |     |     |      |      |      |      |*IN13|                                          |          |    |          |           
PC4 , // |OTG_FS_PSO [OTG_FS_PowerSwitchOn]|    |    |    |     |     |     |     |     |     |      |      |      |      |*IN14|                                          |          |    |          |           
PC5 , // |OTG_FS_OC [OTG_FS_OverCurrent]   |    |    |    |     |     |     |     |     |     |      |      |      |      |*IN15|                                          |          |    |          |           
PC6 , // |HSYNC                            |    |    |    |     |     |     |     |     |     |      |      |      |*TX   |     |*TIM8_CH1 +TIM3_CH1                       |          |*D6 |          |           
PC7 , // |G6                               |    |    |    |     |     |     |     |     |     |      |      |      |*RX   |     |*TIM8_CH2 +TIM3_CH2                       |          |*D7 |          |           
PC8 , // |                                 |    |    |    |     |     |     |     |     |     |      |      |      |      |     |*TIM8_CH3 +TIM3_CH3                       |          |*D0 |          |           
PC9 , // |I2C3_SDA [ACP/RF_SDA]            |    |    |*SDA|     |     |     |     |     |     |      |      |      |      |     |*TIM8_CH4 +TIM3_CH4                       |          |*D1 |          |           
PC10, // |R2                               |    |    |    |     |     |*SCK |     |     |     |      |      |+TX   |      |     |                                          |          |*D2 |          |           
PC11, // |                                 |    |    |    |     |     |*MISO|     |     |     |      |      |+RX   |      |     |                                          |          |*D3 |          |           
PC12, // |                                 |    |    |    |     |     |*MOSI|     |     |     |      |      |      |      |     |                                          |          |*CK |          |           
PC13, // |                                 |    |    |    |     |     |     |     |     |     |      |      |      |      |     |                                          |          |    |          |           
PC14, // |PC14-OSC32_IN                    |    |    |    |     |     |     |     |     |     |      |      |      |      |     |                                          |          |    |*OSC32_IN |           
PC15, // |PC15-OSC32_OUT                   |    |    |    |     |     |     |     |     |     |      |      |      |      |     |                                          |          |    |*OSC32_OUT|           
PD0 , // |D2                               |    |    |    |     |     |     |     |     |     |      |      |      |      |     |                                          |          |    |          |           
PD1 , // |D3                               |    |    |    |     |     |     |     |     |     |      |      |      |      |     |                                          |          |    |          |           
PD2 , // |                                 |    |    |    |     |     |     |     |     |     |      |      |      |      |     |                                          |          |*CMD|          |           
PD3 , // |G7                               |    |    |    |     |+SCK |     |     |     |     |      |      |      |      |     |                                          |          |    |          |           
PD4 , // |                                 |    |    |    |     |     |     |     |     |     |      |      |      |      |     |                                          |          |    |          |           
PD5 , // |                                 |    |    |    |     |     |     |     |     |     |      |+TX   |      |      |     |                                          |          |    |          |           
PD6 , // |B2                               |    |    |    |     |     |+MOSI|     |     |     |      |+RX   |      |      |     |                                          |          |    |          |           
PD7 , // |                                 |    |    |    |     |     |     |     |     |     |      |      |      |      |     |                                          |          |    |          |           
PD8 , // |D13                              |    |    |    |     |     |     |     |     |     |      |      |+TX   |      |     |                                          |          |    |          |           
PD9 , // |D14                              |    |    |    |     |     |     |     |     |     |      |      |+RX   |      |     |                                          |          |    |          |           
PD10, // |D15                              |    |    |    |     |     |     |     |     |     |      |      |      |      |     |                                          |          |    |          |           
PD11, // |TE [LCD-RGB_TE]                  |    |    |    |     |     |     |     |     |     |      |      |      |      |     |                                          |          |    |          |           
PD12, // |RDX [LDC-RGB_RDX]                |    |    |    |     |     |     |     |     |     |      |      |      |      |     |*TIM4_CH1                                 |          |    |          |           
PD13, // |WRX_DCX [LCD-RGB_WRX_DCX]        |    |    |    |     |     |     |     |     |     |      |      |      |      |     |*TIM4_CH2                                 |          |    |          |           
PD14, // |D0                               |    |    |    |     |     |     |     |     |     |      |      |      |      |     |*TIM4_CH3                                 |          |    |          |           
PD15, // |D1                               |    |    |    |     |     |     |     |     |     |      |      |      |      |     |*TIM4_CH4                                 |          |    |          |           
PE0 , // |NBL0 [SDRAM_LDQM]                |    |    |    |     |     |     |     |     |     |      |      |      |      |     |                                          |          |    |          |           
PE1 , // |NBL1 [SDRAM_UDQM]                |    |    |    |     |     |     |     |     |     |      |      |      |      |     |                                          |          |    |          |           
PE2 , // |                                 |    |    |    |     |     |     |*SCK |     |     |      |      |      |      |     |                                          |          |    |          |*TRACECLK  
PE3 , // |                                 |    |    |    |     |     |     |     |     |     |      |      |      |      |     |                                          |          |    |          |*TRACED0   
PE4 , // |                                 |    |    |    |     |     |     |     |     |     |      |      |      |      |     |                                          |          |    |          |*TRACED1   
PE5 , // |                                 |    |    |    |     |     |     |*MISO|     |     |      |      |      |      |     |*TIM9_CH1                                 |          |    |          |*TRACED2   
PE6 , // |                                 |    |    |    |     |     |     |*MOSI|     |     |      |      |      |      |     |*TIM9_CH2                                 |          |    |          |*TRACED3   
PE7 , // |D4                               |    |    |    |     |     |     |     |     |     |      |      |      |      |     |                                          |          |    |          |           
PE8 , // |D5                               |    |    |    |     |     |     |     |     |     |      |      |      |      |     |+TIM1_CH1N                                |          |    |          |           
PE9 , // |D6                               |    |    |    |     |     |     |     |     |     |      |      |      |      |     |*TIM1_CH1                                 |          |    |          |           
PE10, // |D7                               |    |    |    |     |     |     |     |     |     |      |      |      |      |     |+TIM1_CH2N                                |          |    |          |           
PE11, // |D8                               |    |    |    |     |     |     |     |     |     |      |      |      |      |     |*TIM1_CH2                                 |          |    |          |           
PE12, // |D9                               |    |    |    |     |     |     |+SCK |     |     |      |      |      |      |     |+TIM1_CH3N                                |          |    |          |           
PE13, // |D10                              |    |    |    |     |     |     |+MISO|     |     |      |      |      |      |     |*TIM1_CH3                                 |          |    |          |           
PE14, // |D11                              |    |    |    |     |     |     |+MOSI|     |     |      |      |      |      |     |*TIM1_CH4                                 |          |    |          |           
PE15, // |D12                              |    |    |    |     |     |     |     |     |     |      |      |      |      |     |                                          |          |    |          |           
PF0 , // |A0                               |    |*SDA|    |     |     |     |     |     |     |      |      |      |      |     |                                          |          |    |          |           
PF1 , // |A1                               |    |*SCL|    |     |     |     |     |     |     |      |      |      |      |     |                                          |          |    |          |           
PF2 , // |A2                               |    |    |    |     |     |     |     |     |     |      |      |      |      |     |                                          |          |    |          |           
PF3 , // |A3                               |    |    |    |     |     |     |     |     |     |      |      |      |      |     |                                          |          |    |          |           
PF4 , // |A4                               |    |    |    |     |     |     |     |     |     |      |      |      |      |     |                                          |          |    |          |           
PF5 , // |A5                               |    |    |    |     |     |     |     |     |     |      |      |      |      |     |                                          |          |    |          |           
PF6 , // |                                 |    |    |    |     |     |     |     |     |     |      |      |      |      |     |*TIM10_CH1                                |          |    |          |           
PF7 , // |SPI5_SCK [L3GD20_SCL/SPC]        |    |    |    |     |     |     |     |*SCK |     |      |      |      |      |     |*TIM11_CH1                                |          |    |          |           
PF8 , // |SPI5_MISO [L3GD20_SDO]           |    |    |    |     |     |     |     |*MISO|     |      |      |      |      |     |*TIM13_CH1                                |          |    |          |           
PF9 , // |SPI5_MOSI [L3GD20_SDA/SDI/SDO]   |    |    |    |     |     |     |     |*MOSI|     |      |      |      |      |     |*TIM14_CH1                                |          |    |          |           
PF10, // |ENABLE [LCD-RGB_ENABLE]          |    |    |    |     |     |     |     |     |     |      |      |      |      |     |                                          |          |    |          |           
PF11, // |SDNRAS                           |    |    |    |     |     |     |     |+MOSI|     |      |      |      |      |     |                                          |          |    |          |           
PF12, // |A6                               |    |    |    |     |     |     |     |     |     |      |      |      |      |     |                                          |          |    |          |           
PF13, // |A7                               |    |    |    |     |     |     |     |     |     |      |      |      |      |     |                                          |          |    |          |           
PF14, // |A8                               |    |    |    |     |     |     |     |     |     |      |      |      |      |     |                                          |          |    |          |           
PF15, // |A9                               |    |    |    |     |     |     |     |     |     |      |      |      |      |     |                                          |          |    |          |           
PG0 , // |A10                              |    |    |    |     |     |     |     |     |     |      |      |      |      |     |                                          |          |    |          |           
PG1 , // |A11                              |    |    |    |     |     |     |     |     |     |      |      |      |      |     |                                          |          |    |          |           
PG2 , // |                                 |    |    |    |     |     |     |     |     |     |      |      |      |      |     |                                          |          |    |          |           
PG3 , // |                                 |    |    |    |     |     |     |     |     |     |      |      |      |      |     |                                          |          |    |          |           
PG4 , // |BA0                              |    |    |    |     |     |     |     |     |     |      |      |      |      |     |                                          |          |    |          |           
PG5 , // |BA1                              |    |    |    |     |     |     |     |     |     |      |      |      |      |     |                                          |          |    |          |           
PG6 , // |R7                               |    |    |    |     |     |     |     |     |     |      |      |      |      |     |                                          |          |    |          |           
PG7 , // |DOTCLK [LCT-RGB_DOTCLK]          |    |    |    |     |     |     |     |     |     |      |      |      |      |     |                                          |          |    |          |           
PG8 , // |SDCLK                            |    |    |    |     |     |     |     |     |     |      |      |      |      |     |                                          |          |    |          |           
PG9 , // |                                 |    |    |    |     |     |     |     |     |     |      |      |      |+RX   |     |                                          |          |    |          |           
PG10, // |G3                               |    |    |    |     |     |     |     |     |     |      |      |      |      |     |                                          |          |    |          |           
PG11, // |B3                               |    |    |    |     |     |     |     |     |     |      |      |      |      |     |                                          |          |    |          |           
PG12, // |B4                               |    |    |    |     |     |     |     |     |*MISO|      |      |      |      |     |                                          |          |    |          |           
PG13, // |LD3 [Green Led]                  |    |    |    |     |     |     |     |     |*SCK |      |      |      |      |     |                                          |          |    |          |           
PG14, // |LD4 [Red Led]                    |    |    |    |     |     |     |     |     |*MOSI|      |      |      |+TX   |     |                                          |          |    |          |           
PG15, // |SDNCAS                           |    |    |    |     |     |     |     |     |     |      |      |      |      |     |                                          |          |    |          |           
PH0 , // |PH0-OSC_IN                       |    |    |    |     |     |     |     |     |     |      |      |      |      |     |                                          |          |    |*OSC_IN   |           
PH1 , // |PH1-OSC_OUT                      |    |    |    |     |     |     |     |     |     |      |      |      |      |     |                                          |          |    |*OSC_OUT  |           
NB_DIGITAL_PINS,
};

#include "stm32f1xx_hal.h"
#include "spi_com.h"
#include "twi.h"
#include "uart.h"
#include "analog.h"
#include "variant.h"

extern const PinDescription g_APinDescription[]=
{
  { PA0 , GPIO_PIN_0 , GPIOA, GPIO_PIN_IO, false},
  { PA1 , GPIO_PIN_1 , GPIOA, GPIO_PIN_IO, false},
  { PA2 , GPIO_PIN_2 , GPIOA, GPIO_PIN_IO, false},
  { PA3 , GPIO_PIN_3 , GPIOA, GPIO_PIN_IO, false},
  { PA4 , GPIO_PIN_4 , GPIOA, GPIO_PIN_IO, false},
  { PA5 , GPIO_PIN_5 , GPIOA, GPIO_PIN_IO, false},
  { PA6 , GPIO_PIN_6 , GPIOA, GPIO_PIN_IO, false},
  { PA7 , GPIO_PIN_7 , GPIOA, GPIO_PIN_IO, false},
  { PA8 , GPIO_PIN_8 , GPIOA, GPIO_PIN_IO, false},
  { PA9 , GPIO_PIN_9 , GPIOA, GPIO_PIN_IO, false},
  { PA10, GPIO_PIN_10, GPIOA, GPIO_PIN_IO, false},
  { PA11, GPIO_PIN_11, GPIOA, GPIO_PIN_IO, false},
  { PA12, GPIO_PIN_12, GPIOA, GPIO_PIN_IO, false},
  { PA13, GPIO_PIN_13, GPIOA, GPIO_PIN_IO, false},
  { PA14, GPIO_PIN_14, GPIOA, GPIO_PIN_IO, false},
  { PA15, GPIO_PIN_15, GPIOA, GPIO_PIN_IO, false},
  { PB0 , GPIO_PIN_0 , GPIOB, GPIO_PIN_IO, false},
  { PB1 , GPIO_PIN_1 , GPIOB, GPIO_PIN_IO, false},
  { PB2 , GPIO_PIN_2 , GPIOB, GPIO_PIN_IO, false},
  { PB3 , GPIO_PIN_3 , GPIOB, GPIO_PIN_IO, false},
  { PB4 , GPIO_PIN_4 , GPIOB, GPIO_PIN_IO, false},
  { PB5 , GPIO_PIN_5 , GPIOB, GPIO_PIN_IO, false},
  { PB6 , GPIO_PIN_6 , GPIOB, GPIO_PIN_IO, false},
  { PB7 , GPIO_PIN_7 , GPIOB, GPIO_PIN_IO, false},
  { PB8 , GPIO_PIN_8 , GPIOB, GPIO_PIN_IO, false},
  { PB9 , GPIO_PIN_9 , GPIOB, GPIO_PIN_IO, false},
  { PB10, GPIO_PIN_10, GPIOB, GPIO_PIN_IO, false},
  { PB11, GPIO_PIN_11, GPIOB, GPIO_PIN_IO, false},
  { PB12, GPIO_PIN_12, GPIOB, GPIO_PIN_IO, false},
  { PB13, GPIO_PIN_13, GPIOB, GPIO_PIN_IO, false},
  { PB14, GPIO_PIN_14, GPIOB, GPIO_PIN_IO, false},
  { PB15, GPIO_PIN_15, GPIOB, GPIO_PIN_IO, false},
  { PC0 , GPIO_PIN_0 , GPIOC, GPIO_PIN_IO, false},
  { PC1 , GPIO_PIN_1 , GPIOC, GPIO_PIN_IO, false},
  { PC2 , GPIO_PIN_2 , GPIOC, GPIO_PIN_IO, false},
  { PC3 , GPIO_PIN_3 , GPIOC, GPIO_PIN_IO, false},
  { PC4 , GPIO_PIN_4 , GPIOC, GPIO_PIN_IO, false},
  { PC5 , GPIO_PIN_5 , GPIOC, GPIO_PIN_IO, false},
  { PC6 , GPIO_PIN_6 , GPIOC, GPIO_PIN_IO, false},
  { PC7 , GPIO_PIN_7 , GPIOC, GPIO_PIN_IO, false},
  { PC8 , GPIO_PIN_8 , GPIOC, GPIO_PIN_IO, false},
  { PC9 , GPIO_PIN_9 , GPIOC, GPIO_PIN_IO, false},
  { PC10, GPIO_PIN_10, GPIOC, GPIO_PIN_IO, false},
  { PC11, GPIO_PIN_11, GPIOC, GPIO_PIN_IO, false},
  { PC12, GPIO_PIN_12, GPIOC, GPIO_PIN_IO, false},
  { PC13, GPIO_PIN_13, GPIOC, GPIO_PIN_IO, false},
  { PC14, GPIO_PIN_14, GPIOC, GPIO_PIN_IO, false},
  { PC15, GPIO_PIN_15, GPIOC, GPIO_PIN_IO, false},
  { PD0 , GPIO_PIN_0 , GPIOD, GPIO_PIN_IO, false},
  { PD1 , GPIO_PIN_1 , GPIOD, GPIO_PIN_IO, false},
  { PD2 , GPIO_PIN_2 , GPIOD, GPIO_PIN_IO, false},
  { PD3 , GPIO_PIN_3 , GPIOD, GPIO_PIN_IO, false},
  { PD4 , GPIO_PIN_4 , GPIOD, GPIO_PIN_IO, false},
  { PD5 , GPIO_PIN_5 , GPIOD, GPIO_PIN_IO, false},
  { PD6 , GPIO_PIN_6 , GPIOD, GPIO_PIN_IO, false},
  { PD7 , GPIO_PIN_7 , GPIOD, GPIO_PIN_IO, false},
  { PD8 , GPIO_PIN_8 , GPIOD, GPIO_PIN_IO, false},
  { PD9 , GPIO_PIN_9 , GPIOD, GPIO_PIN_IO, false},
  { PD10, GPIO_PIN_10, GPIOD, GPIO_PIN_IO, false},
  { PD11, GPIO_PIN_11, GPIOD, GPIO_PIN_IO, false},
  { PD12, GPIO_PIN_12, GPIOD, GPIO_PIN_IO, false},
  { PD13, GPIO_PIN_13, GPIOD, GPIO_PIN_IO, false},
  { PD14, GPIO_PIN_14, GPIOD, GPIO_PIN_IO, false},
  { PD15, GPIO_PIN_15, GPIOD, GPIO_PIN_IO, false},
  { PE0 , GPIO_PIN_0 , GPIOE, GPIO_PIN_IO, false},
  { PE1 , GPIO_PIN_1 , GPIOE, GPIO_PIN_IO, false},
  { PE2 , GPIO_PIN_2 , GPIOE, GPIO_PIN_IO, false},
  { PE3 , GPIO_PIN_3 , GPIOE, GPIO_PIN_IO, false},
  { PE4 , GPIO_PIN_4 , GPIOE, GPIO_PIN_IO, false},
  { PE5 , GPIO_PIN_5 , GPIOE, GPIO_PIN_IO, false},
  { PE6 , GPIO_PIN_6 , GPIOE, GPIO_PIN_IO, false},
  { PE7 , GPIO_PIN_7 , GPIOE, GPIO_PIN_IO, false},
  { PE8 , GPIO_PIN_8 , GPIOE, GPIO_PIN_IO, false},
  { PE9 , GPIO_PIN_9 , GPIOE, GPIO_PIN_IO, false},
  { PE10, GPIO_PIN_10, GPIOE, GPIO_PIN_IO, false},
  { PE11, GPIO_PIN_11, GPIOE, GPIO_PIN_IO, false},
  { PE12, GPIO_PIN_12, GPIOE, GPIO_PIN_IO, false},
  { PE13, GPIO_PIN_13, GPIOE, GPIO_PIN_IO, false},
  { PE14, GPIO_PIN_14, GPIOE, GPIO_PIN_IO, false},
  { PE15, GPIO_PIN_15, GPIOE, GPIO_PIN_IO, false},
  { PF0 , GPIO_PIN_0 , GPIOF, GPIO_PIN_IO, false},
  { PF1 , GPIO_PIN_1 , GPIOF, GPIO_PIN_IO, false},
  { PF2 , GPIO_PIN_2 , GPIOF, GPIO_PIN_IO, false},
  { PF3 , GPIO_PIN_3 , GPIOF, GPIO_PIN_IO, false},
  { PF4 , GPIO_PIN_4 , GPIOF, GPIO_PIN_IO, false},
  { PF5 , GPIO_PIN_5 , GPIOF, GPIO_PIN_IO, false},
  { PF6 , GPIO_PIN_6 , GPIOF, GPIO_PIN_IO, false},
  { PF7 , GPIO_PIN_7 , GPIOF, GPIO_PIN_IO, false},
  { PF8 , GPIO_PIN_8 , GPIOF, GPIO_PIN_IO, false},
  { PF9 , GPIO_PIN_9 , GPIOF, GPIO_PIN_IO, false},
  { PF10, GPIO_PIN_10, GPIOF, GPIO_PIN_IO, false},
  { PF11, GPIO_PIN_11, GPIOF, GPIO_PIN_IO, false},
  { PF12, GPIO_PIN_12, GPIOF, GPIO_PIN_IO, false},
  { PF13, GPIO_PIN_13, GPIOF, GPIO_PIN_IO, false},
  { PF14, GPIO_PIN_14, GPIOF, GPIO_PIN_IO, false},
  { PF15, GPIO_PIN_15, GPIOF, GPIO_PIN_IO, false},
  { PG0 , GPIO_PIN_0 , GPIOG, GPIO_PIN_IO, false},
  { PG1 , GPIO_PIN_1 , GPIOG, GPIO_PIN_IO, false},
  { PG2 , GPIO_PIN_2 , GPIOG, GPIO_PIN_IO, false},
  { PG3 , GPIO_PIN_3 , GPIOG, GPIO_PIN_IO, false},
  { PG4 , GPIO_PIN_4 , GPIOG, GPIO_PIN_IO, false},
  { PG5 , GPIO_PIN_5 , GPIOG, GPIO_PIN_IO, false},
  { PG6 , GPIO_PIN_6 , GPIOG, GPIO_PIN_IO, false},
  { PG7 , GPIO_PIN_7 , GPIOG, GPIO_PIN_IO, false},
  { PG8 , GPIO_PIN_8 , GPIOG, GPIO_PIN_IO, false},
  { PG9 , GPIO_PIN_9 , GPIOG, GPIO_PIN_IO, false},
  { PG10, GPIO_PIN_10, GPIOG, GPIO_PIN_IO, false},
  { PG11, GPIO_PIN_11, GPIOG, GPIO_PIN_IO, false},
  { PG12, GPIO_PIN_12, GPIOG, GPIO_PIN_IO, false},
  { PG13, GPIO_PIN_13, GPIOG, GPIO_PIN_IO, false},
  { PG14, GPIO_PIN_14, GPIOG, GPIO_PIN_IO, false},
  { PG15, GPIO_PIN_15, GPIOG, GPIO_PIN_IO, false},
  { PH0 , GPIO_PIN_0 , GPIOH, GPIO_PIN_IO, false},
  { PH1 , GPIO_PIN_1 , GPIOH, GPIO_PIN_IO, false},
};



spi_init_info_t spi_init_info[] = { 
  { 
    .init_done = 0, 
    .spi_instance = SPI1, 
    .mosi_alternate = GPIO_AF5_SPI1,
    .mosi_port = GPIOA, 
    .mosi_pin =  GPIO_PIN_7, 
    .miso_alternate = GPIO_AF5_SPI1,
    .miso_port = GPIOA, 
    .miso_pin = GPIO_PIN_6, 
    .sck_alternate = GPIO_AF5_SPI1,
    .sck_port = GPIOA, 
    .sck_pin = GPIO_PIN_5, 
  },
  { 
    .init_done = 0, 
    .spi_instance = SPI2, 
    .mosi_alternate = GPIO_AF5_SPI2,
    .mosi_port = GPIOC, 
    .mosi_pin =  GPIO_PIN_3, 
    .miso_alternate = GPIO_AF5_SPI2,
    .miso_port = GPIOC, 
    .miso_pin = GPIO_PIN_2, 
    .sck_alternate = GPIO_AF5_SPI2,
    .sck_port = GPIOB, 
    .sck_pin = GPIO_PIN_10, 
  },
  { 
    .init_done = 0, 
    .spi_instance = SPI3, 
    .mosi_alternate = GPIO_AF6_SPI3,
    .mosi_port = GPIOC, 
    .mosi_pin =  GPIO_PIN_12, 
    .miso_alternate = GPIO_AF6_SPI3,
    .miso_port = GPIOC, 
    .miso_pin = GPIO_PIN_11, 
    .sck_alternate = GPIO_AF6_SPI3,
    .sck_port = GPIOC, 
    .sck_pin = GPIO_PIN_10, 
  },
  { 
    .init_done = 0, 
    .spi_instance = SPI4, 
    .mosi_alternate = GPIO_AF5_SPI4,
    .mosi_port = GPIOE, 
    .mosi_pin =  GPIO_PIN_6, 
    .miso_alternate = GPIO_AF5_SPI4,
    .miso_port = GPIOE, 
    .miso_pin = GPIO_PIN_5, 
    .sck_alternate = GPIO_AF5_SPI4,
    .sck_port = GPIOE, 
    .sck_pin = GPIO_PIN_2, 
  },
  { 
    .init_done = 0, 
    .spi_instance = SPI5, 
    .mosi_alternate = GPIO_AF5_SPI5,
    .mosi_port = GPIOF, 
    .mosi_pin =  GPIO_PIN_9, 
    .miso_alternate = GPIO_AF5_SPI5,
    .miso_port = GPIOF, 
    .miso_pin = GPIO_PIN_8, 
    .sck_alternate = GPIO_AF5_SPI5,
    .sck_port = GPIOF, 
    .sck_pin = GPIO_PIN_7, 
  },
  { 
    .init_done = 0, 
    .spi_instance = SPI6, 
    .mosi_alternate = GPIO_AF5_SPI6,
    .mosi_port = GPIOG, 
    .mosi_pin =  GPIO_PIN_14, 
    .miso_alternate = GPIO_AF5_SPI6,
    .miso_port = GPIOG, 
    .miso_pin = GPIO_PIN_12, 
    .sck_alternate = GPIO_AF5_SPI6,
    .sck_port = GPIOG, 
    .sck_pin = GPIO_PIN_13, 
  },
}; 

uint8_t NB_SPI_INSTANCES = sizeof(spi_init_info) / sizeof(spi_init_info[0]);

i2c_init_info_t g_i2c_init_info[] = {
  {
    .init_done = 0,
    .i2c_instance = I2C1,
    .irq = I2C1_EV_IRQn,
    .sda_alternate = GPIO_AF4_I2C1,
    .sda_port = GPIOB,
    .sda_pin = GPIO_PIN_7,
    .scl_alternate = GPIO_AF4_I2C1,
    .scl_port = GPIOB,
    .scl_pin = GPIO_PIN_6,
    .i2c_onSlaveReceive = NULL,
    .i2c_onSlaveTransmit = NULL,
    .i2cTxRxBufferSize = 0
  },
  {
    .init_done = 0,
    .i2c_instance = I2C2,
    .irq = I2C2_EV_IRQn,
    .sda_alternate = GPIO_AF4_I2C2,
    .sda_port = GPIOF,
    .sda_pin = GPIO_PIN_0,
    .scl_alternate = GPIO_AF4_I2C2,
    .scl_port = GPIOF,
    .scl_pin = GPIO_PIN_1,
    .i2c_onSlaveReceive = NULL,
    .i2c_onSlaveTransmit = NULL,
    .i2cTxRxBufferSize = 0
  },
  {
    .init_done = 0,
    .i2c_instance = I2C3,
    .irq = I2C3_EV_IRQn,
    .sda_alternate = GPIO_AF4_I2C3,
    .sda_port = GPIOC,
    .sda_pin = GPIO_PIN_9,
    .scl_alternate = GPIO_AF4_I2C3,
    .scl_port = GPIOA,
    .scl_pin = GPIO_PIN_8,
    .i2c_onSlaveReceive = NULL,
    .i2c_onSlaveTransmit = NULL,
    .i2cTxRxBufferSize = 0
  },
};

uint8_t NB_I2C_INSTANCES = sizeof(g_i2c_init_info) / sizeof(g_i2c_init_info[0]);


uart_conf_t g_uart_config[] = {
  {
    //UART ID and IRQ
    .usart_typedef = USART1, .irqtype = USART1_IRQn,
    .tx_port = GPIOA, .tx_pin = GPIO_PIN_9,
    .rx_port = GPIOA, .rx_pin = GPIO_PIN_10,
    .uart_af_remap = GPIO_AF7_USART1,
    .tx_alternate  = GPIO_AF7_USART1,
    .rx_alternate  = GPIO_AF7_USART1,
    .data_available = 0,
    .begin = 0,
    .end = 0,
    .uart_option = NATIVE_UART_E
  },
  {
    //UART ID and IRQ
    .usart_typedef = USART2, .irqtype = USART2_IRQn,
    .tx_port = GPIOA, .tx_pin = GPIO_PIN_2,
    .rx_port = GPIOA, .rx_pin = GPIO_PIN_3,
    .uart_af_remap = GPIO_AF7_USART2,
    .tx_alternate  = GPIO_AF7_USART2,
    .rx_alternate  = GPIO_AF7_USART2,
    .data_available = 0,
    .begin = 0,
    .end = 0,
    .uart_option = NATIVE_UART_E
  },
  {
    //UART ID and IRQ
    .usart_typedef = USART3, .irqtype = USART3_IRQn,
    .tx_port = GPIOB, .tx_pin = GPIO_PIN_10,
    .rx_port = GPIOB, .rx_pin = GPIO_PIN_11,
    .uart_af_remap = GPIO_AF7_USART3,
    .tx_alternate  = GPIO_AF7_USART3,
    .rx_alternate  = GPIO_AF7_USART3,
    .data_available = 0,
    .begin = 0,
    .end = 0,
    .uart_option = NATIVE_UART_E
  },
  {
    //UART ID and IRQ
    .usart_typedef = USART6, .irqtype = USART6_IRQn,
    .tx_port = GPIOC, .tx_pin = GPIO_PIN_6,
    .rx_port = GPIOC, .rx_pin = GPIO_PIN_7,
    .uart_af_remap = GPIO_AF8_USART6,
    .tx_alternate  = GPIO_AF8_USART6,
    .rx_alternate  = GPIO_AF8_USART6,
    .data_available = 0,
    .begin = 0,
    .end = 0,
    .uart_option = NATIVE_UART_E
  },
};

uint8_t NB_UART_MANAGED = sizeof(g_uart_config) / sizeof(g_uart_config[0]);

UART_HandleTypeDef g_UartHandle[sizeof(g_uart_config) / sizeof(g_uart_config[0])];


#define SAMPLINGTIME  ADC_SAMPLETIME_1CYCLE_5  /*!< ADC conversions sampling time. */

adc_config_str g_adc_config[] = {
  {
    .port = GPIOA,
    .pin = GPIO_PIN_0,
    .adcInstance = ADC1,
    .adcChannelConf = { .Channel = ADC_CHANNEL_0, .Rank = ADC_REGULAR_RANK_1, .SamplingTime = SAMPLINGTIME }
  },
  {
    .port = GPIOA,
    .pin = GPIO_PIN_1,
    .adcInstance = ADC1,
    .adcChannelConf = { .Channel = ADC_CHANNEL_1, .Rank = ADC_REGULAR_RANK_1, .SamplingTime = SAMPLINGTIME }
  },
  {
    .port = GPIOC,
    .pin = GPIO_PIN_0,
    .adcInstance = ADC1,
    .adcChannelConf = { .Channel = ADC_CHANNEL_10, .Rank = ADC_REGULAR_RANK_1, .SamplingTime = SAMPLINGTIME }
  },
  {
    .port = GPIOC,
    .pin = GPIO_PIN_1,
    .adcInstance = ADC1,
    .adcChannelConf = { .Channel = ADC_CHANNEL_11, .Rank = ADC_REGULAR_RANK_1, .SamplingTime = SAMPLINGTIME }
  },
  {
    .port = GPIOC,
    .pin = GPIO_PIN_2,
    .adcInstance = ADC1,
    .adcChannelConf = { .Channel = ADC_CHANNEL_12, .Rank = ADC_REGULAR_RANK_1, .SamplingTime = SAMPLINGTIME }
  },
  {
    .port = GPIOC,
    .pin = GPIO_PIN_3,
    .adcInstance = ADC1,
    .adcChannelConf = { .Channel = ADC_CHANNEL_13, .Rank = ADC_REGULAR_RANK_1, .SamplingTime = SAMPLINGTIME }
  },
  {
    .port = GPIOC,
    .pin = GPIO_PIN_4,
    .adcInstance = ADC1,
    .adcChannelConf = { .Channel = ADC_CHANNEL_14, .Rank = ADC_REGULAR_RANK_1, .SamplingTime = SAMPLINGTIME }
  },
  {
    .port = GPIOC,
    .pin = GPIO_PIN_5,
    .adcInstance = ADC1,
    .adcChannelConf = { .Channel = ADC_CHANNEL_15, .Rank = ADC_REGULAR_RANK_1, .SamplingTime = SAMPLINGTIME }
  },
  {
    .port = GPIOA,
    .pin = GPIO_PIN_2,
    .adcInstance = ADC1,
    .adcChannelConf = { .Channel = ADC_CHANNEL_2, .Rank = ADC_REGULAR_RANK_1, .SamplingTime = SAMPLINGTIME }
  },
  {
    .port = GPIOA,
    .pin = GPIO_PIN_3,
    .adcInstance = ADC1,
    .adcChannelConf = { .Channel = ADC_CHANNEL_3, .Rank = ADC_REGULAR_RANK_1, .SamplingTime = SAMPLINGTIME }
  },
  {
    .port = GPIOA,
    .pin = GPIO_PIN_4,
    .adcInstance = ADC1,
    .adcChannelConf = { .Channel = ADC_CHANNEL_4, .Rank = ADC_REGULAR_RANK_1, .SamplingTime = SAMPLINGTIME }
  },
  {
    .port = GPIOA,
    .pin = GPIO_PIN_5,
    .adcInstance = ADC1,
    .adcChannelConf = { .Channel = ADC_CHANNEL_5, .Rank = ADC_REGULAR_RANK_1, .SamplingTime = SAMPLINGTIME }
  },
  {
    .port = GPIOA,
    .pin = GPIO_PIN_6,
    .adcInstance = ADC1,
    .adcChannelConf = { .Channel = ADC_CHANNEL_6, .Rank = ADC_REGULAR_RANK_1, .SamplingTime = SAMPLINGTIME }
  },
  {
    .port = GPIOA,
    .pin = GPIO_PIN_7,
    .adcInstance = ADC1,
    .adcChannelConf = { .Channel = ADC_CHANNEL_7, .Rank = ADC_REGULAR_RANK_1, .SamplingTime = SAMPLINGTIME }
  },
  {
    .port = GPIOB,
    .pin = GPIO_PIN_0,
    .adcInstance = ADC1,
    .adcChannelConf = { .Channel = ADC_CHANNEL_8, .Rank = ADC_REGULAR_RANK_1, .SamplingTime = SAMPLINGTIME }
  },
  {
    .port = GPIOB,
    .pin = GPIO_PIN_1,
    .adcInstance = ADC1,
    .adcChannelConf = { .Channel = ADC_CHANNEL_9, .Rank = ADC_REGULAR_RANK_1, .SamplingTime = SAMPLINGTIME }
  },
};
#if defined (STM32F100xB) || defined (STM32F100xE) || defined (STM32F101xE) || defined (STM32F101xG) || defined (STM32F103xE) || defined (STM32F103xG) || defined (STM32F105xC) || defined (STM32F107xC)
dac_config_str g_dac_config[] = {
    
};
#endif

pwm_config_str g_pwm_config[] = {
  {
    .port = GPIOE,
    .pin = GPIO_PIN_9,
    .alFunction = GPIO_AF1_TIM1,
    .timInstance = TIM1,
    .timChannel = TIM_CHANNEL_1,
    .useNchannel = 0,
    .timConfig = {
      .OCMode       = TIM_OCMODE_PWM1,
      .OCPolarity   = TIM_OCPOLARITY_HIGH,
      .OCFastMode   = TIM_OCFAST_DISABLE,
      .OCNPolarity  = TIM_OCNPOLARITY_HIGH,
      .OCNIdleState = TIM_OCNIDLESTATE_RESET,
      .OCIdleState  = TIM_OCIDLESTATE_RESET
     },
     .timHandle = {}
  },
  {
    .port = GPIOA,
    .pin = GPIO_PIN_7,
    .alFunction = GPIO_AF1_TIM1,
    .timInstance = TIM1,
    .timChannel = TIM_CHANNEL_1,
    .useNchannel = 1,
    .timConfig = {
      .OCMode       = TIM_OCMODE_PWM1,
      .OCPolarity   = TIM_OCPOLARITY_HIGH,
      .OCFastMode   = TIM_OCFAST_DISABLE,
      .OCNPolarity  = TIM_OCNPOLARITY_HIGH,
      .OCNIdleState = TIM_OCNIDLESTATE_RESET,
      .OCIdleState  = TIM_OCIDLESTATE_RESET
     },
     .timHandle = {}
  },
  {
    .port = GPIOE,
    .pin = GPIO_PIN_11,
    .alFunction = GPIO_AF1_TIM1,
    .timInstance = TIM1,
    .timChannel = TIM_CHANNEL_2,
    .useNchannel = 0,
    .timConfig = {
      .OCMode       = TIM_OCMODE_PWM1,
      .OCPolarity   = TIM_OCPOLARITY_HIGH,
      .OCFastMode   = TIM_OCFAST_DISABLE,
      .OCNPolarity  = TIM_OCNPOLARITY_HIGH,
      .OCNIdleState = TIM_OCNIDLESTATE_RESET,
      .OCIdleState  = TIM_OCIDLESTATE_RESET
     },
     .timHandle = {}
  },
  {
    .port = GPIOB,
    .pin = GPIO_PIN_0,
    .alFunction = GPIO_AF1_TIM1,
    .timInstance = TIM1,
    .timChannel = TIM_CHANNEL_2,
    .useNchannel = 1,
    .timConfig = {
      .OCMode       = TIM_OCMODE_PWM1,
      .OCPolarity   = TIM_OCPOLARITY_HIGH,
      .OCFastMode   = TIM_OCFAST_DISABLE,
      .OCNPolarity  = TIM_OCNPOLARITY_HIGH,
      .OCNIdleState = TIM_OCNIDLESTATE_RESET,
      .OCIdleState  = TIM_OCIDLESTATE_RESET
     },
     .timHandle = {}
  },
  {
    .port = GPIOE,
    .pin = GPIO_PIN_13,
    .alFunction = GPIO_AF1_TIM1,
    .timInstance = TIM1,
    .timChannel = TIM_CHANNEL_3,
    .useNchannel = 0,
    .timConfig = {
      .OCMode       = TIM_OCMODE_PWM1,
      .OCPolarity   = TIM_OCPOLARITY_HIGH,
      .OCFastMode   = TIM_OCFAST_DISABLE,
      .OCNPolarity  = TIM_OCNPOLARITY_HIGH,
      .OCNIdleState = TIM_OCNIDLESTATE_RESET,
      .OCIdleState  = TIM_OCIDLESTATE_RESET
     },
     .timHandle = {}
  },
  {
    .port = GPIOB,
    .pin = GPIO_PIN_1,
    .alFunction = GPIO_AF1_TIM1,
    .timInstance = TIM1,
    .timChannel = TIM_CHANNEL_3,
    .useNchannel = 1,
    .timConfig = {
      .OCMode       = TIM_OCMODE_PWM1,
      .OCPolarity   = TIM_OCPOLARITY_HIGH,
      .OCFastMode   = TIM_OCFAST_DISABLE,
      .OCNPolarity  = TIM_OCNPOLARITY_HIGH,
      .OCNIdleState = TIM_OCNIDLESTATE_RESET,
      .OCIdleState  = TIM_OCIDLESTATE_RESET
     },
     .timHandle = {}
  },
  {
    .port = GPIOE,
    .pin = GPIO_PIN_14,
    .alFunction = GPIO_AF1_TIM1,
    .timInstance = TIM1,
    .timChannel = TIM_CHANNEL_4,
    .useNchannel = 0,
    .timConfig = {
      .OCMode       = TIM_OCMODE_PWM1,
      .OCPolarity   = TIM_OCPOLARITY_HIGH,
      .OCFastMode   = TIM_OCFAST_DISABLE,
      .OCNPolarity  = TIM_OCNPOLARITY_HIGH,
      .OCNIdleState = TIM_OCNIDLESTATE_RESET,
      .OCIdleState  = TIM_OCIDLESTATE_RESET
     },
     .timHandle = {}
  },
  {
    .port = GPIOF,
    .pin = GPIO_PIN_6,
    .alFunction = GPIO_AF3_TIM10,
    .timInstance = TIM10,
    .timChannel = TIM_CHANNEL_1,
    .useNchannel = 0,
    .timConfig = {
      .OCMode       = TIM_OCMODE_PWM1,
      .OCPolarity   = TIM_OCPOLARITY_HIGH,
      .OCFastMode   = TIM_OCFAST_DISABLE,
      .OCNPolarity  = TIM_OCNPOLARITY_HIGH,
      .OCNIdleState = TIM_OCNIDLESTATE_RESET,
      .OCIdleState  = TIM_OCIDLESTATE_RESET
     },
     .timHandle = {}
  },
  {
    .port = GPIOF,
    .pin = GPIO_PIN_7,
    .alFunction = GPIO_AF3_TIM11,
    .timInstance = TIM11,
    .timChannel = TIM_CHANNEL_1,
    .useNchannel = 0,
    .timConfig = {
      .OCMode       = TIM_OCMODE_PWM1,
      .OCPolarity   = TIM_OCPOLARITY_HIGH,
      .OCFastMode   = TIM_OCFAST_DISABLE,
      .OCNPolarity  = TIM_OCNPOLARITY_HIGH,
      .OCNIdleState = TIM_OCNIDLESTATE_RESET,
      .OCIdleState  = TIM_OCIDLESTATE_RESET
     },
     .timHandle = {}
  },
  {
    .port = GPIOB,
    .pin = GPIO_PIN_14,
    .alFunction = GPIO_AF9_TIM12,
    .timInstance = TIM12,
    .timChannel = TIM_CHANNEL_1,
    .useNchannel = 0,
    .timConfig = {
      .OCMode       = TIM_OCMODE_PWM1,
      .OCPolarity   = TIM_OCPOLARITY_HIGH,
      .OCFastMode   = TIM_OCFAST_DISABLE,
      .OCNPolarity  = TIM_OCNPOLARITY_HIGH,
      .OCNIdleState = TIM_OCNIDLESTATE_RESET,
      .OCIdleState  = TIM_OCIDLESTATE_RESET
     },
     .timHandle = {}
  },
  {
    .port = GPIOB,
    .pin = GPIO_PIN_15,
    .alFunction = GPIO_AF9_TIM12,
    .timInstance = TIM12,
    .timChannel = TIM_CHANNEL_2,
    .useNchannel = 0,
    .timConfig = {
      .OCMode       = TIM_OCMODE_PWM1,
      .OCPolarity   = TIM_OCPOLARITY_HIGH,
      .OCFastMode   = TIM_OCFAST_DISABLE,
      .OCNPolarity  = TIM_OCNPOLARITY_HIGH,
      .OCNIdleState = TIM_OCNIDLESTATE_RESET,
      .OCIdleState  = TIM_OCIDLESTATE_RESET
     },
     .timHandle = {}
  },
  {
    .port = GPIOF,
    .pin = GPIO_PIN_8,
    .alFunction = GPIO_AF9_TIM13,
    .timInstance = TIM13,
    .timChannel = TIM_CHANNEL_1,
    .useNchannel = 0,
    .timConfig = {
      .OCMode       = TIM_OCMODE_PWM1,
      .OCPolarity   = TIM_OCPOLARITY_HIGH,
      .OCFastMode   = TIM_OCFAST_DISABLE,
      .OCNPolarity  = TIM_OCNPOLARITY_HIGH,
      .OCNIdleState = TIM_OCNIDLESTATE_RESET,
      .OCIdleState  = TIM_OCIDLESTATE_RESET
     },
     .timHandle = {}
  },
  {
    .port = GPIOF,
    .pin = GPIO_PIN_9,
    .alFunction = GPIO_AF9_TIM14,
    .timInstance = TIM14,
    .timChannel = TIM_CHANNEL_1,
    .useNchannel = 0,
    .timConfig = {
      .OCMode       = TIM_OCMODE_PWM1,
      .OCPolarity   = TIM_OCPOLARITY_HIGH,
      .OCFastMode   = TIM_OCFAST_DISABLE,
      .OCNPolarity  = TIM_OCNPOLARITY_HIGH,
      .OCNIdleState = TIM_OCNIDLESTATE_RESET,
      .OCIdleState  = TIM_OCIDLESTATE_RESET
     },
     .timHandle = {}
  },
  {
    .port = GPIOA,
    .pin = GPIO_PIN_0,
    .alFunction = GPIO_AF1_TIM2,
    .timInstance = TIM2,
    .timChannel = TIM_CHANNEL_1,
    .useNchannel = 0,
    .timConfig = {
      .OCMode       = TIM_OCMODE_PWM1,
      .OCPolarity   = TIM_OCPOLARITY_HIGH,
      .OCFastMode   = TIM_OCFAST_DISABLE,
      .OCNPolarity  = TIM_OCNPOLARITY_HIGH,
      .OCNIdleState = TIM_OCNIDLESTATE_RESET,
      .OCIdleState  = TIM_OCIDLESTATE_RESET
     },
     .timHandle = {}
  },
  {
    .port = GPIOA,
    .pin = GPIO_PIN_1,
    .alFunction = GPIO_AF1_TIM2,
    .timInstance = TIM2,
    .timChannel = TIM_CHANNEL_2,
    .useNchannel = 0,
    .timConfig = {
      .OCMode       = TIM_OCMODE_PWM1,
      .OCPolarity   = TIM_OCPOLARITY_HIGH,
      .OCFastMode   = TIM_OCFAST_DISABLE,
      .OCNPolarity  = TIM_OCNPOLARITY_HIGH,
      .OCNIdleState = TIM_OCNIDLESTATE_RESET,
      .OCIdleState  = TIM_OCIDLESTATE_RESET
     },
     .timHandle = {}
  },
  {
    .port = GPIOA,
    .pin = GPIO_PIN_2,
    .alFunction = GPIO_AF1_TIM2,
    .timInstance = TIM2,
    .timChannel = TIM_CHANNEL_3,
    .useNchannel = 0,
    .timConfig = {
      .OCMode       = TIM_OCMODE_PWM1,
      .OCPolarity   = TIM_OCPOLARITY_HIGH,
      .OCFastMode   = TIM_OCFAST_DISABLE,
      .OCNPolarity  = TIM_OCNPOLARITY_HIGH,
      .OCNIdleState = TIM_OCNIDLESTATE_RESET,
      .OCIdleState  = TIM_OCIDLESTATE_RESET
     },
     .timHandle = {}
  },
  {
    .port = GPIOA,
    .pin = GPIO_PIN_3,
    .alFunction = GPIO_AF1_TIM2,
    .timInstance = TIM2,
    .timChannel = TIM_CHANNEL_4,
    .useNchannel = 0,
    .timConfig = {
      .OCMode       = TIM_OCMODE_PWM1,
      .OCPolarity   = TIM_OCPOLARITY_HIGH,
      .OCFastMode   = TIM_OCFAST_DISABLE,
      .OCNPolarity  = TIM_OCNPOLARITY_HIGH,
      .OCNIdleState = TIM_OCNIDLESTATE_RESET,
      .OCIdleState  = TIM_OCIDLESTATE_RESET
     },
     .timHandle = {}
  },
  {
    .port = GPIOA,
    .pin = GPIO_PIN_6,
    .alFunction = GPIO_AF2_TIM3,
    .timInstance = TIM3,
    .timChannel = TIM_CHANNEL_1,
    .useNchannel = 0,
    .timConfig = {
      .OCMode       = TIM_OCMODE_PWM1,
      .OCPolarity   = TIM_OCPOLARITY_HIGH,
      .OCFastMode   = TIM_OCFAST_DISABLE,
      .OCNPolarity  = TIM_OCNPOLARITY_HIGH,
      .OCNIdleState = TIM_OCNIDLESTATE_RESET,
      .OCIdleState  = TIM_OCIDLESTATE_RESET
     },
     .timHandle = {}
  },
  {
    .port = GPIOA,
    .pin = GPIO_PIN_7,
    .alFunction = GPIO_AF2_TIM3,
    .timInstance = TIM3,
    .timChannel = TIM_CHANNEL_2,
    .useNchannel = 0,
    .timConfig = {
      .OCMode       = TIM_OCMODE_PWM1,
      .OCPolarity   = TIM_OCPOLARITY_HIGH,
      .OCFastMode   = TIM_OCFAST_DISABLE,
      .OCNPolarity  = TIM_OCNPOLARITY_HIGH,
      .OCNIdleState = TIM_OCNIDLESTATE_RESET,
      .OCIdleState  = TIM_OCIDLESTATE_RESET
     },
     .timHandle = {}
  },
  {
    .port = GPIOB,
    .pin = GPIO_PIN_0,
    .alFunction = GPIO_AF2_TIM3,
    .timInstance = TIM3,
    .timChannel = TIM_CHANNEL_3,
    .useNchannel = 0,
    .timConfig = {
      .OCMode       = TIM_OCMODE_PWM1,
      .OCPolarity   = TIM_OCPOLARITY_HIGH,
      .OCFastMode   = TIM_OCFAST_DISABLE,
      .OCNPolarity  = TIM_OCNPOLARITY_HIGH,
      .OCNIdleState = TIM_OCNIDLESTATE_RESET,
      .OCIdleState  = TIM_OCIDLESTATE_RESET
     },
     .timHandle = {}
  },
  {
    .port = GPIOB,
    .pin = GPIO_PIN_1,
    .alFunction = GPIO_AF2_TIM3,
    .timInstance = TIM3,
    .timChannel = TIM_CHANNEL_4,
    .useNchannel = 0,
    .timConfig = {
      .OCMode       = TIM_OCMODE_PWM1,
      .OCPolarity   = TIM_OCPOLARITY_HIGH,
      .OCFastMode   = TIM_OCFAST_DISABLE,
      .OCNPolarity  = TIM_OCNPOLARITY_HIGH,
      .OCNIdleState = TIM_OCNIDLESTATE_RESET,
      .OCIdleState  = TIM_OCIDLESTATE_RESET
     },
     .timHandle = {}
  },
  {
    .port = GPIOD,
    .pin = GPIO_PIN_12,
    .alFunction = GPIO_AF2_TIM4,
    .timInstance = TIM4,
    .timChannel = TIM_CHANNEL_1,
    .useNchannel = 0,
    .timConfig = {
      .OCMode       = TIM_OCMODE_PWM1,
      .OCPolarity   = TIM_OCPOLARITY_HIGH,
      .OCFastMode   = TIM_OCFAST_DISABLE,
      .OCNPolarity  = TIM_OCNPOLARITY_HIGH,
      .OCNIdleState = TIM_OCNIDLESTATE_RESET,
      .OCIdleState  = TIM_OCIDLESTATE_RESET
     },
     .timHandle = {}
  },
  {
    .port = GPIOD,
    .pin = GPIO_PIN_13,
    .alFunction = GPIO_AF2_TIM4,
    .timInstance = TIM4,
    .timChannel = TIM_CHANNEL_2,
    .useNchannel = 0,
    .timConfig = {
      .OCMode       = TIM_OCMODE_PWM1,
      .OCPolarity   = TIM_OCPOLARITY_HIGH,
      .OCFastMode   = TIM_OCFAST_DISABLE,
      .OCNPolarity  = TIM_OCNPOLARITY_HIGH,
      .OCNIdleState = TIM_OCNIDLESTATE_RESET,
      .OCIdleState  = TIM_OCIDLESTATE_RESET
     },
     .timHandle = {}
  },
  {
    .port = GPIOD,
    .pin = GPIO_PIN_14,
    .alFunction = GPIO_AF2_TIM4,
    .timInstance = TIM4,
    .timChannel = TIM_CHANNEL_3,
    .useNchannel = 0,
    .timConfig = {
      .OCMode       = TIM_OCMODE_PWM1,
      .OCPolarity   = TIM_OCPOLARITY_HIGH,
      .OCFastMode   = TIM_OCFAST_DISABLE,
      .OCNPolarity  = TIM_OCNPOLARITY_HIGH,
      .OCNIdleState = TIM_OCNIDLESTATE_RESET,
      .OCIdleState  = TIM_OCIDLESTATE_RESET
     },
     .timHandle = {}
  },
  {
    .port = GPIOD,
    .pin = GPIO_PIN_15,
    .alFunction = GPIO_AF2_TIM4,
    .timInstance = TIM4,
    .timChannel = TIM_CHANNEL_4,
    .useNchannel = 0,
    .timConfig = {
      .OCMode       = TIM_OCMODE_PWM1,
      .OCPolarity   = TIM_OCPOLARITY_HIGH,
      .OCFastMode   = TIM_OCFAST_DISABLE,
      .OCNPolarity  = TIM_OCNPOLARITY_HIGH,
      .OCNIdleState = TIM_OCNIDLESTATE_RESET,
      .OCIdleState  = TIM_OCIDLESTATE_RESET
     },
     .timHandle = {}
  },
  {
    .port = GPIOA,
    .pin = GPIO_PIN_0,
    .alFunction = GPIO_AF2_TIM5,
    .timInstance = TIM5,
    .timChannel = TIM_CHANNEL_1,
    .useNchannel = 0,
    .timConfig = {
      .OCMode       = TIM_OCMODE_PWM1,
      .OCPolarity   = TIM_OCPOLARITY_HIGH,
      .OCFastMode   = TIM_OCFAST_DISABLE,
      .OCNPolarity  = TIM_OCNPOLARITY_HIGH,
      .OCNIdleState = TIM_OCNIDLESTATE_RESET,
      .OCIdleState  = TIM_OCIDLESTATE_RESET
     },
     .timHandle = {}
  },
  {
    .port = GPIOA,
    .pin = GPIO_PIN_1,
    .alFunction = GPIO_AF2_TIM5,
    .timInstance = TIM5,
    .timChannel = TIM_CHANNEL_2,
    .useNchannel = 0,
    .timConfig = {
      .OCMode       = TIM_OCMODE_PWM1,
      .OCPolarity   = TIM_OCPOLARITY_HIGH,
      .OCFastMode   = TIM_OCFAST_DISABLE,
      .OCNPolarity  = TIM_OCNPOLARITY_HIGH,
      .OCNIdleState = TIM_OCNIDLESTATE_RESET,
      .OCIdleState  = TIM_OCIDLESTATE_RESET
     },
     .timHandle = {}
  },
  {
    .port = GPIOA,
    .pin = GPIO_PIN_2,
    .alFunction = GPIO_AF2_TIM5,
    .timInstance = TIM5,
    .timChannel = TIM_CHANNEL_3,
    .useNchannel = 0,
    .timConfig = {
      .OCMode       = TIM_OCMODE_PWM1,
      .OCPolarity   = TIM_OCPOLARITY_HIGH,
      .OCFastMode   = TIM_OCFAST_DISABLE,
      .OCNPolarity  = TIM_OCNPOLARITY_HIGH,
      .OCNIdleState = TIM_OCNIDLESTATE_RESET,
      .OCIdleState  = TIM_OCIDLESTATE_RESET
     },
     .timHandle = {}
  },
  {
    .port = GPIOA,
    .pin = GPIO_PIN_3,
    .alFunction = GPIO_AF2_TIM5,
    .timInstance = TIM5,
    .timChannel = TIM_CHANNEL_4,
    .useNchannel = 0,
    .timConfig = {
      .OCMode       = TIM_OCMODE_PWM1,
      .OCPolarity   = TIM_OCPOLARITY_HIGH,
      .OCFastMode   = TIM_OCFAST_DISABLE,
      .OCNPolarity  = TIM_OCNPOLARITY_HIGH,
      .OCNIdleState = TIM_OCNIDLESTATE_RESET,
      .OCIdleState  = TIM_OCIDLESTATE_RESET
     },
     .timHandle = {}
  },
  {
    .port = GPIOC,
    .pin = GPIO_PIN_6,
    .alFunction = GPIO_AF3_TIM8,
    .timInstance = TIM8,
    .timChannel = TIM_CHANNEL_1,
    .useNchannel = 0,
    .timConfig = {
      .OCMode       = TIM_OCMODE_PWM1,
      .OCPolarity   = TIM_OCPOLARITY_HIGH,
      .OCFastMode   = TIM_OCFAST_DISABLE,
      .OCNPolarity  = TIM_OCNPOLARITY_HIGH,
      .OCNIdleState = TIM_OCNIDLESTATE_RESET,
      .OCIdleState  = TIM_OCIDLESTATE_RESET
     },
     .timHandle = {}
  },
  {
    .port = GPIOA,
    .pin = GPIO_PIN_5,
    .alFunction = GPIO_AF3_TIM8,
    .timInstance = TIM8,
    .timChannel = TIM_CHANNEL_1,
    .useNchannel = 1,
    .timConfig = {
      .OCMode       = TIM_OCMODE_PWM1,
      .OCPolarity   = TIM_OCPOLARITY_HIGH,
      .OCFastMode   = TIM_OCFAST_DISABLE,
      .OCNPolarity  = TIM_OCNPOLARITY_HIGH,
      .OCNIdleState = TIM_OCNIDLESTATE_RESET,
      .OCIdleState  = TIM_OCIDLESTATE_RESET
     },
     .timHandle = {}
  },
  {
    .port = GPIOC,
    .pin = GPIO_PIN_7,
    .alFunction = GPIO_AF3_TIM8,
    .timInstance = TIM8,
    .timChannel = TIM_CHANNEL_2,
    .useNchannel = 0,
    .timConfig = {
      .OCMode       = TIM_OCMODE_PWM1,
      .OCPolarity   = TIM_OCPOLARITY_HIGH,
      .OCFastMode   = TIM_OCFAST_DISABLE,
      .OCNPolarity  = TIM_OCNPOLARITY_HIGH,
      .OCNIdleState = TIM_OCNIDLESTATE_RESET,
      .OCIdleState  = TIM_OCIDLESTATE_RESET
     },
     .timHandle = {}
  },
  {
    .port = GPIOB,
    .pin = GPIO_PIN_0,
    .alFunction = GPIO_AF3_TIM8,
    .timInstance = TIM8,
    .timChannel = TIM_CHANNEL_2,
    .useNchannel = 1,
    .timConfig = {
      .OCMode       = TIM_OCMODE_PWM1,
      .OCPolarity   = TIM_OCPOLARITY_HIGH,
      .OCFastMode   = TIM_OCFAST_DISABLE,
      .OCNPolarity  = TIM_OCNPOLARITY_HIGH,
      .OCNIdleState = TIM_OCNIDLESTATE_RESET,
      .OCIdleState  = TIM_OCIDLESTATE_RESET
     },
     .timHandle = {}
  },
  {
    .port = GPIOC,
    .pin = GPIO_PIN_8,
    .alFunction = GPIO_AF3_TIM8,
    .timInstance = TIM8,
    .timChannel = TIM_CHANNEL_3,
    .useNchannel = 0,
    .timConfig = {
      .OCMode       = TIM_OCMODE_PWM1,
      .OCPolarity   = TIM_OCPOLARITY_HIGH,
      .OCFastMode   = TIM_OCFAST_DISABLE,
      .OCNPolarity  = TIM_OCNPOLARITY_HIGH,
      .OCNIdleState = TIM_OCNIDLESTATE_RESET,
      .OCIdleState  = TIM_OCIDLESTATE_RESET
     },
     .timHandle = {}
  },
  {
    .port = GPIOB,
    .pin = GPIO_PIN_1,
    .alFunction = GPIO_AF3_TIM8,
    .timInstance = TIM8,
    .timChannel = TIM_CHANNEL_3,
    .useNchannel = 1,
    .timConfig = {
      .OCMode       = TIM_OCMODE_PWM1,
      .OCPolarity   = TIM_OCPOLARITY_HIGH,
      .OCFastMode   = TIM_OCFAST_DISABLE,
      .OCNPolarity  = TIM_OCNPOLARITY_HIGH,
      .OCNIdleState = TIM_OCNIDLESTATE_RESET,
      .OCIdleState  = TIM_OCIDLESTATE_RESET
     },
     .timHandle = {}
  },
  {
    .port = GPIOC,
    .pin = GPIO_PIN_9,
    .alFunction = GPIO_AF3_TIM8,
    .timInstance = TIM8,
    .timChannel = TIM_CHANNEL_4,
    .useNchannel = 0,
    .timConfig = {
      .OCMode       = TIM_OCMODE_PWM1,
      .OCPolarity   = TIM_OCPOLARITY_HIGH,
      .OCFastMode   = TIM_OCFAST_DISABLE,
      .OCNPolarity  = TIM_OCNPOLARITY_HIGH,
      .OCNIdleState = TIM_OCNIDLESTATE_RESET,
      .OCIdleState  = TIM_OCIDLESTATE_RESET
     },
     .timHandle = {}
  },
  {
    .port = GPIOE,
    .pin = GPIO_PIN_5,
    .alFunction = GPIO_AF3_TIM9,
    .timInstance = TIM9,
    .timChannel = TIM_CHANNEL_1,
    .useNchannel = 0,
    .timConfig = {
      .OCMode       = TIM_OCMODE_PWM1,
      .OCPolarity   = TIM_OCPOLARITY_HIGH,
      .OCFastMode   = TIM_OCFAST_DISABLE,
      .OCNPolarity  = TIM_OCNPOLARITY_HIGH,
      .OCNIdleState = TIM_OCNIDLESTATE_RESET,
      .OCIdleState  = TIM_OCIDLESTATE_RESET
     },
     .timHandle = {}
  },
  {
    .port = GPIOE,
    .pin = GPIO_PIN_6,
    .alFunction = GPIO_AF3_TIM9,
    .timInstance = TIM9,
    .timChannel = TIM_CHANNEL_2,
    .useNchannel = 0,
    .timConfig = {
      .OCMode       = TIM_OCMODE_PWM1,
      .OCPolarity   = TIM_OCPOLARITY_HIGH,
      .OCFastMode   = TIM_OCFAST_DISABLE,
      .OCNPolarity  = TIM_OCNPOLARITY_HIGH,
      .OCNIdleState = TIM_OCNIDLESTATE_RESET,
      .OCIdleState  = TIM_OCIDLESTATE_RESET
     },
     .timHandle = {}
  },
};

uint8_t NB_ADC_INSTANCES = sizeof(g_adc_config) / sizeof(g_adc_config[0]);
#if defined (STM32F100xB) || defined (STM32F100xE) || defined (STM32F101xE) || defined (STM32F101xG) || defined (STM32F103xE) || defined (STM32F103xG) || defined (STM32F105xC) || defined (STM32F107xC)
uint8_t NB_DAC_INSTANCES = sizeof(g_dac_config) / sizeof(g_dac_config[0]);
#endif
uint8_t NB_PWM_INSTANCES = sizeof(g_pwm_config) / sizeof(g_pwm_config[0]);

remaps_t remaps {
    { I2C1  , SCL  , GPIOB, GPIO_PIN_6  , GPIO_AF4_I2C1                      },
    { I2C1  , SCL  , GPIOB, GPIO_PIN_8  , GPIO_AF4_I2C1                      },
    { I2C1  , SDA  , GPIOB, GPIO_PIN_7  , GPIO_AF4_I2C1                      },
    { I2C1  , SDA  , GPIOB, GPIO_PIN_9  , GPIO_AF4_I2C1                      },
    { I2C2  , SCL  , GPIOF, GPIO_PIN_1  , GPIO_AF4_I2C2                      },
    { I2C2  , SCL  , GPIOB, GPIO_PIN_10 , GPIO_AF4_I2C2                      },
    { I2C2  , SDA  , GPIOB, GPIO_PIN_11 , GPIO_AF4_I2C2                      },
    { I2C2  , SDA  , GPIOF, GPIO_PIN_0  , GPIO_AF4_I2C2                      },
    { I2C3  , SCL  , GPIOA, GPIO_PIN_8  , GPIO_AF4_I2C3                      },
    { I2C3  , SDA  , GPIOC, GPIO_PIN_9  , GPIO_AF4_I2C3                      },
    { SPI1  , MISO , GPIOB, GPIO_PIN_4  , GPIO_AF5_SPI1                      },
    { SPI1  , MISO , GPIOA, GPIO_PIN_6  , GPIO_AF5_SPI1                      },
    { SPI1  , MOSI , GPIOB, GPIO_PIN_5  , GPIO_AF5_SPI1                      },
    { SPI1  , MOSI , GPIOA, GPIO_PIN_7  , GPIO_AF5_SPI1                      },
    { SPI1  , SCK  , GPIOA, GPIO_PIN_5  , GPIO_AF5_SPI1                      },
    { SPI1  , SCK  , GPIOB, GPIO_PIN_3  , GPIO_AF5_SPI1                      },
    { SPI2  , MISO , GPIOC, GPIO_PIN_2  , GPIO_AF5_SPI2                      },
    { SPI2  , MISO , GPIOB, GPIO_PIN_14 , GPIO_AF5_SPI2                      },
    { SPI2  , MOSI , GPIOC, GPIO_PIN_3  , GPIO_AF5_SPI2                      },
    { SPI2  , MOSI , GPIOB, GPIO_PIN_15 , GPIO_AF5_SPI2                      },
    { SPI2  , SCK  , GPIOB, GPIO_PIN_10 , GPIO_AF5_SPI2                      },
    { SPI2  , SCK  , GPIOB, GPIO_PIN_13 , GPIO_AF5_SPI2                      },
    { SPI2  , SCK  , GPIOD, GPIO_PIN_3  , GPIO_AF5_SPI2                      },
    { SPI3  , MISO , GPIOB, GPIO_PIN_4  , GPIO_AF6_SPI3                      },
    { SPI3  , MISO , GPIOC, GPIO_PIN_11 , GPIO_AF6_SPI3                      },
    { SPI3  , MOSI , GPIOB, GPIO_PIN_5  , GPIO_AF6_SPI3                      },
    { SPI3  , MOSI , GPIOD, GPIO_PIN_6  , GPIO_AF5_SPI1                      },
    { SPI3  , MOSI , GPIOC, GPIO_PIN_12 , GPIO_AF6_SPI3                      },
    { SPI3  , SCK  , GPIOC, GPIO_PIN_10 , GPIO_AF6_SPI3                      },
    { SPI3  , SCK  , GPIOB, GPIO_PIN_3  , GPIO_AF6_SPI3                      },
    { SPI4  , MISO , GPIOE, GPIO_PIN_5  , GPIO_AF5_SPI4                      },
    { SPI4  , MISO , GPIOE, GPIO_PIN_13 , GPIO_AF5_SPI4                      },
    { SPI4  , MOSI , GPIOE, GPIO_PIN_14 , GPIO_AF5_SPI4                      },
    { SPI4  , MOSI , GPIOE, GPIO_PIN_6  , GPIO_AF5_SPI4                      },
    { SPI4  , SCK  , GPIOE, GPIO_PIN_12 , GPIO_AF5_SPI4                      },
    { SPI4  , SCK  , GPIOE, GPIO_PIN_2  , GPIO_AF5_SPI4                      },
    { SPI5  , MISO , GPIOF, GPIO_PIN_8  , GPIO_AF5_SPI5                      },
    { SPI5  , MOSI , GPIOF, GPIO_PIN_9  , GPIO_AF5_SPI5                      },
    { SPI5  , MOSI , GPIOF, GPIO_PIN_11 , GPIO_AF5_SPI5                      },
    { SPI5  , SCK  , GPIOF, GPIO_PIN_7  , GPIO_AF5_SPI5                      },
    { SPI6  , MISO , GPIOG, GPIO_PIN_12 , GPIO_AF5_SPI6                      },
    { SPI6  , MOSI , GPIOG, GPIO_PIN_14 , GPIO_AF5_SPI6                      },
    { SPI6  , SCK  , GPIOG, GPIO_PIN_13 , GPIO_AF5_SPI6                      },
    { TIM10 , CH1  , GPIOB, GPIO_PIN_8  , GPIO_AF3_TIM10                     },
    { TIM10 , CH1  , GPIOF, GPIO_PIN_6  , GPIO_AF3_TIM10                     },
    { TIM11 , CH1  , GPIOB, GPIO_PIN_9  , GPIO_AF3_TIM11                     },
    { TIM11 , CH1  , GPIOF, GPIO_PIN_7  , GPIO_AF3_TIM11                     },
    { TIM12 , CH1  , GPIOB, GPIO_PIN_14 , GPIO_AF9_TIM12                     },
    { TIM12 , CH2  , GPIOB, GPIO_PIN_15 , GPIO_AF9_TIM12                     },
    { TIM13 , CH1  , GPIOF, GPIO_PIN_8  , GPIO_AF9_TIM13                     },
    { TIM13 , CH1  , GPIOA, GPIO_PIN_6  , GPIO_AF9_TIM13                     },
    { TIM14 , CH1  , GPIOF, GPIO_PIN_9  , GPIO_AF9_TIM14                     },
    { TIM14 , CH1  , GPIOA, GPIO_PIN_7  , GPIO_AF9_TIM14                     },
    { TIM1  , CH1  , GPIOA, GPIO_PIN_8  , GPIO_AF1_TIM1                      },
    { TIM1  , CH1  , GPIOE, GPIO_PIN_9  , GPIO_AF1_TIM1                      },
    { TIM1  , CH1N , GPIOB, GPIO_PIN_13 , GPIO_AF1_TIM1                      },
    { TIM1  , CH1N , GPIOE, GPIO_PIN_8  , GPIO_AF1_TIM1                      },
    { TIM1  , CH1N , GPIOA, GPIO_PIN_7  , GPIO_AF1_TIM1                      },
    { TIM1  , CH2  , GPIOA, GPIO_PIN_9  , GPIO_AF1_TIM1                      },
    { TIM1  , CH2  , GPIOE, GPIO_PIN_11 , GPIO_AF1_TIM1                      },
    { TIM1  , CH2N , GPIOB, GPIO_PIN_0  , GPIO_AF1_TIM1                      },
    { TIM1  , CH2N , GPIOE, GPIO_PIN_10 , GPIO_AF1_TIM1                      },
    { TIM1  , CH2N , GPIOB, GPIO_PIN_14 , GPIO_AF1_TIM1                      },
    { TIM1  , CH3  , GPIOA, GPIO_PIN_10 , GPIO_AF1_TIM1                      },
    { TIM1  , CH3  , GPIOE, GPIO_PIN_13 , GPIO_AF1_TIM1                      },
    { TIM1  , CH3N , GPIOB, GPIO_PIN_15 , GPIO_AF1_TIM1                      },
    { TIM1  , CH3N , GPIOB, GPIO_PIN_1  , GPIO_AF1_TIM1                      },
    { TIM1  , CH3N , GPIOE, GPIO_PIN_12 , GPIO_AF1_TIM1                      },
    { TIM1  , CH4  , GPIOE, GPIO_PIN_14 , GPIO_AF1_TIM1                      },
    { TIM1  , CH4  , GPIOA, GPIO_PIN_11 , GPIO_AF1_TIM1                      },
    { TIM2  , CH1  , GPIOA, GPIO_PIN_0  , GPIO_AF1_TIM2                      },
    { TIM2  , CH1  , GPIOA, GPIO_PIN_5  , GPIO_AF1_TIM2                      },
    { TIM2  , CH1  , GPIOA, GPIO_PIN_15 , GPIO_AF1_TIM2                      },
    { TIM2  , CH2  , GPIOA, GPIO_PIN_1  , GPIO_AF1_TIM2                      },
    { TIM2  , CH2  , GPIOB, GPIO_PIN_3  , GPIO_AF1_TIM2                      },
    { TIM2  , CH3  , GPIOB, GPIO_PIN_10 , GPIO_AF1_TIM2                      },
    { TIM2  , CH3  , GPIOA, GPIO_PIN_2  , GPIO_AF1_TIM2                      },
    { TIM2  , CH4  , GPIOB, GPIO_PIN_11 , GPIO_AF1_TIM2                      },
    { TIM2  , CH4  , GPIOA, GPIO_PIN_3  , GPIO_AF1_TIM2                      },
    { TIM3  , CH1  , GPIOB, GPIO_PIN_4  , GPIO_AF2_TIM3                      },
    { TIM3  , CH1  , GPIOC, GPIO_PIN_6  , GPIO_AF2_TIM3                      },
    { TIM3  , CH1  , GPIOA, GPIO_PIN_6  , GPIO_AF2_TIM3                      },
    { TIM3  , CH2  , GPIOB, GPIO_PIN_5  , GPIO_AF2_TIM3                      },
    { TIM3  , CH2  , GPIOC, GPIO_PIN_7  , GPIO_AF2_TIM3                      },
    { TIM3  , CH2  , GPIOA, GPIO_PIN_7  , GPIO_AF2_TIM3                      },
    { TIM3  , CH3  , GPIOC, GPIO_PIN_8  , GPIO_AF2_TIM3                      },
    { TIM3  , CH3  , GPIOB, GPIO_PIN_0  , GPIO_AF2_TIM3                      },
    { TIM3  , CH4  , GPIOC, GPIO_PIN_9  , GPIO_AF2_TIM3                      },
    { TIM3  , CH4  , GPIOB, GPIO_PIN_1  , GPIO_AF2_TIM3                      },
    { TIM4  , CH1  , GPIOD, GPIO_PIN_12 , GPIO_AF2_TIM4                      },
    { TIM4  , CH1  , GPIOB, GPIO_PIN_6  , GPIO_AF2_TIM4                      },
    { TIM4  , CH2  , GPIOD, GPIO_PIN_13 , GPIO_AF2_TIM4                      },
    { TIM4  , CH2  , GPIOB, GPIO_PIN_7  , GPIO_AF2_TIM4                      },
    { TIM4  , CH3  , GPIOB, GPIO_PIN_8  , GPIO_AF2_TIM4                      },
    { TIM4  , CH3  , GPIOD, GPIO_PIN_14 , GPIO_AF2_TIM4                      },
    { TIM4  , CH4  , GPIOB, GPIO_PIN_9  , GPIO_AF2_TIM4                      },
    { TIM4  , CH4  , GPIOD, GPIO_PIN_15 , GPIO_AF2_TIM4                      },
    { TIM5  , CH1  , GPIOA, GPIO_PIN_0  , GPIO_AF2_TIM5                      },
    { TIM5  , CH2  , GPIOA, GPIO_PIN_1  , GPIO_AF2_TIM5                      },
    { TIM5  , CH3  , GPIOA, GPIO_PIN_2  , GPIO_AF2_TIM5                      },
    { TIM5  , CH4  , GPIOA, GPIO_PIN_3  , GPIO_AF2_TIM5                      },
    { TIM8  , CH1  , GPIOC, GPIO_PIN_6  , GPIO_AF3_TIM8                      },
    { TIM8  , CH1N , GPIOA, GPIO_PIN_5  , GPIO_AF3_TIM8                      },
    { TIM8  , CH1N , GPIOA, GPIO_PIN_7  , GPIO_AF3_TIM8                      },
    { TIM8  , CH2  , GPIOC, GPIO_PIN_7  , GPIO_AF3_TIM8                      },
    { TIM8  , CH2N , GPIOB, GPIO_PIN_0  , GPIO_AF3_TIM8                      },
    { TIM8  , CH2N , GPIOB, GPIO_PIN_14 , GPIO_AF3_TIM8                      },
    { TIM8  , CH3  , GPIOC, GPIO_PIN_8  , GPIO_AF3_TIM8                      },
    { TIM8  , CH3N , GPIOB, GPIO_PIN_15 , GPIO_AF3_TIM8                      },
    { TIM8  , CH3N , GPIOB, GPIO_PIN_1  , GPIO_AF3_TIM8                      },
    { TIM8  , CH4  , GPIOC, GPIO_PIN_9  , GPIO_AF3_TIM8                      },
    { TIM9  , CH1  , GPIOE, GPIO_PIN_5  , GPIO_AF3_TIM9                      },
    { TIM9  , CH1  , GPIOA, GPIO_PIN_2  , GPIO_AF3_TIM9                      },
    { TIM9  , CH2  , GPIOE, GPIO_PIN_6  , GPIO_AF3_TIM9                      },
    { TIM9  , CH2  , GPIOA, GPIO_PIN_3  , GPIO_AF3_TIM9                      },
    { USART1, RX   , GPIOA, GPIO_PIN_10 , GPIO_AF7_USART1                    },
    { USART1, RX   , GPIOB, GPIO_PIN_7  , GPIO_AF7_USART1                    },
    { USART1, TX   , GPIOA, GPIO_PIN_9  , GPIO_AF7_USART1                    },
    { USART1, TX   , GPIOB, GPIO_PIN_6  , GPIO_AF7_USART1                    },
    { USART2, RX   , GPIOD, GPIO_PIN_6  , GPIO_AF7_USART2                    },
    { USART2, RX   , GPIOA, GPIO_PIN_3  , GPIO_AF7_USART2                    },
    { USART2, TX   , GPIOA, GPIO_PIN_2  , GPIO_AF7_USART2                    },
    { USART2, TX   , GPIOD, GPIO_PIN_5  , GPIO_AF7_USART2                    },
    { USART3, RX   , GPIOB, GPIO_PIN_11 , GPIO_AF7_USART3                    },
    { USART3, RX   , GPIOC, GPIO_PIN_11 , GPIO_AF7_USART3                    },
    { USART3, RX   , GPIOD, GPIO_PIN_9  , GPIO_AF7_USART3                    },
    { USART3, TX   , GPIOB, GPIO_PIN_10 , GPIO_AF7_USART3                    },
    { USART3, TX   , GPIOC, GPIO_PIN_10 , GPIO_AF7_USART3                    },
    { USART3, TX   , GPIOD, GPIO_PIN_8  , GPIO_AF7_USART3                    },
    { USART6, RX   , GPIOC, GPIO_PIN_7  , GPIO_AF8_USART6                    },
    { USART6, RX   , GPIOG, GPIO_PIN_9  , GPIO_AF8_USART6                    },
    { USART6, TX   , GPIOG, GPIO_PIN_14 , GPIO_AF8_USART6                    },
    { USART6, TX   , GPIOC, GPIO_PIN_6  , GPIO_AF8_USART6                    },
};
