// Main Loop - Live Code Lab 4 - Jon Binder
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "func.h"

int main(void) {
	float transactions[10] = { 10.99, 12, 5.99, 14.59, 21.45, 30, 7.15, 51.15, 30.12, 1.99 };
	unsigned char cont, greaterTen, indexSele;

	printArray(transactions);
	count(transactions);
	printf("\n   Would you like to modify a transaction? (1 for yes/0 for no) ");
	scanf("%hhd", &cont);
	if (cont != 0 && cont != 1) {
		printf("   Not a valid selection\n");
		return 0;
	}
	if (cont == 1) {
		printArray(transactions);
		printf("\n   Which element would you like to change? (Enter: 1-10) \n");
		scanf("%hhd", &indexSele);
		if (indexSele > 10 || indexSele < 1) {
			printf("   Not a valid selection\n");
			return 0;
		}
		modify(transactions, indexSele - 1);
		printArray(transactions);
	}
	else {
		printf("   Thank you,\n   Goodbye.\n");
		return 0;
	}
}