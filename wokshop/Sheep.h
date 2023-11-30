#pragma once
#include "Animal.h"

class Sheep : public Animals // all classes inherit from animal class
{
public:
	void speak() override;
	Sheep() {};
	~Sheep() {};
};

