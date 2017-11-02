#pragma once
#include <xstring>

class Animal
{
public:
	Animal(const std::string name);
	virtual void makeNoise() = 0;
};

