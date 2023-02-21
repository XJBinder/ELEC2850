#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "minmax.h"

void main() {
	unsigned char array[7] = { 3,8,5,10,1,4,7 };
	unsigned char min;
	unsigned char max;

	for (unsigned char i = 0; i < 7; i++) {
		min = findMin(array[i]);
		max = findMax(array[i]);
	}

	printf("\n   Min: %d\n   Max: %d\n", min, max);
}