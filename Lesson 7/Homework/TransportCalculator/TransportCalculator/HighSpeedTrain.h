#pragma once
#include "StandardTrain.h"

class HighSpeedTrain : StandardTrain
{
public:
	HighSpeedTrain();
	~HighSpeedTrain();

	float ticketPrice() override;
	float surtax();

};

