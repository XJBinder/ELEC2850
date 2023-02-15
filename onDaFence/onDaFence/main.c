#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	unsigned char length;
	unsigned char width;

	printf("----------------\nFence Calculator\n----------------\nPlease Enter Length and Width in meters.\nLength: ");
	scanf("%hhd", &length);
	printf("Width: ");
	scanf("%hhd", &width);

	unsigned short total = length + width;
	float cost = total * 60.75;

	printf("The total Cost for fenceing is $%.2f.\n", cost);

	return 0;
}