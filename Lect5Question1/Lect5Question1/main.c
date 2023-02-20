#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

float shippingFee(unsigned short miles);

void main() {
	unsigned short miles;

	printf("   How many miles are you shipping? \n");
	scanf("%hd", &miles);

	float cost = shippingFee(miles);

	printf("The cost of shipping: %.2f", cost);
}

float shippingFee(unsigned short miles) {
	float cost;

	if (miles < 2) {
		cost = 1.5;
	}
	else if (miles > 5) {
		cost = 10 + (0.1 * miles);
	}
	else {
		cost = 3;
	}
	return cost;
}