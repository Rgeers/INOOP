#pragma once
#include "Boek.h"

class Boeken
{
public:
	Boeken();
	~Boeken();
	Boeken(const Boeken& andereBoeken);
	Boeken& operator=(const Boeken&);
	void toon();
	void voegToe(std::string type);
	void leenUit(Boek* boek);

private:
	Boek* boek = new Boek();
};

