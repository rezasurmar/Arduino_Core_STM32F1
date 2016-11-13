
enum {
//*=default , +=alternate
//PIN    |BOARD LABEL         |I2C1|I2C2|SPI1 |SPI2 |USART1|USART2|USART3|USART4|USART5|USART6|USART7|USART8|TIM (PWM)                                 |RCC       |SYS   
PA0 , // |                    |    |    |     |     |      |      |      |*TX   |      |      |      |      |*TIM2_CH1                                 |          |      
PA1 , // |                    |    |    |     |     |      |      |      |*RX   |      |      |      |      |*TIM15_CH1N *TIM2_CH2                     |          |      
PA2 , // |USART_TX            |    |    |     |     |      |*TX   |      |      |      |      |      |      |*TIM2_CH3 *TIM15_CH1                      |          |      
PA3 , // |USART_RX            |    |    |     |     |      |*RX   |      |      |      |      |      |      |*TIM2_CH4 *TIM15_CH2                      |          |      
PA4 , // |                    |    |    |     |     |      |      |      |      |      |+TX   |      |      |*TIM14_CH1                                |          |      
PA5 , // |LD2 [Green Led]     |    |    |*SCK |     |      |      |      |      |      |+RX   |      |      |+TIM2_CH1                                 |          |      
PA6 , // |                    |    |    |*MISO|     |      |      |      |      |      |      |      |      |*TIM3_CH1 *TIM16_CH1                      |          |      
PA7 , // |                    |    |    |*MOSI|     |      |      |      |      |      |      |      |      |*TIM1_CH1N *TIM3_CH2 +TIM14_CH1 *TIM17_CH1|          |      
PA8 , // |                    |    |    |     |     |      |      |      |      |      |      |      |      |*TIM1_CH1                                 |          |      
PA9 , // |                    |+SCL|    |     |     |*TX   |      |      |      |      |      |      |      |*TIM1_CH2                                 |          |      
PA10, // |                    |+SDA|    |     |     |*RX   |      |      |      |      |      |      |      |*TIM1_CH3                                 |          |      
PA11, // |                    |    |+SCL|     |     |      |      |      |      |      |      |      |      |*TIM1_CH4                                 |          |      
PA12, // |                    |    |+SDA|     |     |      |      |      |      |      |      |      |      |                                          |          |      
PA13, // |TMS                 |    |    |     |     |      |      |      |      |      |      |      |      |                                          |          |*SWDIO
PA14, // |TCK                 |    |    |     |     |      |+TX   |      |      |      |      |      |      |                                          |          |*SWCLK
PA15, // |                    |    |    |     |     |      |+RX   |      |      |      |      |      |      |+TIM2_CH1                                 |          |      
PB0 , // |                    |    |    |     |     |      |      |      |      |      |      |      |      |*TIM3_CH3 *TIM1_CH2N                      |          |      
PB1 , // |                    |    |    |     |     |      |      |      |      |      |      |      |      |*TIM1_CH3N +TIM14_CH1 *TIM3_CH4           |          |      
PB2 , // |                    |    |    |     |     |      |      |      |      |      |      |      |      |                                          |          |      
PB3 , // |                    |    |    |+SCK |     |      |      |      |      |+TX   |      |      |      |+TIM2_CH2                                 |          |      
PB4 , // |                    |    |    |+MISO|     |      |      |      |      |+RX   |      |      |      |+TIM3_CH1                                 |          |      
PB5 , // |                    |    |    |+MOSI|     |      |      |      |      |      |      |      |      |+TIM3_CH2                                 |          |      
PB6 , // |                    |+SCL|    |     |     |+TX   |      |      |      |      |      |      |      |*TIM16_CH1N                               |          |      
PB7 , // |                    |+SDA|    |     |     |+RX   |      |      |      |      |      |      |      |*TIM17_CH1N                               |          |      
PB8 , // |                    |+SCL|    |     |     |      |      |      |      |      |      |      |      |+TIM16_CH1                                |          |      
PB9 , // |                    |+SDA|    |     |     |      |      |      |      |      |      |      |      |+TIM17_CH1                                |          |      
PB10, // |                    |    |*SCL|     |*SCK |      |      |+TX   |      |      |      |      |      |+TIM2_CH3                                 |          |      
PB11, // |                    |    |*SDA|     |     |      |      |+RX   |      |      |      |      |      |+TIM2_CH4                                 |          |      
PB12, // |                    |    |    |     |     |      |      |      |      |      |      |      |      |                                          |          |      
PB13, // |                    |    |+SCL|     |+SCK |      |      |      |      |      |      |      |      |+TIM1_CH1N                                |          |      
PB14, // |                    |    |+SDA|     |+MISO|      |      |      |      |      |      |      |      |+TIM1_CH2N +TIM15_CH1                     |          |      
PB15, // |                    |    |    |     |+MOSI|      |      |      |      |      |      |      |      |+TIM1_CH3N +TIM15_CH1N +TIM15_CH2         |          |      
PC0 , // |                    |    |    |     |     |      |      |      |      |      |*TX   |*TX   |      |                                          |          |      
PC1 , // |                    |    |    |     |     |      |      |      |      |      |*RX   |*RX   |      |                                          |          |      
PC2 , // |                    |    |    |     |*MISO|      |      |      |      |      |      |      |*TX   |                                          |          |      
PC3 , // |                    |    |    |     |*MOSI|      |      |      |      |      |      |      |*RX   |                                          |          |      
PC4 , // |                    |    |    |     |     |      |      |*TX   |      |      |      |      |      |                                          |          |      
PC5 , // |                    |    |    |     |     |      |      |*RX   |      |      |      |      |      |                                          |          |      
PC6 , // |                    |    |    |     |     |      |      |      |      |      |      |+TX   |      |+TIM3_CH1                                 |          |      
PC7 , // |                    |    |    |     |     |      |      |      |      |      |      |+RX   |      |+TIM3_CH2                                 |          |      
PC8 , // |                    |    |    |     |     |      |      |      |      |      |      |      |+TX   |+TIM3_CH3                                 |          |      
PC9 , // |                    |    |    |     |     |      |      |      |      |      |      |      |+RX   |+TIM3_CH4                                 |          |      
PC10, // |                    |    |    |     |     |      |      |+TX   |+TX   |      |      |      |      |                                          |          |      
PC11, // |                    |    |    |     |     |      |      |+RX   |+RX   |      |      |      |      |                                          |          |      
PC12, // |                    |    |    |     |     |      |      |      |      |*TX   |      |      |      |                                          |          |      
PC13, // |B1 [Blue PushButton]|    |    |     |     |      |      |      |      |      |      |      |      |                                          |          |      
PC14, // |                    |    |    |     |     |      |      |      |      |      |      |      |      |                                          |*OSC32_IN |      
PC15, // |                    |    |    |     |     |      |      |      |      |      |      |      |      |                                          |*OSC32_OUT|      
PD2 , // |                    |    |    |     |     |      |      |      |      |*RX   |      |      |      |                                          |          |      
PF0 , // |                    |*SDA|    |     |     |      |      |      |      |      |      |      |      |                                          |*OSC_IN   |      
PF1 , // |                    |*SCL|    |     |     |      |      |      |      |      |      |      |      |                                          |*OSC_OUT  |      
PF11, // |                    |    |    |     |     |      |      |      |      |      |      |      |      |                                          |          |      
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
  { PD2 , GPIO_PIN_2 , GPIOD, GPIO_PIN_IO, false},
  { PF0 , GPIO_PIN_0 , GPIOF, GPIO_PIN_IO, false},
  { PF1 , GPIO_PIN_1 , GPIOF, GPIO_PIN_IO, false},
  { PF11, GPIO_PIN_11, GPIOF, GPIO_PIN_IO, false},
};



spi_init_info_t spi_init_info[] = { 
  { 
    .init_done = 0, 
    .spi_instance = SPI1, 
    .mosi_alternate = GPIO_AF0_SPI1,
    .mosi_port = GPIOA, 
    .mosi_pin =  GPIO_PIN_7, 
    .miso_alternate = GPIO_AF0_SPI1,
    .miso_port = GPIOA, 
    .miso_pin = GPIO_PIN_6, 
    .sck_alternate = GPIO_AF0_SPI1,
    .sck_port = GPIOA, 
    .sck_pin = GPIO_PIN_5, 
  },
  { 
    .init_done = 0, 
    .spi_instance = SPI2, 
    .mosi_alternate = GPIO_AF1_SPI2,
    .mosi_port = GPIOC, 
    .mosi_pin =  GPIO_PIN_3, 
    .miso_alternate = GPIO_AF1_SPI2,
    .miso_port = GPIOC, 
    .miso_pin = GPIO_PIN_2, 
    .sck_alternate = GPIO_AF5_SPI2,
    .sck_port = GPIOB, 
    .sck_pin = GPIO_PIN_10, 
  },
}; 

uint8_t NB_SPI_INSTANCES = sizeof(spi_init_info) / sizeof(spi_init_info[0]);

i2c_init_info_t g_i2c_init_info[] = {
  {
    .init_done = 0,
    .i2c_instance = I2C1,
    .irq = I2C1_EV_IRQn,
    .sda_alternate = GPIO_AF1_I2C1,
    .sda_port = GPIOF,
    .sda_pin = GPIO_PIN_0,
    .scl_alternate = GPIO_AF1_I2C1,
    .scl_port = GPIOF,
    .scl_pin = GPIO_PIN_1,
    .i2c_onSlaveReceive = NULL,
    .i2c_onSlaveTransmit = NULL,
    .i2cTxRxBufferSize = 0
  },
  {
    .init_done = 0,
    .i2c_instance = I2C2,
    .irq = I2C2_EV_IRQn,
    .sda_alternate = GPIO_AF1_I2C2,
    .sda_port = GPIOB,
    .sda_pin = GPIO_PIN_11,
    .scl_alternate = GPIO_AF1_I2C2,
    .scl_port = GPIOB,
    .scl_pin = GPIO_PIN_10,
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
    .uart_af_remap = GPIO_AF1_USART1,
    .tx_alternate  = GPIO_AF1_USART1,
    .rx_alternate  = GPIO_AF1_USART1,
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
    .uart_af_remap = GPIO_AF1_USART2,
    .tx_alternate  = GPIO_AF1_USART2,
    .rx_alternate  = GPIO_AF1_USART2,
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
    .uart_af_remap = GPIO_AF1_USART3,
    .tx_alternate  = GPIO_AF1_USART3,
    .rx_alternate  = GPIO_AF1_USART3,
    .data_available = 0,
    .begin = 0,
    .end = 0,
    .uart_option = NATIVE_UART_E
  },
  {
    //UART ID and IRQ
    .usart_typedef = USART4, .irqtype = USART4_IRQn,
    .tx_port = GPIOA, .tx_pin = GPIO_PIN_0,
    .rx_port = GPIOA, .rx_pin = GPIO_PIN_1,
    .uart_af_remap = GPIO_AF4_USART4,
    .tx_alternate  = GPIO_AF4_USART4,
    .rx_alternate  = GPIO_AF4_USART4,
    .data_available = 0,
    .begin = 0,
    .end = 0,
    .uart_option = NATIVE_UART_E
  },
  {
    //UART ID and IRQ
    .usart_typedef = USART5, .irqtype = USART5_IRQn,
    .tx_port = GPIOC, .tx_pin = GPIO_PIN_12,
    .rx_port = GPIOD, .rx_pin = GPIO_PIN_2,
    .uart_af_remap = GPIO_AF2_USART5,
    .tx_alternate  = GPIO_AF2_USART5,
    .rx_alternate  = GPIO_AF2_USART5,
    .data_available = 0,
    .begin = 0,
    .end = 0,
    .uart_option = NATIVE_UART_E
  },
  {
    //UART ID and IRQ
    .usart_typedef = USART6, .irqtype = USART6_IRQn,
    .tx_port = GPIOC, .tx_pin = GPIO_PIN_0,
    .rx_port = GPIOC, .rx_pin = GPIO_PIN_1,
    .uart_af_remap = GPIO_AF2_USART6,
    .tx_alternate  = GPIO_AF2_USART6,
    .rx_alternate  = GPIO_AF2_USART6,
    .data_available = 0,
    .begin = 0,
    .end = 0,
    .uart_option = NATIVE_UART_E
  },
  {
    //UART ID and IRQ
    .usart_typedef = USART7, .irqtype = USART7_IRQn,
    .tx_port = GPIOC, .tx_pin = GPIO_PIN_0,
    .rx_port = GPIOC, .rx_pin = GPIO_PIN_1,
    .uart_af_remap = GPIO_AF1_USART7,
    .tx_alternate  = GPIO_AF1_USART7,
    .rx_alternate  = GPIO_AF1_USART7,
    .data_available = 0,
    .begin = 0,
    .end = 0,
    .uart_option = NATIVE_UART_E
  },
  {
    //UART ID and IRQ
    .usart_typedef = USART8, .irqtype = USART8_IRQn,
    .tx_port = GPIOC, .tx_pin = GPIO_PIN_2,
    .rx_port = GPIOC, .rx_pin = GPIO_PIN_3,
    .uart_af_remap = GPIO_AF2_USART8,
    .tx_alternate  = GPIO_AF2_USART8,
    .rx_alternate  = GPIO_AF2_USART8,
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
};
#if defined (STM32F100xB) || defined (STM32F100xE) || defined (STM32F101xE) || defined (STM32F101xG) || defined (STM32F103xE) || defined (STM32F103xG) || defined (STM32F105xC) || defined (STM32F107xC)
dac_config_str g_dac_config[] = {
    
};
#endif

pwm_config_str g_pwm_config[] = {
  {
    .port = GPIOA,
    .pin = GPIO_PIN_8,
    .alFunction = GPIO_AF2_TIM1,
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
    .alFunction = GPIO_AF2_TIM1,
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
    .port = GPIOA,
    .pin = GPIO_PIN_9,
    .alFunction = GPIO_AF2_TIM1,
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
    .alFunction = GPIO_AF2_TIM1,
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
    .port = GPIOA,
    .pin = GPIO_PIN_10,
    .alFunction = GPIO_AF2_TIM1,
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
    .alFunction = GPIO_AF2_TIM1,
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
    .port = GPIOA,
    .pin = GPIO_PIN_11,
    .alFunction = GPIO_AF2_TIM1,
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
    .port = GPIOA,
    .pin = GPIO_PIN_4,
    .alFunction = GPIO_AF4_TIM14,
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
    .pin = GPIO_PIN_2,
    .alFunction = GPIO_AF0_TIM15,
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
    .alFunction = GPIO_AF5_TIM15,
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
    .port = GPIOA,
    .pin = GPIO_PIN_3,
    .alFunction = GPIO_AF0_TIM15,
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
    .alFunction = GPIO_AF5_TIM16,
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
    .alFunction = GPIO_AF2_TIM16,
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
    .alFunction = GPIO_AF5_TIM17,
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
    .alFunction = GPIO_AF2_TIM17,
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
    .alFunction = GPIO_AF2_TIM2,
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
    .alFunction = GPIO_AF2_TIM2,
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
    .alFunction = GPIO_AF2_TIM2,
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
    .alFunction = GPIO_AF2_TIM2,
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
    .alFunction = GPIO_AF1_TIM3,
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
    .alFunction = GPIO_AF1_TIM3,
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
    .alFunction = GPIO_AF1_TIM3,
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
    .alFunction = GPIO_AF1_TIM3,
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
};

uint8_t NB_ADC_INSTANCES = sizeof(g_adc_config) / sizeof(g_adc_config[0]);
#if defined (STM32F100xB) || defined (STM32F100xE) || defined (STM32F101xE) || defined (STM32F101xG) || defined (STM32F103xE) || defined (STM32F103xG) || defined (STM32F105xC) || defined (STM32F107xC)
uint8_t NB_DAC_INSTANCES = sizeof(g_dac_config) / sizeof(g_dac_config[0]);
#endif
uint8_t NB_PWM_INSTANCES = sizeof(g_pwm_config) / sizeof(g_pwm_config[0]);

remaps_t remaps {
    { I2C1  , SCL  , GPIOF, GPIO_PIN_1  , GPIO_AF1_I2C1                      },
    { I2C1  , SCL  , GPIOA, GPIO_PIN_9  , GPIO_AF4_I2C1                      },
    { I2C1  , SCL  , GPIOB, GPIO_PIN_6  , GPIO_AF1_I2C1                      },
    { I2C1  , SCL  , GPIOB, GPIO_PIN_8  , GPIO_AF1_I2C1                      },
    { I2C1  , SDA  , GPIOF, GPIO_PIN_0  , GPIO_AF1_I2C1                      },
    { I2C1  , SDA  , GPIOA, GPIO_PIN_10 , GPIO_AF4_I2C1                      },
    { I2C1  , SDA  , GPIOB, GPIO_PIN_9  , GPIO_AF1_I2C1                      },
    { I2C1  , SDA  , GPIOB, GPIO_PIN_7  , GPIO_AF1_I2C1                      },
    { I2C2  , SCL  , GPIOB, GPIO_PIN_10 , GPIO_AF1_I2C2                      },
    { I2C2  , SCL  , GPIOB, GPIO_PIN_13 , GPIO_AF5_I2C2                      },
    { I2C2  , SCL  , GPIOA, GPIO_PIN_11 , GPIO_AF5_I2C2                      },
    { I2C2  , SDA  , GPIOA, GPIO_PIN_12 , GPIO_AF5_I2C2                      },
    { I2C2  , SDA  , GPIOB, GPIO_PIN_11 , GPIO_AF1_I2C2                      },
    { I2C2  , SDA  , GPIOB, GPIO_PIN_14 , GPIO_AF5_I2C2                      },
    { SPI1  , MISO , GPIOB, GPIO_PIN_4  , GPIO_AF0_SPI1                      },
    { SPI1  , MISO , GPIOA, GPIO_PIN_6  , GPIO_AF0_SPI1                      },
    { SPI1  , MOSI , GPIOB, GPIO_PIN_5  , GPIO_AF0_SPI1                      },
    { SPI1  , MOSI , GPIOA, GPIO_PIN_7  , GPIO_AF0_SPI1                      },
    { SPI1  , SCK  , GPIOA, GPIO_PIN_5  , GPIO_AF0_SPI1                      },
    { SPI1  , SCK  , GPIOB, GPIO_PIN_3  , GPIO_AF0_SPI1                      },
    { SPI2  , MISO , GPIOC, GPIO_PIN_2  , GPIO_AF1_SPI2                      },
    { SPI2  , MISO , GPIOB, GPIO_PIN_14 , GPIO_AF0_SPI2                      },
    { SPI2  , MOSI , GPIOC, GPIO_PIN_3  , GPIO_AF1_SPI2                      },
    { SPI2  , MOSI , GPIOB, GPIO_PIN_15 , GPIO_AF0_SPI2                      },
    { SPI2  , SCK  , GPIOB, GPIO_PIN_10 , GPIO_AF5_SPI2                      },
    { SPI2  , SCK  , GPIOB, GPIO_PIN_13 , GPIO_AF0_SPI2                      },
    { TIM14 , CH1  , GPIOB, GPIO_PIN_1  , GPIO_AF0_TIM14                     },
    { TIM14 , CH1  , GPIOA, GPIO_PIN_4  , GPIO_AF4_TIM14                     },
    { TIM14 , CH1  , GPIOA, GPIO_PIN_7  , GPIO_AF4_TIM14                     },
    { TIM15 , CH1  , GPIOA, GPIO_PIN_2  , GPIO_AF0_TIM15                     },
    { TIM15 , CH1  , GPIOB, GPIO_PIN_14 , GPIO_AF1_TIM15                     },
    { TIM15 , CH1N , GPIOA, GPIO_PIN_1  , GPIO_AF5_TIM15                     },
    { TIM15 , CH1N , GPIOB, GPIO_PIN_15 , GPIO_AF3_TIM15                     },
    { TIM15 , CH2  , GPIOA, GPIO_PIN_3  , GPIO_AF0_TIM15                     },
    { TIM15 , CH2  , GPIOB, GPIO_PIN_15 , GPIO_AF1_TIM15                     },
    { TIM16 , CH1  , GPIOB, GPIO_PIN_8  , GPIO_AF2_TIM16                     },
    { TIM16 , CH1  , GPIOA, GPIO_PIN_6  , GPIO_AF5_TIM16                     },
    { TIM16 , CH1N , GPIOB, GPIO_PIN_6  , GPIO_AF2_TIM16                     },
    { TIM17 , CH1  , GPIOB, GPIO_PIN_9  , GPIO_AF2_TIM17                     },
    { TIM17 , CH1  , GPIOA, GPIO_PIN_7  , GPIO_AF5_TIM17                     },
    { TIM17 , CH1N , GPIOB, GPIO_PIN_7  , GPIO_AF2_TIM17                     },
    { TIM1  , CH1  , GPIOA, GPIO_PIN_8  , GPIO_AF2_TIM1                      },
    { TIM1  , CH1N , GPIOB, GPIO_PIN_13 , GPIO_AF2_TIM1                      },
    { TIM1  , CH1N , GPIOA, GPIO_PIN_7  , GPIO_AF2_TIM1                      },
    { TIM1  , CH2  , GPIOA, GPIO_PIN_9  , GPIO_AF2_TIM1                      },
    { TIM1  , CH2N , GPIOB, GPIO_PIN_0  , GPIO_AF2_TIM1                      },
    { TIM1  , CH2N , GPIOB, GPIO_PIN_14 , GPIO_AF2_TIM1                      },
    { TIM1  , CH3  , GPIOA, GPIO_PIN_10 , GPIO_AF2_TIM1                      },
    { TIM1  , CH3N , GPIOB, GPIO_PIN_15 , GPIO_AF2_TIM1                      },
    { TIM1  , CH3N , GPIOB, GPIO_PIN_1  , GPIO_AF2_TIM1                      },
    { TIM1  , CH4  , GPIOA, GPIO_PIN_11 , GPIO_AF2_TIM1                      },
    { TIM2  , CH1  , GPIOA, GPIO_PIN_0  , GPIO_AF2_TIM2                      },
    { TIM2  , CH1  , GPIOA, GPIO_PIN_5  , GPIO_AF2_TIM2                      },
    { TIM2  , CH1  , GPIOA, GPIO_PIN_15 , GPIO_AF2_TIM2                      },
    { TIM2  , CH2  , GPIOA, GPIO_PIN_1  , GPIO_AF2_TIM2                      },
    { TIM2  , CH2  , GPIOB, GPIO_PIN_3  , GPIO_AF2_TIM2                      },
    { TIM2  , CH3  , GPIOB, GPIO_PIN_10 , GPIO_AF2_TIM2                      },
    { TIM2  , CH3  , GPIOA, GPIO_PIN_2  , GPIO_AF2_TIM2                      },
    { TIM2  , CH4  , GPIOB, GPIO_PIN_11 , GPIO_AF2_TIM2                      },
    { TIM2  , CH4  , GPIOA, GPIO_PIN_3  , GPIO_AF2_TIM2                      },
    { TIM3  , CH1  , GPIOB, GPIO_PIN_4  , GPIO_AF1_TIM3                      },
    { TIM3  , CH1  , GPIOC, GPIO_PIN_6  , GPIO_AF0_TIM3                      },
    { TIM3  , CH1  , GPIOA, GPIO_PIN_6  , GPIO_AF1_TIM3                      },
    { TIM3  , CH2  , GPIOB, GPIO_PIN_5  , GPIO_AF1_TIM3                      },
    { TIM3  , CH2  , GPIOC, GPIO_PIN_7  , GPIO_AF0_TIM3                      },
    { TIM3  , CH2  , GPIOA, GPIO_PIN_7  , GPIO_AF1_TIM3                      },
    { TIM3  , CH3  , GPIOC, GPIO_PIN_8  , GPIO_AF0_TIM3                      },
    { TIM3  , CH3  , GPIOB, GPIO_PIN_0  , GPIO_AF1_TIM3                      },
    { TIM3  , CH4  , GPIOC, GPIO_PIN_9  , GPIO_AF0_TIM3                      },
    { TIM3  , CH4  , GPIOB, GPIO_PIN_1  , GPIO_AF1_TIM3                      },
    { USART1, RX   , GPIOA, GPIO_PIN_10 , GPIO_AF1_USART1                    },
    { USART1, RX   , GPIOB, GPIO_PIN_7  , GPIO_AF0_USART1                    },
    { USART1, TX   , GPIOA, GPIO_PIN_9  , GPIO_AF1_USART1                    },
    { USART1, TX   , GPIOB, GPIO_PIN_6  , GPIO_AF0_USART1                    },
    { USART2, RX   , GPIOA, GPIO_PIN_3  , GPIO_AF1_USART2                    },
    { USART2, RX   , GPIOA, GPIO_PIN_15 , GPIO_AF1_USART2                    },
    { USART2, TX   , GPIOA, GPIO_PIN_2  , GPIO_AF1_USART2                    },
    { USART2, TX   , GPIOA, GPIO_PIN_14 , GPIO_AF1_USART2                    },
    { USART3, RX   , GPIOB, GPIO_PIN_11 , GPIO_AF4_USART3                    },
    { USART3, RX   , GPIOC, GPIO_PIN_11 , GPIO_AF1_USART3                    },
    { USART3, RX   , GPIOC, GPIO_PIN_5  , GPIO_AF1_USART3                    },
    { USART3, TX   , GPIOB, GPIO_PIN_10 , GPIO_AF4_USART3                    },
    { USART3, TX   , GPIOC, GPIO_PIN_10 , GPIO_AF1_USART3                    },
    { USART3, TX   , GPIOC, GPIO_PIN_4  , GPIO_AF1_USART3                    },
    { USART4, RX   , GPIOA, GPIO_PIN_1  , GPIO_AF4_USART4                    },
    { USART4, RX   , GPIOC, GPIO_PIN_11 , GPIO_AF0_USART4                    },
    { USART4, TX   , GPIOA, GPIO_PIN_0  , GPIO_AF4_USART4                    },
    { USART4, TX   , GPIOC, GPIO_PIN_10 , GPIO_AF0_USART4                    },
    { USART5, RX   , GPIOB, GPIO_PIN_4  , GPIO_AF4_USART5                    },
    { USART5, RX   , GPIOD, GPIO_PIN_2  , GPIO_AF2_USART5                    },
    { USART5, TX   , GPIOC, GPIO_PIN_12 , GPIO_AF2_USART5                    },
    { USART5, TX   , GPIOB, GPIO_PIN_3  , GPIO_AF4_USART5                    },
    { USART6, RX   , GPIOC, GPIO_PIN_1  , GPIO_AF2_USART6                    },
    { USART6, RX   , GPIOA, GPIO_PIN_5  , GPIO_AF5_USART6                    },
    { USART6, TX   , GPIOC, GPIO_PIN_0  , GPIO_AF2_USART6                    },
    { USART6, TX   , GPIOA, GPIO_PIN_4  , GPIO_AF5_USART6                    },
    { USART7, RX   , GPIOC, GPIO_PIN_1  , GPIO_AF1_USART7                    },
    { USART7, RX   , GPIOC, GPIO_PIN_7  , GPIO_AF1_USART7                    },
    { USART7, TX   , GPIOC, GPIO_PIN_0  , GPIO_AF1_USART7                    },
    { USART7, TX   , GPIOC, GPIO_PIN_6  , GPIO_AF1_USART7                    },
    { USART8, RX   , GPIOC, GPIO_PIN_3  , GPIO_AF2_USART8                    },
    { USART8, RX   , GPIOC, GPIO_PIN_9  , GPIO_AF1_USART8                    },
    { USART8, TX   , GPIOC, GPIO_PIN_2  , GPIO_AF2_USART8                    },
    { USART8, TX   , GPIOC, GPIO_PIN_8  , GPIO_AF1_USART8                    },
};
