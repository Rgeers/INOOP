#include "PublicTransport.h"



PublicTransport::PublicTransport()
{

}


PublicTransport::~PublicTransport()
{

}

float PublicTransport::ticketPrice() {
	const float moneyEarned = amountOfSeats() * ticketPrice();
	return moneyEarned;
}

