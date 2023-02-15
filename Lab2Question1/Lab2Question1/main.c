// Lab2 Question 1 - Jon Binder
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int number;
	int sum = 0;

	printf("Finding sum of next 10 numbers (unless divisable by 5)..\nPlease Enter Starting number: ");
	scanf("%d", &number);
	printf("Sum of ");
	
	for (int i = number + 1; i <= number + 10; i++) {
		if ((i % 5) != 0) {
			sum = i + sum;
			printf("%d ", i);
		}
	}

	printf("= %d\n", sum);

	return 0;
}