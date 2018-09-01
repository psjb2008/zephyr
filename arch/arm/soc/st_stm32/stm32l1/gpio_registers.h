/*
 * Copyright (c) 2016 Open-RnD Sp. z o.o.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef _STM32L15X_GPIO_REGISTERS_H_
#define _STM32L15X_GPIO_REGISTERS_H_


/**
 * @brief
 *
 * Based on reference manual:
 *   stm32l15X advanced ARM ® -based 32-bit MCUs

 *
 * Chapter 7: General-purpose I/Os (GPIO)
 * Chapter 8: System configuration controller (SYSCFG)
 */

struct stm32l1x_gpio {
	u32_t moder;
	u32_t otyper;
	u32_t ospeedr;
	u32_t pupdr;
	u32_t idr;
	u32_t odr;
	u32_t bsrr;
	u32_t lckr;
	u32_t afr[2];
	u32_t brr;
};

union syscfg_exticr {
	u32_t val;
	struct {
		u16_t rsvd__16_31;
		u16_t exti;
	} bit;
};

/* 7.2 SYSCFG registers */
struct stm32l1x_syscfg {
	u32_t memrmp;
	u32_t pmc;
	union syscfg_exticr exticr1;
	union syscfg_exticr exticr2;
	union syscfg_exticr exticr3;
	union syscfg_exticr exticr4;
	u32_t cmpcr;
};

#endif /* _STM32L15X_GPIO_REGISTERS_H_ */
