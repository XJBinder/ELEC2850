#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	float data;
	unsigned short texts;
	float voice;

	printf("\n      -------------------------\n      --Phone Bill Calculator--\n      -------------------------\n\n   Please Enter Data Usage in gb: ");
	scanf("%f", &data);
	printf("   Please Enter Number of Text Messages Sent: ");
	scanf("%hd", &texts);
	printf("   Please Enter Voice Minutes Usage: ");
	scanf("%f", &voice);
	
	float costNoTax = 30 + (0.15 * texts) + (0.25 * voice) + (2 * data);
	float tax = costNoTax * 0.07;
	float totalCost = costNoTax + tax;

	printf("   Cost: $%.2f\n   Total Cost with Tax: $%.2f\n   Total Cost: $%.2f\n", costNoTax, tax, totalCost);

	return 0;
}