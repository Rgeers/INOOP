#include <iostream>
#include "Broodmandje.h"

void geefMandjeDoor(Broodmandje* mandje) {
	std::cout << "Mandje gekregen" << std::endl;
	mandje->toon();

	mandje->voegToe(" saucijzenbroodje");
	mandje->toon();
}

int main() {
	Broodmandje* mandje = new Broodmandje();
	mandje->voegToe(" frikandelbroodje");
	mandje->toon();

	Broodmandje mandje1 = Broodmandje();
	mandje1.voegToe(" bammetje met kaas");
	mandje1.toon();

	Broodmandje mandje2 = mandje1;
	mandje->toon();

	mandje1.voegToe(" croissant");
	mandje1.toon();



	geefMandjeDoor(mandje);
	mandje->toon();
	delete mandje;
	std::cin.get();
	return 0;
}
