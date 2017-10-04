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
	mandje->toon();

	mandje->voegToe(" frikandelbroodje");
	mandje->toon();

	geefMandjeDoor(mandje);
	mandje->toon();

	std::cin.get();
	return 0;
}
