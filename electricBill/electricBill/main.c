// Electric Bill Calculator - Pilin - ELEC2850 - Jon Binder
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// Function Declaration
float electricBill(float units);
float findMax(float cost, float max);
float findMin(float cost, float min);
float findAvg(float sum, unsigned char count);

// Main Loop
void main() {
	float cost = 0;
	float max = 0;
	float min = 999999;
	float units;
	float sum = 0;
	unsigned char count = 0;

	printf("\n            ----------------------------\n            --Electric Bill Calculator--\n            ----------------------------\n");
	printf("\n      Enter number of Units used this month: ");
	scanf("%f", &units);

	while (units > 0) {
		float cost = electricBill(units);
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

	// Functions
float findAvg(float sum, unsigned char count) {
	float avg;

	avg = sum / count;

	return avg;
}

float findMax(float cost, float max) {
	if (cost > max) {
		max = cost;
	}
	return max;
}

float findMin(float cost, float min) {
	if (cost < min) {
		min = cost;
	}
	return min;
}

float electricBill(float units) {
	float cost;

	if (units > 200) {
		cost = ((units - 200) * 1.2) + 130;
	}
	else if (units > 100) {
		cost = ((units - 100) * 0.75) + 55;
	}
	else if (units > 50) {
		cost = ((units - 50) * 0.6) + 25;
	}
	else if (units > 0) {
		cost = units * 0.5;
	}
	return cost;
}