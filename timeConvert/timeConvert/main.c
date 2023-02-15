#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	unsigned short minutes;
	printf("Please Enter Minutes: ");
	scanf("%hd", &minutes);

	unsigned char hours = minutes / 60;
	unsigned short days = hours / 24;
	unsigned char minRemainder = minutes % 60;
	float decHours = (float)minutes / 60;

	printf("\n%d day(s), %d hour(s), %hhd minute(s)\n", days, hours, minRemainder);
	printf("   or\n%.2f hours\n", decHours);

	return 0;
}