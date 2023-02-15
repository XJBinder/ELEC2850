#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	unsigned char height[7] = { 150, 165, 170, 162, 134, 175, 181 };
	unsigned char min;
	unsigned short sum = 0;
	float avg;

	printf("Height of human 1 = %d\n", height[0]);
								// First Question
	printf("Height of human 3 = %d\n", height[2]);

	for (unsigned char i = 0; i < 7; i++) {
		sum = sum + height[i];
		printf("%d\n", height[i]);	// Total of all People
	}                                          
	printf("Total: %d\n", sum);
	sum = 0;

	for (unsigned char i = 0; i < 5; i++) {
		sum = sum + height[i];
	}							// Avg of first 5
	avg = sum / 5.0;
	printf("Avg of first 5: %.2f\n", avg);

	sum = 0;
	for (unsigned char i = 0; i < 3; i++) {
		sum = sum + height[i];
	}							// Sum of first three and last person
	sum = sum + height[6];
	avg = sum / 4.0;
	printf("Avg: %.2f\n", avg);

	min = height[0];
	for (unsigned char i = 0; i < 6; i++) {
		if (min > height[i]) {	// Find Lowest Weight
			min = height[i];
		}
	}
	printf("Min: %d\n", min);

	height[1] = 166;	// Update Second persons Height
	printf("Updated Height: %d\n", height[1]);

	unsigned char age[] = { 10, 11, 51, 32, 66, 89, 44, 95 };
	printf("Age of the last person: %d\n", age[7]);
	unsigned char ageLength = sizeof(age) / sizeof(char);
	printf("Array Age Length: %d\n", ageLength);
}