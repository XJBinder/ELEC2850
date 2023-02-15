#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	unsigned short userPassword;

	printf("Enter a Password: ");
	scanf("%hd", &userPassword);

	if (userPassword == 1234) {
		printf("Password Correct.\n");
	}
	else if (userPassword == 5678) {
		printf("Admin Mode AKA SICKO MODE\n");
	}
	else {
		printf("idiot\n");
	}
	printf("-------------------");
	return 0;
 }