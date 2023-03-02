/**
 ******************************************************************************
 * @file           : main.c
 * @author         : XJBinder
 * @brief          : Blink External LED
 ******************************************************************************
 * @attention
 *
 * Copyright (c) 2023 STMicroelectronics.
 * All rights reserved.
 *
 * This software is licensed under terms that can be found in the LICENSE file
 * in the root directory of this software component.
 * If no LICENSE file comes with this software, it is provided AS-IS.
 *
 ******************************************************************************
 */

#include <stdint.h>

#if !defined(__SOFT_FP__) && defined(__ARM_FP)
  #warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif

int main(void)
{
	// Points at RCC BUS AHB1
	int* ptrRcc = (int*)0x40023830;
	*ptrRcc = *ptrRcc | (1 << 1);

	// Sets PIN Mode to Output
	int* ptrMode = (int*)0x40020400;
	*ptrMode = *ptrMode & ~(1 << 25);
	*ptrMode = *ptrMode | (1 << 24);

	// Activates PIN B12 to HIGH State
	int* ptrOutput = (int*)0x40020414;

	for(;;) {
		*ptrOutput = *ptrOutput | (1 << 12); // External LED On
		for(unsigned int i = 0; i < 500000; i++); // Delay
		*ptrOutput = *ptrOutput & ~(1 << 12); // External LED Off
		for(unsigned int i = 0; i < 500000; i++); // Delay
	}
}
