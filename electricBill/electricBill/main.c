#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	float units;
	float max = 0;
	float min = 999999;
	float cost;
	float avg;
	float i = 0;
	unsigned char count = 0;

	printf("\n            ----------------------------\n            --Electric Bill Calculator--\n            ----------------------------\n");
	printf("\n      Enter number of Units used this month: ");
	scanf("%f", &units);

	while (units > 0) {
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

		if (cost > max) {
			max = cost;
		}
		if (cost < min) {
			min = cost;
		}
		i = i + cost;
		printf("      Your electric bill is: $%.2f\n", cost);
		printf("      Enter number of Units used this month: ");
		scanf("%f", &units);
		count = count++;
	}

	avg = i / count;
	printf("      Maximum: $%.2f\n      Minimum: $%.2f\n      Average: $%.2f\n", max, min, avg);
}