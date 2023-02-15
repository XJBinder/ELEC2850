// Jon Binder - Travelers Bag - ELEC2850
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	unsigned int bagOne;
	unsigned int bagTwo;
	printf(" Airport Baggage Check (lbs)");
	printf("\n Please Enter the Weight of Bag #1: ");
	scanf("%d", &bagOne);
	printf(" Please Enter the Weight of Bag #2: ");
	scanf("%d", &bagTwo);
	printf("\n Entered Weights\n Bag #1: %d lbs\n Bag #2: %d lbs\n", bagOne, bagTwo);
	unsigned int totalWeight = bagOne + bagTwo;
	printf(" Total Weight of Travelers Bags: %d lbs\n", totalWeight);

	return 0;
}