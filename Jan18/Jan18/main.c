//Jon Binder Professor Pilin January 18th 2023
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//char   1 byte
//short  2 byte
//int    2/4 byte
//long   4/8 byte

int main() {
	printf("Jon Binder\n");
	//create a variable
	char num = 10;
	printf("Value of num is %d\n", num);

	//check size of datatype
	printf("Size of char is %d bytes\n", sizeof(char));
	printf("Size of int is %d bytes\n", sizeof(int));
	printf("Size of variable num is %d bytes\n", sizeof(num));

	//operator +,-,*,/,% (modulus)
	char num1 = 3;
	char num2 = 4;
	char ans = num1 + num2;
	printf("num1 + num2 = %d\n", ans);

	//to find address of a variable location in memory
	printf("address of variable num1 (value is %d) is %p\n", num1, &num1);

	//ignoring decimal places
	char num3 = 1.99;
	printf("Value of num3 is %d\n", num3);

	//showing decimal places
	float num4 = 1.99;
	printf("Value of num4 is %d\n", num4);

	//get user input
	char user_num;
	printf("Please Enter a Number: ");
	scanf("%hhd", &user_num);
	printf("Value of user_num is %d\n", user_num);

	return 0; //successfully end program
}