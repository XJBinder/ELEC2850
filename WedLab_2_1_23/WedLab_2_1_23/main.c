// Lab_Condition_Loop - Jon Binder
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	short num;

	printf("\n   Please enter a number between -32768 and 32767 (-1 exits program): ");
	scanf("%hd", &num); // There was a few different things I could have done here instead of copy and pasting these lines twice.. Otherwise num wouldn't get initialized.

	if (num == -1) {
		printf("\n   Leaving so soon??\n   Exiting\n");
		return 0;
	}

	float avg;
	int sum = 0;
	unsigned char count = 0; // Please don't enter more than 255 numbers that aren't -1 :)
	short maxNum = num;
	short minNum = num;

	while (num != -1) {
		if (maxNum < num) {
			maxNum = num;
		}
		else if (minNum > num) {
			minNum = num;
		}
		sum = sum + num;
		count = count++;
		avg = sum / (float)count;
		printf("   Please enter a number between -32768 and 32767 (-1 exits program): ");
		scanf("%hd", &num);
	}

	printf("\n   Maximum Number Entered: %d\n   Minimum Number Entered: %d\n   Sum of Numbers Entered: %d\n   Average: %.2f\n   Exiting\n", maxNum, minNum, sum, avg);

	return 0;
}


