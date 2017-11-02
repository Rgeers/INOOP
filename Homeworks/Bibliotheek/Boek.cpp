#include "Boek.h"
#include <iostream>

Boek::Boek(std::string type) {
	_type = type;
}

Boek::Boek() {
	
};

Boek::~Boek() {
	std::cout << "Boek verwijderd" << std::endl;
};
