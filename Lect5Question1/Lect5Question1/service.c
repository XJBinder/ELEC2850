// Function shippingFee()

float shippingFee(unsigned short miles) {
	float cost;

	if (miles < 2) {
		cost = 1.5;
	}
	else if (miles > 5) {
		cost = 10 + (0.1 * miles);
	}
	else {
		cost = 3;
	}
	return cost;
}