// Lab 4 - Question 2 - Jon Binder
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "myfunc.h"

int main(void) {
	unsigned char select = 0, studentSelect, quizScores[10];
	srand(time(0));

	for (unsigned char i = 0; i < 10; i++) {
		quizScores[i] = (rand() % 11);
	}

	while (1 == 1) {
		switch (select) {
		case 0:
			printf("\n       --------\n       --Menu--\n       --------\n   1. Print Record\n   2. Total Score\n   3. Average Score\n   4. Update Score\n   5. Exit\n   Please Enter Selection: ");
			scanf("%hhd", &select);
			if (select != 0 && select != 1 && select != 2 && select != 3 && select != 4 && select != 5) {
				printf("\n   \"%d\" is not a valid menu item.\n\n   Exiting..\n", select);
				return 0;
			}
			break;
		case 1:
			printf("\n      ------------------\n      --Listing Scores--\n      ------------------\n");
			printRecord(quizScores);
			select = 0;
			break;
		case 2:
			printf("\n   ---------------\n   --Class Total--\n   ---------------\n");
			total(quizScores);
			select = 0;
			break;
		case 3:
			printf("\n   -----------------\n   --Class Average--\n   -----------------\n");
			avg(quizScores);
			select = 0;
			break;
		case 4:
			printf("\n   !-!-!-!-!-!-!-!-!-!-!!\n   !!Entering New Score!!\n   !-!-!-!-!-!-!-!-!-!-!!\n\n   Changing Student #");
			scanf("%hhd", &studentSelect);
			printf("\n   !!!Student #%d Selected!!!\n   Current Grade: %d\n   New Grade: ", studentSelect, quizScores[studentSelect - 1]);
			quizScores[studentSelect - 1] = gradeChange(studentSelect, quizScores);
			select = 0;
			break;
		case 5:
			printf("\n   Exiting..\n");
			return 0;
		}
	}
}