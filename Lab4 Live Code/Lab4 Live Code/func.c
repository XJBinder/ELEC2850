// Functions - Live Code Lab 4

void modify(float transactions[], unsigned char indexSele) {
	float newVal;

	printf("\n   Changing selected value: $%.2f\n   What is the new value? \n", transactions[indexSele]);
	scanf("%f", &newVal);
	transactions[indexSele] = newVal;
}

void printArray(float transactions[]) {
	printf("\n   Last 10 User Transactions\n");
	for (unsigned char i = 0; i < 10; i++) {
		printf("   $%.2f", transactions[i]);
	}
	printf("\n");
}

void count(float transactions[]) {
	unsigned char greaterTen = 0;

	for (unsigned char i = 0; i < 10; i++) {
		if (transactions[i] > 10) {
			greaterTen++;
		}
	}
	printf("\n   Transactions Greater than 10\n   %d\n", greaterTen);
}