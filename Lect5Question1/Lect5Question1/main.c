#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

float shippingFee(unsigned short miles);

void main() {
	unsigned short miles;

	printf("\n   Please Enter Miles to Ship: ");
	scanf("%hd", &miles);

	float cost = shippingFee(miles);

	printf("   The cost of shipping: $%.2f\n", cost);
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