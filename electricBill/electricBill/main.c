// Electric Bill Calculator - Pilin - ELEC2850 - Jon Binder
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>
#include "funcs.h"

// Main Loop
void main() {
	float cost = 0;
	float max = 0;
	float min = INT_MAX;
	float units;
	float sum = 0;
	unsigned char count = 0;

	printf("\n            ----------------------------\n            --Electric Bill Calculator--\n            ----------------------------\n");
	printf("\n      Enter number of Units used this month: ");
	scanf("%f", &units);

	if (units <= 0) {
		min = 0;
		count = 1;
	}

	while (units > 0) {
		cost = electricBill(units);
		printf("      Your electric bill is: $%.2f\n", cost);
		printf("      Enter number of Units used this month: ");
		scanf("%f", &units);

		max = findMax(cost, max);
		min = findMin(cost, min);
		sum = sum + cost;
		count = count++;
	}

	float avg = findAvg(sum, count);
	printf("      Maximum: $%.2f\n      Minimum: $%.2f\n      Average: $%.2f\n", max, min, avg);
}