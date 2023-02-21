//Functions
#include <limits.h>

unsigned char findMin(unsigned char *array) {
	static unsigned char min = CHAR_MAX;

	if (array < min) {
		min = array;
	}
	return min;
}
unsigned char findMax(unsigned char *array) {
	static unsigned char max = 0;

	if (array > max) {
		max = array;
	}
	return max;
}