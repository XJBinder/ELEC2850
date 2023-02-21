// Functions
void printRecord(unsigned char quizScores[]) {
	for (unsigned char i = 0; i < 10; i++) {
		printf("   Student #%d Quiz Score: %d\n", i + 1, quizScores[i]);
	}
}
void total(unsigned char quizScores[]) {
	unsigned char sum = 0;
	for (unsigned char i = 0; i < 10; i++) {
		sum += quizScores[i];
	}
	printf("   Totaled Quiz Scores: %d\n", sum);
}
void avg(unsigned char quizScores[]) {
	float sum = 0;
	for (unsigned char i = 0; i < 10; i++) {
		sum += quizScores[i];
	}
	printf("   Average Quiz Score: %.2f\n", sum / 10);
}
unsigned char gradeChange(unsigned char studentSelect, unsigned char quizScores[]) {
	scanf("%hhd", &quizScores[studentSelect - 1]);
	printf("\n   Entered Grade: %d\n", quizScores[studentSelect - 1]);
	return quizScores[studentSelect - 1];
}