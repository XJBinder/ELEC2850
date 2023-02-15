// Jon Binder - Bank of Boston
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	unsigned short pin;
	unsigned char choice;
	float balance = 0;
	float interest;
	float deposit;
	float withdraw;

	printf("       ------------------\n       --Bank of Boston--\n       ------------------\n\n");
	printf("   Please Enter your PIN: ");
	scanf("%hd", &pin);

	for (unsigned char i = 0; i <= 2; i++) {
		while (pin == 1234) {
			printf("\n   -----------------------------\n   --Welcome to Bank of Boston--\n   -----------------------------\n");
			printf("       1: Deposit\n       2: Withdraw\n       3: Check Balance\n       4: Est Interest\n       5: Exit\n\n");
			scanf("%hhd", &choice);
			
			switch (choice) {
			case 1:
				printf("       Please Enter your depositied amount: ");
				scanf("%f", &deposit);
				balance = balance + deposit;
				printf("       Your total Balance is: $%.2f\n", balance);
				break;
			case 2:
				printf("       Enter Withdraw Amount: ");
				scanf("%f", &withdraw);
				if (balance < withdraw) {
					printf("       Insufficient Funds.\n");
					break;
				}
				balance = balance - withdraw;
				printf("       Your new balance is: $%.2f\n", balance);
				break;
			case 3:
				printf("       Your current balance is: $%.2f\n", balance);
				break;
			case 4:
				interest = balance * 0.03;
				printf("       Your Estimated Interest is: %.2f", interest);
				break;
			case 5:
				printf("       Thank you\n       Goodbye.\n");
				return 0;
			}
		}
		switch (i) {
		case 0:
			printf("   Incorrect.\n   2/3 trys remaining.\n");
			printf("   Please Try Again: ");
			scanf("%hd", &pin);
			break;
		case 1:
			printf("   Incorrect.\n   1/3 trys remaining.\n");
			printf("   Please Try Again: ");
			scanf("%hd", &pin);
			break;
		case 2:
			printf("   Incorrect.\n   0/3 trys remaining.\n   Goodbye.\n");
			break;
		}
	}
	return 0;
}