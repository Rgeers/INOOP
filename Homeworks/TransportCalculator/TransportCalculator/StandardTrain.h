#pragma once
#include "PublicTransport.h"

class StandardTrain : PublicTransport
{
public:
	StandardTrain();
	~StandardTrain();

	float ticketPrice() override;
	int amountOfSeats() override;
};

