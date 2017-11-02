#pragma once
#include <xstring>
#include "Animal.h"

class Cat : public Animal
{
public:
	Cat(const std::string& name);
	void makeNoise() override;
};

