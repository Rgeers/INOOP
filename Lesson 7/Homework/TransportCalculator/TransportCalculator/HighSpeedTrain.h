#pragma once
#include "StandardTrain.h"

class HighSpeedTrain : StandardTrain
{
public:
	HighSpeedTrain();
	~HighSpeedTrain();

	float ticketPrice() override;
	int amountOfSeats() override;
	float surtax = 1.10f;

};

