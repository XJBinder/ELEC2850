#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

float commission(float price);
float discount(float price);
void printDeal(float dealerMade);

int main(void) {
	float price;
	float dealerMade = 0;
	unsigned char count = 0;

	printf("Please Enter Car Price: ");
	scanf("%f", &price);

	while (price != 0) {
		if (count % 3 == 0) {
			price = discount(price);
		}
		dealerMade = dealerMade + commission(price);
		printf("Please Enter Car Price: ");
		scanf("%f", &price);
		count = count++;
	}
	printDeal(dealerMade);
	return 0;
}

float commission(float price) {
	float dealerMade = price * 0.04;
	return dealerMade;
}

float discount(float price) {
	float disPrice = price - (price * .05);
	return disPrice;
}
void printDeal(float dealerMade) {
	printf("Dealer Made: %.2f", dealerMade);
}