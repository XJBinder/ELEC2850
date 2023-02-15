// Jon Binder - Live Code - Professor Pilin
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	unsigned char numOfPeo;
	unsigned short weight;
	unsigned short totalWeight = 0;

	printf("\n         -----------------------------------\n         --Average Human Weight Calculator--\n         -----------------------------------\n\n Please Enter the Number of People to take Average of: ");
	scanf("%hhd", &numOfPeo);

	for (unsigned char i = 1; i <= numOfPeo; i++) {
		printf(" Please Enter Person #%d's Weight: ", i);
		scanf("%hd", &weight);
		totalWeight = totalWeight + weight;
	}

	unsigned char avgWeight = totalWeight / numOfPeo;
	printf("\n The Average Weight of Entered Humans is: %d\n", avgWeight);

	return 0;
}