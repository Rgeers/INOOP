#include "Boek.h"
#include <iostream>
#include "Boeken.h"

Boeken::Boeken() {

}

Boeken::~Boeken() {
	boekenPlank.clear();
}

Boeken::Boeken(std::string gekregenNaam) {
	naam = gekregenNaam;
}

Boeken::Boeken(const Boeken& andereBoeken) {
	boekenPlank = andereBoeken.boekenPlank;
}

Boeken& Boeken::operator=(const Boeken& andereBoeken) {
	if (this != &andereBoeken) {
		int boekenPlankLength = (andereBoeken.boekenPlank.capacity() + 1);
		Boek* boek = new Boek(*(andereBoeken.boekenPlank[0]));

	}
	return *this;
}

void Boeken::toon() {
	std::cout << "Boeken op de boekenplank:" << std::endl;
	for (int i = 0; i < boekenPlank.capacity(); i++) {
		std::cout << boekenPlank[i]->_type << std::endl;
	}
}

void Boeken::leenUit(Boek* boek) {
	boek->isUitgeleend = true;
}


void Boeken::voegToe(std::string type) {
	boekenPlank.push_back(new Boek(type));
}
