// Jon Binder - Lab2 Jan26 - Professor Pilin
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	unsigned char kid;
	unsigned char teen;
	unsigned short adult;

	printf("\n         -----------------------------\n         --Average Weight Calculator--\n         -----------------------------\n\n");
	printf("   Please Enter Weight for adult (100-500 lbs): ");
	scanf("%hd", &adult);
	printf("   Please Enter Weight for teen (50-140 lbs): ");
	scanf("%hhd", &teen);
	printf("   Please Enter Weight for kid (0-100 lbs): ");
	scanf("%hhd", &kid);

	unsigned short sum = adult + teen + kid;
	float avg = sum / 3.0;
	printf("\n   Average Weight of Entered Humans = %.2f lbs\n", avg);

	return 0;
}