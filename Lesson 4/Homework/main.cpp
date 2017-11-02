#include <iostream>
#include "Boeken.h"

void geefBoekenDoor(Boeken* boeken) {
	std::cout << "Boeken gekregen" << std::endl;
	boeken->toon();

	boeken->voegToe(" leuk boek");
	boeken->toon();
}

int main() {
	Boeken* boeken = new Boeken();
	boeken->voegToe(" saai boek");
	boeken->toon();

	Boeken boeken1 = Boeken();
	boeken1.voegToe(" vergeten boek");
	boeken1.toon();

	Boeken boeken2 = boeken1;
	boeken2.toon();

	boeken1.voegToe(" ongelezen boek");
	boeken1.toon();



	geefBoekenDoor(boeken);
	boeken->toon();
	delete boeken;
	std::cin.get();
	return 0;
}
