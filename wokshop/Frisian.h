#pragma once
#include "Animal.h"
#include "Cow.h"
 class Frisian : public Cow //Frisian is a type of cow so it inherits
{
public:
	void speak() override;
	Frisian() {};
	~Frisian() {};
};

