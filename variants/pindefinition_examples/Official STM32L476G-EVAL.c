
enum {
//*=default , +=alternate
//PIN    |BOARD LABEL                            |I2C1|I2C2|I2C3|SPI1 |SPI2 |SPI3 |USART1|USART2|USART3|ADC1 |TIM (PWM)                                  |USB       |RCC       |SYS        
PA0 , // |OpAmp1_INP [RV3]                       |    |    |    |     |     |     |      |      |      |*IN5 |*TIM2_CH1 +TIM5_CH1                        |          |          |           
PA1 , // |OpAmp1_INM                             |    |    |    |     |     |     |      |      |      |*IN6 |*TIM2_CH2 +TIM5_CH2 *TIM15_CH1N            |          |          |           
PA2 , // |                                       |    |    |    |     |     |     |      |*TX   |      |*IN7 |*TIM2_CH3 +TIM5_CH3 +TIM15_CH1             |          |          |           
PA3 , // |OpAmp1_OUT [TP9]                       |    |    |    |     |     |     |      |*RX   |      |*IN8 |*TIM2_CH4 +TIM5_CH4 +TIM15_CH2             |          |          |           
PA4 , // |ADC_DAC                                |    |    |    |     |     |     |      |      |      |*IN9 |                                           |          |          |           
PA5 , // |IDD_Measurement [SN74LVC1G66DCKT_O/I]  |    |    |    |*SCK |     |     |      |      |      |*IN10|*TIM8_CH1N +TIM2_CH1                       |          |          |           
PA6 , // |                                       |    |    |    |*MISO|     |     |      |      |      |*IN11|+TIM3_CH1 *TIM16_CH1                       |          |          |           
PA7 , // |                                       |    |    |    |*MOSI|     |     |      |      |      |*IN12|+TIM8_CH1N +TIM3_CH2 *TIM1_CH1N *TIM17_CH1 |          |          |           
PA8 , // |uSD_DETECT                             |    |    |    |     |     |     |      |      |      |     |+TIM1_CH1                                  |          |          |           
PA9 , // |USBOTG_VBUS                            |    |    |    |     |     |     |*TX   |      |      |     |+TIM1_CH2                                  |          |          |           
PA10, // |USBOTG_ID                              |    |    |    |     |     |     |*RX   |      |      |     |+TIM1_CH3                                  |          |          |           
PA11, // |USBOTG_DM                              |    |    |    |     |     |     |      |      |      |     |+TIM1_CH4                                  |*OTG_FS_DM|          |           
PA12, // |USBOTG_DP                              |    |    |    |     |     |     |      |      |      |     |                                           |*OTG_FS_DP|          |           
PA13, // |TMS/SWDIO                              |    |    |    |     |     |     |      |      |      |     |                                           |          |          |*JTMS-SWDIO
PA14, // |TMS/SWCLK                              |    |    |    |     |     |     |      |      |      |     |                                           |          |          |*JTCK-SWCLK
PA15, // |                                       |    |    |    |     |     |     |      |      |      |     |+TIM2_CH1                                  |          |          |*JTDI      
PB0 , // |SmartCard_CLK                          |    |    |    |     |     |     |      |      |      |*IN15|*TIM8_CH2N +TIM3_CH3 *TIM1_CH2N            |          |          |           
PB1 , // |                                       |    |    |    |     |     |     |      |      |      |*IN16|+LPTIM2_IN1 +TIM3_CH4 *TIM1_CH3N *TIM8_CH3N|          |          |           
PB2 , // |LED1 [Green]                           |    |    |    |     |     |     |      |      |      |     |                                           |          |          |           
PB3 , // |                                       |    |    |    |+SCK |     |+SCK |      |      |      |     |+TIM2_CH2                                  |          |          |*JTDO-SWO  
PB4 , // |comp2_INP[Potentiometer_RV3]           |    |    |    |+MISO|     |+MISO|      |      |      |     |+TIM3_CH1                                  |          |          |*JTRST     
PB5 , // |Comp2_OUT [TP6]                        |    |    |    |+MOSI|     |+MOSI|      |      |      |     |+TIM3_CH2 +LPTIM1_IN1                      |          |          |           
PB6 , // |USART1_TX                              |+SCL|    |    |     |     |     |+TX   |      |      |     |*TIM16_CH1N +TIM4_CH1                      |          |          |           
PB7 , // |USART1/IrDA_RX_3V3                     |+SDA|    |    |     |     |     |+RX   |      |      |     |*TIM17_CH1N +LPTIM1_IN2 +TIM4_CH2          |          |          |*PVD_IN    
PB8 , // |CAN_RX                                 |+SCL|    |    |     |     |     |      |      |      |     |+TIM16_CH1 +TIM4_CH3                       |          |          |           
PB9 , // |CAN_TX                                 |+SDA|    |    |     |     |     |      |      |      |     |+TIM17_CH1 +TIM4_CH4                       |          |          |           
PB10, // |                                       |    |+SCL|    |     |*SCK |     |      |      |+TX   |     |+TIM2_CH3                                  |          |          |           
PB11, // |                                       |    |+SDA|    |     |     |     |      |      |+RX   |     |+TIM2_CH4                                  |          |          |           
PB12, // |USBOTG_OVRCR                           |    |    |    |     |     |     |      |      |      |     |                                           |          |          |           
PB13, // |NFC_SCK                                |    |+SCL|    |     |+SCK |     |      |      |      |     |+TIM1_CH1N +TIM15_CH1N                     |          |          |           
PB14, // |NFC_MISO                               |    |+SDA|    |     |+MISO|     |      |      |      |     |+TIM8_CH2N +TIM1_CH2N +TIM15_CH1           |          |          |           
PB15, // |NFC_MOSI                               |    |    |    |     |+MOSI|     |      |      |      |     |+TIM1_CH3N +TIM8_CH3N +TIM15_CH2           |          |          |           
PC0 , // |DMCI_DATAIN [MP34DT01TR_DOUT]          |    |    |*SCL|     |     |     |      |      |      |*IN1 |*LPTIM2_IN1 *LPTIM1_IN1                    |          |          |           
PC1 , // |                                       |    |    |*SDA|     |     |     |      |      |      |*IN2 |                                           |          |          |           
PC2 , // |DFSM_CKOUT                             |    |    |    |     |*MISO|     |      |      |      |*IN3 |*LPTIM1_IN2                                |          |          |           
PC3 , // |VLCD                                   |    |    |    |     |*MOSI|     |      |      |      |*IN4 |                                           |          |          |           
PC4 , // |SmartCard_IO                           |    |    |    |     |     |     |      |      |*TX   |*IN13|                                           |          |          |           
PC5 , // |IDD_WAKEUP                             |    |    |    |     |     |     |      |      |*RX   |*IN14|                                           |          |          |           
PC6 , // |USBOTG_PPWR                            |    |    |    |     |     |     |      |      |      |     |*TIM8_CH1 +TIM3_CH1                        |          |          |           
PC7 , // |PT100_DATIN                            |    |    |    |     |     |     |      |      |      |     |*TIM8_CH2 +TIM3_CH2                        |          |          |           
PC8 , // |uSD_D0                                 |    |    |    |     |     |     |      |      |      |     |*TIM8_CH3 +TIM3_CH3                        |          |          |           
PC9 , // |uSD_D1                                 |    |    |    |     |     |     |      |      |      |     |*TIM8_CH4 +TIM3_CH4                        |          |          |           
PC10, // |uSD_D2                                 |    |    |    |     |     |*SCK |      |      |+TX   |     |                                           |          |          |           
PC11, // |uSD_D3                                 |    |    |    |     |     |*MISO|      |      |+RX   |     |                                           |          |          |           
PC12, // |uSD_CLK                                |    |    |    |     |     |*MOSI|      |      |      |     |                                           |          |          |           
PC13, // |Key [B2]                               |    |    |    |     |     |     |      |      |      |     |                                           |          |          |           
PC14, // |                                       |    |    |    |     |     |     |      |      |      |     |                                           |          |*OSC32_IN |           
PC15, // |                                       |    |    |    |     |     |     |      |      |      |     |                                           |          |*OSC32_OUT|           
PD0 , // |D2                                     |    |    |    |     |     |     |      |      |      |     |                                           |          |          |           
PD1 , // |D3                                     |    |    |    |     |+SCK |     |      |      |      |     |                                           |          |          |           
PD2 , // |uSD_CMD                                |    |    |    |     |     |     |      |      |      |     |                                           |          |          |           
PD3 , // |DFSDM_DATIN1                           |    |    |    |     |+MISO|     |      |      |      |     |                                           |          |          |           
PD4 , // |FMC_NOE                                |    |    |    |     |+MOSI|     |      |      |      |     |                                           |          |          |           
PD5 , // |FMC_NWE                                |    |    |    |     |     |     |      |+TX   |      |     |                                           |          |          |           
PD6 , // |SAI1_SDA [WM8994ECS/R_ADCDAT1]         |    |    |    |     |     |     |      |+RX   |      |     |                                           |          |          |           
PD7 , // |FMC_NE1 [IS61WV102416BLL-10MLI_CE]     |    |    |    |     |     |     |      |      |      |     |                                           |          |          |           
PD8 , // |D13                                    |    |    |    |     |     |     |      |      |+TX   |     |                                           |          |          |           
PD9 , // |D14                                    |    |    |    |     |     |     |      |      |+RX   |     |                                           |          |          |           
PD10, // |D15                                    |    |    |    |     |     |     |      |      |      |     |                                           |          |          |           
PD11, // |A16                                    |    |    |    |     |     |     |      |      |      |     |                                           |          |          |           
PD12, // |A17                                    |    |    |    |     |     |     |      |      |      |     |+LPTIM2_IN1 *TIM4_CH1                      |          |          |           
PD13, // |A18                                    |    |    |    |     |     |     |      |      |      |     |*TIM4_CH2                                  |          |          |           
PD14, // |D0                                     |    |    |    |     |     |     |      |      |      |     |*TIM4_CH3                                  |          |          |           
PD15, // |D1                                     |    |    |    |     |     |     |      |      |      |     |*TIM4_CH4                                  |          |          |           
PE0 , // |FMC_NBL0 [IS61WV102416BLL-10MLI_BLE]   |    |    |    |     |     |     |      |      |      |     |+TIM16_CH1                                 |          |          |           
PE1 , // |FMC_NBL1 [IS61WV102416BLL-10MLI_BHE]   |    |    |    |     |     |     |      |      |      |     |+TIM17_CH1                                 |          |          |           
PE2 , // |A23                                    |    |    |    |     |     |     |      |      |      |     |                                           |          |          |*TRACECLK  
PE3 , // |A19                                    |    |    |    |     |     |     |      |      |      |     |*TIM3_CH1                                  |          |          |*TRACED0   
PE4 , // |A20                                    |    |    |    |     |     |     |      |      |      |     |*TIM3_CH2                                  |          |          |*TRACED1   
PE5 , // |A21                                    |    |    |    |     |     |     |      |      |      |     |*TIM3_CH3                                  |          |          |*TRACED2   
PE6 , // |A22                                    |    |    |    |     |     |     |      |      |      |     |*TIM3_CH4                                  |          |          |*TRACED3   
PE7 , // |D4                                     |    |    |    |     |     |     |      |      |      |     |                                           |          |          |           
PE8 , // |D5                                     |    |    |    |     |     |     |      |      |      |     |+TIM1_CH1N                                 |          |          |           
PE9 , // |D6                                     |    |    |    |     |     |     |      |      |      |     |*TIM1_CH1                                  |          |          |           
PE10, // |D7                                     |    |    |    |     |     |     |      |      |      |     |+TIM1_CH2N                                 |          |          |           
PE11, // |D8                                     |    |    |    |     |     |     |      |      |      |     |*TIM1_CH2                                  |          |          |           
PE12, // |D9                                     |    |    |    |     |     |     |      |      |      |     |+TIM1_CH3N                                 |          |          |           
PE13, // |D10                                    |    |    |    |+SCK |     |     |      |      |      |     |*TIM1_CH3                                  |          |          |           
PE14, // |D11                                    |    |    |    |+MISO|     |     |      |      |      |     |*TIM1_CH4                                  |          |          |           
PE15, // |D12                                    |    |    |    |+MOSI|     |     |      |      |      |     |                                           |          |          |           
PF0 , // |A0                                     |    |*SDA|    |     |     |     |      |      |      |     |                                           |          |          |           
PF1 , // |A1                                     |    |*SCL|    |     |     |     |      |      |      |     |                                           |          |          |           
PF2 , // |A2                                     |    |    |    |     |     |     |      |      |      |     |                                           |          |          |           
PF3 , // |A3                                     |    |    |    |     |     |     |      |      |      |     |                                           |          |          |           
PF4 , // |A4                                     |    |    |    |     |     |     |      |      |      |     |                                           |          |          |           
PF5 , // |A5                                     |    |    |    |     |     |     |      |      |      |     |                                           |          |          |           
PF6 , // |SAI1_SDB [WM8994ECS/R_DACDAT1]         |    |    |    |     |     |     |      |      |      |     |*TIM5_CH1                                  |          |          |           
PF7 , // |SAI1_MCKB [WM8994ECS/R_MCLK1]          |    |    |    |     |     |     |      |      |      |     |*TIM5_CH2                                  |          |          |           
PF8 , // |SAI1_SCKB [WM8994ECS/R_BCLK1]          |    |    |    |     |     |     |      |      |      |     |*TIM5_CH3                                  |          |          |           
PF9 , // |SAI1_FSB [WM8994ECS/R_LRCLK1]          |    |    |    |     |     |     |      |      |      |     |*TIM5_CH4 *TIM15_CH1                       |          |          |           
PF10, // |                                       |    |    |    |     |     |     |      |      |      |     |*TIM15_CH2                                 |          |          |           
PF11, // |NFC_NSS                                |    |    |    |     |     |     |      |      |      |     |                                           |          |          |           
PF12, // |A6                                     |    |    |    |     |     |     |      |      |      |     |                                           |          |          |           
PF13, // |A7                                     |    |    |    |     |     |     |      |      |      |     |                                           |          |          |           
PF14, // |A8                                     |    |    |    |     |     |     |      |      |      |     |                                           |          |          |           
PF15, // |A9                                     |    |    |    |     |     |     |      |      |      |     |                                           |          |          |           
PG0 , // |A10                                    |    |    |    |     |     |     |      |      |      |     |                                           |          |          |           
PG1 , // |A11                                    |    |    |    |     |     |     |      |      |      |     |                                           |          |          |           
PG2 , // |A12                                    |    |    |    |+SCK |     |     |      |      |      |     |                                           |          |          |           
PG3 , // |A13                                    |    |    |    |+MISO|     |     |      |      |      |     |                                           |          |          |           
PG4 , // |A14                                    |    |    |    |+MOSI|     |     |      |      |      |     |                                           |          |          |           
PG5 , // |A15                                    |    |    |    |     |     |     |      |      |      |     |                                           |          |          |           
PG6 , // |CODEC_INT [WM8994ECS/R_ADCLRCLK1/GPIO1]|    |    |    |     |     |     |      |      |      |     |                                           |          |          |           
PG7 , // |LPUART_TX                              |    |    |+SCL|     |     |     |      |      |      |     |                                           |          |          |           
PG8 , // |LPUART_RX_3V3                          |    |    |+SDA|     |     |     |      |      |      |     |                                           |          |          |           
PG9 , // |FMC_NE2 [M29W256GL70ZA6E_E]            |    |    |    |     |     |+SCK |+TX   |      |      |     |+TIM15_CH1N                                |          |          |           
PG10, // |LCD_NE3 [SN74LVC16T245DGGR_OE]         |    |    |    |     |     |+MISO|+RX   |      |      |     |+LPTIM1_IN1 +TIM15_CH1                     |          |          |           
PG11, // |USART1_CTS_3V3                         |    |    |    |     |     |+MOSI|      |      |      |     |+LPTIM1_IN2 +TIM15_CH2                     |          |          |           
PG12, // |USART1_RTS                             |    |    |    |     |     |     |      |      |      |     |                                           |          |          |           
PG13, // |I2C_SDA [WM8994ECS/R_SDA]              |*SDA|    |    |     |     |     |      |      |      |     |                                           |          |          |           
PG14, // |I2C_SCL [WM8994ECS/R_SCLK]             |*SCL|    |    |     |     |     |      |      |      |     |                                           |          |          |           
PG15, // |IOExpander_INT                         |    |    |    |     |     |     |      |      |      |     |                                           |          |          |           
PH0 , // |                                       |    |    |    |     |     |     |      |      |      |     |                                           |          |*OSC_IN   |           
PH1 , // |                                       |    |    |    |     |     |     |      |      |      |     |                                           |          |*OSC_OUT  |           
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
}; 

uint8_t NB_SPI_INSTANCES = sizeof(spi_init_info) / sizeof(spi_init_info[0]);

i2c_init_info_t g_i2c_init_info[] = {
  {
    .init_done = 0,
    .i2c_instance = I2C1,
    .irq = I2C1_EV_IRQn,
    .sda_alternate = GPIO_AF4_I2C1,
    .sda_port = GPIOG,
    .sda_pin = GPIO_PIN_13,
    .scl_alternate = GPIO_AF4_I2C1,
    .scl_port = GPIOG,
    .scl_pin = GPIO_PIN_14,
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
    .sda_pin = GPIO_PIN_1,
    .scl_alternate = GPIO_AF4_I2C3,
    .scl_port = GPIOC,
    .scl_pin = GPIO_PIN_0,
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
    .tx_port = GPIOC, .tx_pin = GPIO_PIN_4,
    .rx_port = GPIOC, .rx_pin = GPIO_PIN_5,
    .uart_af_remap = GPIO_AF7_USART3,
    .tx_alternate  = GPIO_AF7_USART3,
    .rx_alternate  = GPIO_AF7_USART3,
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
    .port = GPIOC,
    .pin = GPIO_PIN_0,
    .adcInstance = ADC1,
    .adcChannelConf = { .Channel = ADC_CHANNEL_1, .Rank = ADC_REGULAR_RANK_1, .SamplingTime = SAMPLINGTIME }
  },
  {
    .port = GPIOA,
    .pin = GPIO_PIN_5,
    .adcInstance = ADC1,
    .adcChannelConf = { .Channel = ADC_CHANNEL_10, .Rank = ADC_REGULAR_RANK_1, .SamplingTime = SAMPLINGTIME }
  },
  {
    .port = GPIOA,
    .pin = GPIO_PIN_6,
    .adcInstance = ADC1,
    .adcChannelConf = { .Channel = ADC_CHANNEL_11, .Rank = ADC_REGULAR_RANK_1, .SamplingTime = SAMPLINGTIME }
  },
  {
    .port = GPIOA,
    .pin = GPIO_PIN_7,
    .adcInstance = ADC1,
    .adcChannelConf = { .Channel = ADC_CHANNEL_12, .Rank = ADC_REGULAR_RANK_1, .SamplingTime = SAMPLINGTIME }
  },
  {
    .port = GPIOC,
    .pin = GPIO_PIN_4,
    .adcInstance = ADC1,
    .adcChannelConf = { .Channel = ADC_CHANNEL_13, .Rank = ADC_REGULAR_RANK_1, .SamplingTime = SAMPLINGTIME }
  },
  {
    .port = GPIOC,
    .pin = GPIO_PIN_5,
    .adcInstance = ADC1,
    .adcChannelConf = { .Channel = ADC_CHANNEL_14, .Rank = ADC_REGULAR_RANK_1, .SamplingTime = SAMPLINGTIME }
  },
  {
    .port = GPIOB,
    .pin = GPIO_PIN_0,
    .adcInstance = ADC1,
    .adcChannelConf = { .Channel = ADC_CHANNEL_15, .Rank = ADC_REGULAR_RANK_1, .SamplingTime = SAMPLINGTIME }
  },
  {
    .port = GPIOB,
    .pin = GPIO_PIN_1,
    .adcInstance = ADC1,
    .adcChannelConf = { .Channel = ADC_CHANNEL_16, .Rank = ADC_REGULAR_RANK_1, .SamplingTime = SAMPLINGTIME }
  },
  {
    .port = GPIOC,
    .pin = GPIO_PIN_1,
    .adcInstance = ADC1,
    .adcChannelConf = { .Channel = ADC_CHANNEL_2, .Rank = ADC_REGULAR_RANK_1, .SamplingTime = SAMPLINGTIME }
  },
  {
    .port = GPIOC,
    .pin = GPIO_PIN_2,
    .adcInstance = ADC1,
    .adcChannelConf = { .Channel = ADC_CHANNEL_3, .Rank = ADC_REGULAR_RANK_1, .SamplingTime = SAMPLINGTIME }
  },
  {
    .port = GPIOC,
    .pin = GPIO_PIN_3,
    .adcInstance = ADC1,
    .adcChannelConf = { .Channel = ADC_CHANNEL_4, .Rank = ADC_REGULAR_RANK_1, .SamplingTime = SAMPLINGTIME }
  },
  {
    .port = GPIOA,
    .pin = GPIO_PIN_0,
    .adcInstance = ADC1,
    .adcChannelConf = { .Channel = ADC_CHANNEL_5, .Rank = ADC_REGULAR_RANK_1, .SamplingTime = SAMPLINGTIME }
  },
  {
    .port = GPIOA,
    .pin = GPIO_PIN_1,
    .adcInstance = ADC1,
    .adcChannelConf = { .Channel = ADC_CHANNEL_6, .Rank = ADC_REGULAR_RANK_1, .SamplingTime = SAMPLINGTIME }
  },
  {
    .port = GPIOA,
    .pin = GPIO_PIN_2,
    .adcInstance = ADC1,
    .adcChannelConf = { .Channel = ADC_CHANNEL_7, .Rank = ADC_REGULAR_RANK_1, .SamplingTime = SAMPLINGTIME }
  },
  {
    .port = GPIOA,
    .pin = GPIO_PIN_3,
    .adcInstance = ADC1,
    .adcChannelConf = { .Channel = ADC_CHANNEL_8, .Rank = ADC_REGULAR_RANK_1, .SamplingTime = SAMPLINGTIME }
  },
  {
    .port = GPIOA,
    .pin = GPIO_PIN_4,
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
    .pin = GPIO_PIN_9,
    .alFunction = GPIO_AF14_TIM15,
    .timInstance = TIM15,
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
    .alFunction = GPIO_AF14_TIM15,
    .timInstance = TIM15,
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
    .port = GPIOF,
    .pin = GPIO_PIN_10,
    .alFunction = GPIO_AF14_TIM15,
    .timInstance = TIM15,
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
    .pin = GPIO_PIN_6,
    .alFunction = GPIO_AF14_TIM16,
    .timInstance = TIM16,
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
    .pin = GPIO_PIN_6,
    .alFunction = GPIO_AF14_TIM16,
    .timInstance = TIM16,
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
    .port = GPIOA,
    .pin = GPIO_PIN_7,
    .alFunction = GPIO_AF14_TIM17,
    .timInstance = TIM17,
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
    .pin = GPIO_PIN_7,
    .alFunction = GPIO_AF14_TIM17,
    .timInstance = TIM17,
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
    .port = GPIOE,
    .pin = GPIO_PIN_3,
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
    .port = GPIOE,
    .pin = GPIO_PIN_4,
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
    .port = GPIOE,
    .pin = GPIO_PIN_5,
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
    .port = GPIOE,
    .pin = GPIO_PIN_6,
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
    .port = GPIOF,
    .pin = GPIO_PIN_6,
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
    .port = GPIOF,
    .pin = GPIO_PIN_7,
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
    .port = GPIOF,
    .pin = GPIO_PIN_8,
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
    .port = GPIOF,
    .pin = GPIO_PIN_9,
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
};

uint8_t NB_ADC_INSTANCES = sizeof(g_adc_config) / sizeof(g_adc_config[0]);
#if defined (STM32F100xB) || defined (STM32F100xE) || defined (STM32F101xE) || defined (STM32F101xG) || defined (STM32F103xE) || defined (STM32F103xG) || defined (STM32F105xC) || defined (STM32F107xC)
uint8_t NB_DAC_INSTANCES = sizeof(g_dac_config) / sizeof(g_dac_config[0]);
#endif
uint8_t NB_PWM_INSTANCES = sizeof(g_pwm_config) / sizeof(g_pwm_config[0]);

remaps_t remaps {
    { I2C1  , SCL  , GPIOB, GPIO_PIN_6  , GPIO_AF4_I2C1                      },
    { I2C1  , SCL  , GPIOG, GPIO_PIN_14 , GPIO_AF4_I2C1                      },
    { I2C1  , SCL  , GPIOB, GPIO_PIN_8  , GPIO_AF4_I2C1                      },
    { I2C1  , SDA  , GPIOB, GPIO_PIN_7  , GPIO_AF4_I2C1                      },
    { I2C1  , SDA  , GPIOG, GPIO_PIN_13 , GPIO_AF4_I2C1                      },
    { I2C1  , SDA  , GPIOB, GPIO_PIN_9  , GPIO_AF4_I2C1                      },
    { I2C2  , SCL  , GPIOF, GPIO_PIN_1  , GPIO_AF4_I2C2                      },
    { I2C2  , SCL  , GPIOB, GPIO_PIN_10 , GPIO_AF4_I2C2                      },
    { I2C2  , SCL  , GPIOB, GPIO_PIN_13 , GPIO_AF4_I2C2                      },
    { I2C2  , SDA  , GPIOB, GPIO_PIN_11 , GPIO_AF4_I2C2                      },
    { I2C2  , SDA  , GPIOF, GPIO_PIN_0  , GPIO_AF4_I2C2                      },
    { I2C2  , SDA  , GPIOB, GPIO_PIN_14 , GPIO_AF4_I2C2                      },
    { I2C3  , SCL  , GPIOG, GPIO_PIN_7  , GPIO_AF4_I2C3                      },
    { I2C3  , SCL  , GPIOC, GPIO_PIN_0  , GPIO_AF4_I2C3                      },
    { I2C3  , SDA  , GPIOC, GPIO_PIN_1  , GPIO_AF4_I2C3                      },
    { I2C3  , SDA  , GPIOG, GPIO_PIN_8  , GPIO_AF4_I2C3                      },
    { SPI1  , MISO , GPIOB, GPIO_PIN_4  , GPIO_AF5_SPI1                      },
    { SPI1  , MISO , GPIOE, GPIO_PIN_14 , GPIO_AF5_SPI1                      },
    { SPI1  , MISO , GPIOG, GPIO_PIN_3  , GPIO_AF5_SPI1                      },
    { SPI1  , MISO , GPIOA, GPIO_PIN_6  , GPIO_AF5_SPI1                      },
    { SPI1  , MOSI , GPIOB, GPIO_PIN_5  , GPIO_AF5_SPI1                      },
    { SPI1  , MOSI , GPIOG, GPIO_PIN_4  , GPIO_AF5_SPI1                      },
    { SPI1  , MOSI , GPIOE, GPIO_PIN_15 , GPIO_AF5_SPI1                      },
    { SPI1  , MOSI , GPIOA, GPIO_PIN_7  , GPIO_AF5_SPI1                      },
    { SPI1  , SCK  , GPIOG, GPIO_PIN_2  , GPIO_AF5_SPI1                      },
    { SPI1  , SCK  , GPIOA, GPIO_PIN_5  , GPIO_AF5_SPI1                      },
    { SPI1  , SCK  , GPIOB, GPIO_PIN_3  , GPIO_AF5_SPI1                      },
    { SPI1  , SCK  , GPIOE, GPIO_PIN_13 , GPIO_AF5_SPI1                      },
    { SPI2  , MISO , GPIOC, GPIO_PIN_2  , GPIO_AF5_SPI2                      },
    { SPI2  , MISO , GPIOD, GPIO_PIN_3  , GPIO_AF5_SPI2                      },
    { SPI2  , MISO , GPIOB, GPIO_PIN_14 , GPIO_AF5_SPI2                      },
    { SPI2  , MOSI , GPIOC, GPIO_PIN_3  , GPIO_AF5_SPI2                      },
    { SPI2  , MOSI , GPIOD, GPIO_PIN_4  , GPIO_AF5_SPI2                      },
    { SPI2  , MOSI , GPIOB, GPIO_PIN_15 , GPIO_AF5_SPI2                      },
    { SPI2  , SCK  , GPIOB, GPIO_PIN_10 , GPIO_AF5_SPI2                      },
    { SPI2  , SCK  , GPIOB, GPIO_PIN_13 , GPIO_AF5_SPI2                      },
    { SPI2  , SCK  , GPIOD, GPIO_PIN_1  , GPIO_AF5_SPI2                      },
    { SPI3  , MISO , GPIOG, GPIO_PIN_10 , GPIO_AF6_SPI3                      },
    { SPI3  , MISO , GPIOB, GPIO_PIN_4  , GPIO_AF6_SPI3                      },
    { SPI3  , MISO , GPIOC, GPIO_PIN_11 , GPIO_AF6_SPI3                      },
    { SPI3  , MOSI , GPIOB, GPIO_PIN_5  , GPIO_AF6_SPI3                      },
    { SPI3  , MOSI , GPIOG, GPIO_PIN_11 , GPIO_AF6_SPI3                      },
    { SPI3  , MOSI , GPIOC, GPIO_PIN_12 , GPIO_AF6_SPI3                      },
    { SPI3  , SCK  , GPIOC, GPIO_PIN_10 , GPIO_AF6_SPI3                      },
    { SPI3  , SCK  , GPIOB, GPIO_PIN_3  , GPIO_AF6_SPI3                      },
    { SPI3  , SCK  , GPIOG, GPIO_PIN_9  , GPIO_AF6_SPI3                      },
    { TIM15 , CH1  , GPIOF, GPIO_PIN_9  , GPIO_AF14_TIM15                    },
    { TIM15 , CH1  , GPIOG, GPIO_PIN_10 , GPIO_AF14_TIM15                    },
    { TIM15 , CH1  , GPIOA, GPIO_PIN_2  , GPIO_AF14_TIM15                    },
    { TIM15 , CH1  , GPIOB, GPIO_PIN_14 , GPIO_AF14_TIM15                    },
    { TIM15 , CH1N , GPIOA, GPIO_PIN_1  , GPIO_AF14_TIM15                    },
    { TIM15 , CH1N , GPIOB, GPIO_PIN_13 , GPIO_AF14_TIM15                    },
    { TIM15 , CH1N , GPIOG, GPIO_PIN_9  , GPIO_AF14_TIM15                    },
    { TIM15 , CH2  , GPIOG, GPIO_PIN_11 , GPIO_AF14_TIM15                    },
    { TIM15 , CH2  , GPIOA, GPIO_PIN_3  , GPIO_AF14_TIM15                    },
    { TIM15 , CH2  , GPIOB, GPIO_PIN_15 , GPIO_AF14_TIM15                    },
    { TIM15 , CH2  , GPIOF, GPIO_PIN_10 , GPIO_AF14_TIM15                    },
    { TIM16 , CH1  , GPIOE, GPIO_PIN_0  , GPIO_AF14_TIM16                    },
    { TIM16 , CH1  , GPIOB, GPIO_PIN_8  , GPIO_AF14_TIM16                    },
    { TIM16 , CH1  , GPIOA, GPIO_PIN_6  , GPIO_AF14_TIM16                    },
    { TIM16 , CH1N , GPIOB, GPIO_PIN_6  , GPIO_AF14_TIM16                    },
    { TIM17 , CH1  , GPIOB, GPIO_PIN_9  , GPIO_AF14_TIM17                    },
    { TIM17 , CH1  , GPIOE, GPIO_PIN_1  , GPIO_AF14_TIM17                    },
    { TIM17 , CH1  , GPIOA, GPIO_PIN_7  , GPIO_AF14_TIM17                    },
    { TIM17 , CH1N , GPIOB, GPIO_PIN_7  , GPIO_AF14_TIM17                    },
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
    { TIM3  , CH1  , GPIOE, GPIO_PIN_3  , GPIO_AF2_TIM3                      },
    { TIM3  , CH2  , GPIOB, GPIO_PIN_5  , GPIO_AF2_TIM3                      },
    { TIM3  , CH2  , GPIOE, GPIO_PIN_4  , GPIO_AF2_TIM3                      },
    { TIM3  , CH2  , GPIOC, GPIO_PIN_7  , GPIO_AF2_TIM3                      },
    { TIM3  , CH2  , GPIOA, GPIO_PIN_7  , GPIO_AF2_TIM3                      },
    { TIM3  , CH3  , GPIOE, GPIO_PIN_5  , GPIO_AF2_TIM3                      },
    { TIM3  , CH3  , GPIOC, GPIO_PIN_8  , GPIO_AF2_TIM3                      },
    { TIM3  , CH3  , GPIOB, GPIO_PIN_0  , GPIO_AF2_TIM3                      },
    { TIM3  , CH4  , GPIOE, GPIO_PIN_6  , GPIO_AF2_TIM3                      },
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
    { TIM5  , CH1  , GPIOF, GPIO_PIN_6  , GPIO_AF2_TIM5                      },
    { TIM5  , CH2  , GPIOA, GPIO_PIN_1  , GPIO_AF2_TIM5                      },
    { TIM5  , CH2  , GPIOF, GPIO_PIN_7  , GPIO_AF2_TIM5                      },
    { TIM5  , CH3  , GPIOF, GPIO_PIN_8  , GPIO_AF2_TIM5                      },
    { TIM5  , CH3  , GPIOA, GPIO_PIN_2  , GPIO_AF2_TIM5                      },
    { TIM5  , CH4  , GPIOF, GPIO_PIN_9  , GPIO_AF2_TIM5                      },
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
    { USART1, RX   , GPIOG, GPIO_PIN_10 , GPIO_AF7_USART1                    },
    { USART1, RX   , GPIOA, GPIO_PIN_10 , GPIO_AF7_USART1                    },
    { USART1, RX   , GPIOB, GPIO_PIN_7  , GPIO_AF7_USART1                    },
    { USART1, TX   , GPIOA, GPIO_PIN_9  , GPIO_AF7_USART1                    },
    { USART1, TX   , GPIOB, GPIO_PIN_6  , GPIO_AF7_USART1                    },
    { USART1, TX   , GPIOG, GPIO_PIN_9  , GPIO_AF7_USART1                    },
    { USART2, RX   , GPIOD, GPIO_PIN_6  , GPIO_AF7_USART2                    },
    { USART2, RX   , GPIOA, GPIO_PIN_3  , GPIO_AF7_USART2                    },
    { USART2, TX   , GPIOA, GPIO_PIN_2  , GPIO_AF7_USART2                    },
    { USART2, TX   , GPIOD, GPIO_PIN_5  , GPIO_AF7_USART2                    },
    { USART3, RX   , GPIOB, GPIO_PIN_11 , GPIO_AF7_USART3                    },
    { USART3, RX   , GPIOC, GPIO_PIN_11 , GPIO_AF7_USART3                    },
    { USART3, RX   , GPIOD, GPIO_PIN_9  , GPIO_AF7_USART3                    },
    { USART3, RX   , GPIOC, GPIO_PIN_5  , GPIO_AF7_USART3                    },
    { USART3, TX   , GPIOB, GPIO_PIN_10 , GPIO_AF7_USART3                    },
    { USART3, TX   , GPIOC, GPIO_PIN_10 , GPIO_AF7_USART3                    },
    { USART3, TX   , GPIOC, GPIO_PIN_4  , GPIO_AF7_USART3                    },
    { USART3, TX   , GPIOD, GPIO_PIN_8  , GPIO_AF7_USART3                    },
};
