#pragma once
#include "Boek.h"
#include <vector>

class Boeken
{
public:
	Boeken();
	Boeken(std::string naam);
	~Boeken();
	Boeken(const Boeken& andereBoeken);
	Boeken& operator=(const Boeken&);
	void toon();
	void voegToe(std::string type);
	void leenUit(Boek* boek);
	std::string naam;

private:
	std::vector<Boek*> boekenPlank;
};

