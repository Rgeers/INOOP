#pragma once
class PublicTransport
{
public:
	PublicTransport();
	~PublicTransport();

	virtual float ticketPrice() = 0;
	virtual int amountOfSeats() = 0;
};

