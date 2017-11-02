#pragma once
#include "Broodje.h"

class Broodmandje
{
public:
	Broodmandje();
	~Broodmandje();
	Broodmandje(const Broodmandje& anderMandje);
	Broodmandje& operator=(const Broodmandje&);
	void toon();
	void voegToe(std::string type);

private:
	Broodje* broodje = new Broodje();
};

