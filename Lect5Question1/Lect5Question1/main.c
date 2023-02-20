// Lecture 5 - Question 1 - Jon Binder
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "service.h"

// Main Loop
void main() {
	unsigned short miles;

	printf("\n   Please Enter Miles to Ship: ");
	scanf("%hd", &miles);

	float cost = shippingFee(miles);

	printf("   The cost of shipping: $%.2f\n", cost);
}