// Theme Park Ticket Calculator
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	unsigned char toddler;
	unsigned char kid;
	unsigned char student;										// This code is Broken
	unsigned char adult;
	unsigned char senior;
	unsigned char x;

	printf("   How many toddlers in you group? (0-3 years old): ");
	scanf("%hhd", &toddler);
	printf("   How many kids in you group? (4-10 years old): ");
	scanf("%hhd", &kid);
	printf("   How many students in you group? (11-25 years old): ");
	scanf("%hhd", &student);
	printf("   How many adults in you group? (26-65 years old): ");
	scanf("%hhd", &adult);
	printf("   How many seniors in you group? (66+): ");
	scanf("%hhd", &senior);

	printf("\n   You Entered:\n   %d seniors\n   %d adults\n   %d students\n   %d kids\n   %d toddlers\n\n   Is this correct? (y or n): ", senior, adult, student, kid, toddler);
	scanf("%s", &x);										// scanf is a bitch
	
	if (x == 204) {
		printf("   Im a lazy coder, your lucky I even asked if YOU entered your data right..\n   Restart the program to try again and dont f*ck up this time idiot.\n\n");
		return 0;
	}
	else {
		x = (kid * 20) + (student * 25) + (adult * 30) + (senior * 20);
		printf("   Total cost to ride is $%d\n", x);
	}
}
