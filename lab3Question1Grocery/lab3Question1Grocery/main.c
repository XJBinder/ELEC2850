// Lab 3 Question 1 - Jon Binder - Grocery Calculator
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// Function Declaration
float est_tax(unsigned short base_price);
float total_price(unsigned short base_price);
void thank_you();

// Main Loop
void main() {
	float userInput;
	printf("\n   Enter price: $");
	scanf("%f", &userInput);

	float total = total_price(userInput);
	float tax = est_tax(userInput);

	printf("   Total: $%.2f Tax: $%.2f\n\n", total, tax);
	thank_you();
}

// Functions
float est_tax(unsigned short base_price) {
	float tax = base_price * .07;
	return tax;
}

float total_price(float base_price) {
	float tax = est_tax(base_price);  
	float total = base_price + tax;
	return total;
}

void thank_you() {
	printf("   Thank you, We would like to hear your feedback. Please call the following number 123-456-7890\n");
}
