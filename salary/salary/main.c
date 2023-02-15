#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	unsigned int salary;
	unsigned char yearService;
	float bonus;

	printf("Enter Salary: ");
	scanf("%d", &salary);
	printf("\nEnter year of service: ");
	scanf("%hhd", &yearService);

	if (yearService >= 5) {
		bonus = salary * 0.05;
		printf("\nBonus this year: $%.2f", bonus);
	}
	else if (yearService >= 2) {
		bonus = salary * 0.03;
		printf("\nBonus this year: $%.2f", bonus);
	}
	else {
		bonus = 0;
		printf("\nBonus this year: $%.2f", bonus);
	}
}