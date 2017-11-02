#include "PublicTransport.h"



PublicTransport::PublicTransport()
{

}


PublicTransport::~PublicTransport()
{

}

float PublicTransport::ticketPrice() {
	float moneyEarned = amountOfSeats() * ticketPrice();
	return moneyEarned;
}

