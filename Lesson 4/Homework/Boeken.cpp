#include "Boek.h"
#include <iostream>
#include "Boeken.h"

Boeken::Boeken() {

}

Boeken::~Boeken() {
	delete boek;
}

Boeken::Boeken(const Boeken& andereBoeken) {
	boek = new Boek();
	boek->_type = andereBoeken.boek->_type;
}

Boeken& Boeken::operator=(const Boeken& andereBoeken) {
	if (this != &andereBoeken) {
		delete boek;
		boek = new Boek();
		boek->_type = andereBoeken.boek->_type;
	}
	return *this;
}

void Boeken::toon() {
	std::cout << "Boeken" << boek->_type << std::endl;
}

void Boeken::leenUit(Boek* boek) {
	boek->isUitgeleend = true;
}


void Boeken::voegToe(std::string type) {
	delete boek;
	boek = new Boek(type);
}
