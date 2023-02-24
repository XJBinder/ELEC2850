// Lecture 6 Question 1 - Pilin - ELEC2850 - Jon Binder
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>

void main() {
	unsigned char array[10] = { 55, 64, 89, 71, 90, 92, 47, 62, 85, 81 };
	unsigned char min = INT_MAX;
	unsigned char max = 0;
	unsigned short sum = 0;
	float avg;

	for (unsigned char i = 0; i < 10; i++) {
		if (array[i] < min) {
			min = array[i];
		}
		else if (array[i] > max) {
			max = array[i];
		}
		sum = sum + array[i];
	}
	avg = sum / 10.0;

	printf("min: %d max: %d avg: %.2f\n", min, max, avg);
}