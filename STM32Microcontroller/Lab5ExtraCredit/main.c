/**
 ******************************************************************************
 * @file           : main.c
 * @author         : XJBinder
 * @brief          : LED Extra Credit
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

int main(void) {
	// Quickly adjust LED Speed
	unsigned int ledSpeed = 1000000;

	// Chooses RCC BUS AHB1
	int* ptrRcc = (int*)0x40023830;
	*ptrRcc = *ptrRcc | (1 << 3);

	// Enables PIN
	int* ptrMode = (int*)0x40020C00;
	// Green LED
	*ptrMode = *ptrMode & ~(1 << 25);
	*ptrMode = *ptrMode | (1 << 24);
	// Orange LED
	*ptrMode = *ptrMode & ~(1 << 27);
	*ptrMode = *ptrMode | (1 << 26);
	// Red LED
	*ptrMode = *ptrMode & ~(1 << 29);
	*ptrMode = *ptrMode | (1 << 28);
	// Blue LED
	*ptrMode = *ptrMode & ~(1 << 31);
	*ptrMode = *ptrMode | (1 << 30);

	// Sets PIN to Output
	int* ptrOutput = (int*)0x40020C14;

	// Forever Loop
	for(;;) {
		*ptrOutput = *ptrOutput & ~(1 << 12); // Turn off Green LED
		*ptrOutput = *ptrOutput | (1 << 13); // Turn on Orange LED
		for(unsigned int i = 0; i < ledSpeed; i++); // Delay
		*ptrOutput = *ptrOutput | (1 << 12); // Turn on Green LED
		for(unsigned int i = 0; i < ledSpeed; i++); // Delay
		*ptrOutput = *ptrOutput | (1 << 15); // Turn on Blue LED
		for(unsigned int i = 0; i < ledSpeed; i++); // Delay
		*ptrOutput = *ptrOutput | (1 << 14); // Turn on Red LED
		for(unsigned int i = 0; i < ledSpeed; i++); // Delay
		*ptrOutput = *ptrOutput & ~(1 << 12); // Turn off Green LED
		*ptrOutput = *ptrOutput & ~(1 << 15); // Turn off Blue LED
		*ptrOutput = *ptrOutput & ~(1 << 14); // Turn off Red LED
		*ptrOutput = *ptrOutput & ~(1 << 13); // Turn off Orange LED
		for(unsigned int i = 0; i < ledSpeed; i++); // Delay
		*ptrOutput = *ptrOutput | (1 << 12); // Turn on Green LED
		*ptrOutput = *ptrOutput | (1 << 15); // Turn on Blue LED
		*ptrOutput = *ptrOutput | (1 << 14); // Turn on Red LED
		*ptrOutput = *ptrOutput | (1 << 13); // Turn on Orange LED
		for(unsigned int i = 0; i < ledSpeed; i++); // Delay
		*ptrOutput = *ptrOutput & ~(1 << 14); // Turn off Red LED
		for(unsigned int i = 0; i < ledSpeed; i++); // Delay
		*ptrOutput = *ptrOutput & ~(1 << 15); // Turn off Blue LED
		for(unsigned int i = 0; i < ledSpeed; i++); // Delay
	}
}
