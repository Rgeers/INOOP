#include "Broodje.h"
#include <iostream>

Broodje::Broodje(std::string type) {
	_type = type;
}

Broodje::Broodje() {
	
};

Broodje::~Broodje() {
	std::cout << "Broodje verwijderd" << std::endl;
};
