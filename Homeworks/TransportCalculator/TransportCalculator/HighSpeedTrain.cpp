#include "HighSpeedTrain.h"
#include "StandardTrain.h"



HighSpeedTrain::HighSpeedTrain()
{
}


HighSpeedTrain::~HighSpeedTrain()
{
}

float HighSpeedTrain::ticketPrice() {
	const float price = 3.50f;
	const float moneyEarned = (price * surtax);
	return moneyEarned;
}

int HighSpeedTrain::amountOfSeats() {
	int seats = 100;
	return seats;
}

