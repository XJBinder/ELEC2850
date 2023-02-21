// From Lab4 Question 2 (review pointers and arrays)
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {
	srand(time(0));  // Uses "current unix timestamp"
	unsigned char array[10];

	for (unsigned char i = 0; i < 10; i++) {
		quizScores[i] = (rand() % 11);  // Creates array with 10 random numbers
	}
	for (unsigned char i = 0; i < 10; i++) {
		printf("\n   %d", array[i]);  // Checks to see if it works
	}
}
