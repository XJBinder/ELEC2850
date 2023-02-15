//Question 2 - Jon Binder - Lect2ELEC2850
#define _CRT_SECURE_NO_WARNINGS //fix scanf warning
#include <stdio.h>

int main() {
    // #1
    printf("\n1.\nThe Storage Size of char is %ld byte,\n", sizeof(char));
    printf("The Storage Size of short is %ld bytes,\n", sizeof(short));
    printf("The Storage Size of int is %ld bytes,\n", sizeof(int));
    printf("The Storage Size of long is %ld bytes,\n", sizeof(long));
    printf("The Storage Size of long long is %ld bytes.\n\n2.\n", sizeof(long long));

    // #2
    unsigned char humanWeight; //Pretty please don't be over 255 pounds :)
    printf("Please Enter Humans Weight: ");
    scanf("%hhd", &humanWeight);
    printf("Human's Weight: %d\nVariable \"humanWeight\" has a storage size of %ld byte.\n\n", humanWeight, sizeof(humanWeight));

    return 0;
}