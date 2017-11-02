#include "Broodmandje.h"
#include <iostream>

Broodmandje::Broodmandje() {

}

Broodmandje::~Broodmandje() {
	delete broodje;
}

Broodmandje::Broodmandje(const Broodmandje& anderMandje) {
	broodje = new Broodje();
	broodje->_type = anderMandje.broodje->_type;
}

Broodmandje& Broodmandje::operator=(const Broodmandje& anderMandje) {
	if (this != &anderMandje) {
		delete broodje;
		broodje = new Broodje();
		broodje->_type = anderMandje.broodje->_type;
	}
	return;
}

void Broodmandje::toon() {
	std::cout << "Broodmandje" << broodje->_type << std::endl;
}

void Broodmandje::voegToe(std::string type) {
	delete broodje;
	broodje = new Broodje(type);
}
