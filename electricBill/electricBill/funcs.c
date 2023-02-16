// Functions
float findAvg(float sum, unsigned char count) {
	float avg;

	avg = sum / count;

	return avg;
}

float findMax(float cost, float max) {
	if (cost > max) {
		max = cost;
	}
	return max;
}

float findMin(float cost, float min) {
	if (cost < min) {
		min = cost;
	}
	return min;
}

float electricBill(float units) {
	float cost;

	if (units > 200) {
		cost = ((units - 200) * 1.2) + 130;
	}
	else if (units > 100) {
		cost = ((units - 100) * 0.75) + 55;
	}
	else if (units > 50) {
		cost = ((units - 50) * 0.6) + 25;
	}
	else if (units > 0) {
		cost = units * 0.5;
	}
	return cost;
}