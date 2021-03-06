/*
 * Copyright (c) 2016 Open-RnD Sp. z o.o.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef _STM32L1_PINMUX_H_
#define _STM32L1_PINMUX_H_

/**
 * @file Header for STM32L1 pin multiplexing helper
 */
/* Port A */
#define STM32L1_PINMUX_FUNC_PA0_UART4_TX    \
	(STM32_PINMUX_ALT_FUNC_8 | STM32_PUSHPULL_PULLUP)

#define STM32L1_PINMUX_FUNC_PA1_UART4_RX    \
	(STM32_PINMUX_ALT_FUNC_8 | STM32_PUSHPULL_NOPULL)

#define STM32L1_PINMUX_FUNC_PA2_USART2_TX   \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUSHPULL_PULLUP)

#define STM32L1_PINMUX_FUNC_PA3_USART2_RX   \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUSHPULL_NOPULL)

#define STM32L1_PINMUX_FUNC_PA9_USART1_TX   \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUSHPULL_PULLUP)

#define STM32L1_PINMUX_FUNC_PA10_USART1_RX  \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUSHPULL_NOPULL)

#define STM32L1_PINMUX_FUNC_PA11_OTG_FS_DM  \
	(STM32_PINMUX_ALT_FUNC_10 | STM32_PUSHPULL_NOPULL)

#define STM32L1_PINMUX_FUNC_PA12_OTG_FS_DP  \
	(STM32_PINMUX_ALT_FUNC_10 | STM32_PUSHPULL_NOPULL)

/* Port B */
#define STM32L1_PINMUX_FUNC_PB6_USART1_TX   \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUSHPULL_PULLUP)

#define STM32L1_PINMUX_FUNC_PB7_USART1_RX   \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUSHPULL_NOPULL)

#define STM32L1_PINMUX_FUNC_PB10_USART3_TX  \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUSHPULL_PULLUP)

#define STM32L1_PINMUX_FUNC_PB11_USART3_RX  \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUSHPULL_NOPULL)

#define STM32L1_PINMUX_FUNC_PC10_USART3_TX  \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUSHPULL_PULLUP)
#define STM32L1_PINMUX_FUNC_PC10_UART4_TX   \
	(STM32_PINMUX_ALT_FUNC_8 | STM32_PUSHPULL_PULLUP)

#define STM32L1_PINMUX_FUNC_PC11_USART3_RX  \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUSHPULL_NOPULL)
#define STM32L1_PINMUX_FUNC_PC11_UART4_RX   \
	(STM32_PINMUX_ALT_FUNC_8 | STM32_PUSHPULL_NOPULL)

#define STM32L1_PINMUX_FUNC_PC12_UART5_TX   \
	(STM32_PINMUX_ALT_FUNC_8 | STM32_PUSHPULL_PULLUP)

/* Port D */
#define STM32L1_PINMUX_FUNC_PD2_UART5_RX    \
	(STM32_PINMUX_ALT_FUNC_8 | STM32_PUSHPULL_NOPULL)

#define STM32L1_PINMUX_FUNC_PD5_USART2_TX   \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUSHPULL_PULLUP)

#define STM32L1_PINMUX_FUNC_PD6_USART2_RX   \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUSHPULL_NOPULL)

#define STM32L1_PINMUX_FUNC_PD8_USART3_TX   \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUSHPULL_PULLUP)

#define STM32L1_PINMUX_FUNC_PD9_USART3_RX   \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUSHPULL_NOPULL)



#define STM32L1_PINMUX_FUNC_PA4_SPI1_MASTER_NSS      STM32_PIN_SPI_MASTER_NSS
#define STM32L1_PINMUX_FUNC_PA4_SPI1_MASTER_NSS_OE   STM32_PIN_SPI_MASTER_NSS_OE
#define STM32L1_PINMUX_FUNC_PA4_SPI1_SLAVE_NSS       STM32_PIN_SPI_SLAVE_NSS
#define STM32L1_PINMUX_FUNC_PA5_SPI1_MASTER_SCK      STM32_PIN_SPI_MASTER_SCK
#define STM32L1_PINMUX_FUNC_PA5_SPI1_SLAVE_SCK       STM32_PIN_SPI_SLAVE_SCK
#define STM32L1_PINMUX_FUNC_PA6_SPI1_MASTER_MISO     STM32_PIN_SPI_MASTER_MISO
#define STM32L1_PINMUX_FUNC_PA6_SPI1_SLAVE_MISO      STM32_PIN_SPI_SLAVE_MISO
#define STM32L1_PINMUX_FUNC_PA7_SPI1_MASTER_MOSI     STM32_PIN_SPI_MASTER_MOSI
#define STM32L1_PINMUX_FUNC_PA7_SPI1_SLAVE_MOSI      STM32_PIN_SPI_SLAVE_MOSI


#define STM32L1_PINMUX_FUNC_PB12_SPI2_MASTER_NSS     STM32_PIN_SPI_MASTER_NSS
#define STM32L1_PINMUX_FUNC_PB12_SPI2_MASTER_NSS_OE  STM32_PIN_SPI_MASTER_NSS_OE
#define STM32L1_PINMUX_FUNC_PB12_SPI2_SLAVE_NSS      STM32_PIN_SPI_SLAVE_NSS
#define STM32L1_PINMUX_FUNC_PB13_SPI2_MASTER_SCK     STM32_PIN_SPI_MASTER_SCK
#define STM32L1_PINMUX_FUNC_PB13_SPI2_SLAVE_SCK      STM32_PIN_SPI_SLAVE_SCK
#define STM32L1_PINMUX_FUNC_PB14_SPI2_MASTER_MISO    STM32_PIN_SPI_MASTER_MISO
#define STM32L1_PINMUX_FUNC_PB14_SPI2_SLAVE_MISO     STM32_PIN_SPI_SLAVE_MISO
#define STM32L1_PINMUX_FUNC_PB15_SPI2_MASTER_MOSI    STM32_PIN_SPI_MASTER_MOSI
#define STM32L1_PINMUX_FUNC_PB15_SPI2_SLAVE_MOSI     STM32_PIN_SPI_SLAVE_MOSI


#endif /* _STM32L1_PINMUX_H_ */
