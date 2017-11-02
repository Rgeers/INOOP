#include <iostream>
#include "StandardTrain.h"
#include "HighSpeedTrain.h"

int main() {
	StandardTrain* train = new StandardTrain;
	std::cout << "Train's ticket price = " << train->ticketPrice() << std::endl;
	std::cout << "Train's amount of seats = " << train->amountOfSeats() << std::endl;
	std::cout << "Amount of money earned on full train = " << train->ticketPrice() * train->amountOfSeats() << std::endl;

	HighSpeedTrain* expensiveTrain = new HighSpeedTrain;
	std::cout << "Faster train's ticket price = " << expensiveTrain->ticketPrice() << std::endl;
	std::cout << "Faster train's amount of seats = " << expensiveTrain->amountOfSeats() << std::endl;
	std::cout << "Amount of money earned on full train = " << (expensiveTrain->ticketPrice() * train->amountOfSeats()) << std::endl;

	delete train, expensiveTrain;
	std::cin.get();



}
