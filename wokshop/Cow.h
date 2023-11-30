#pragma once
#include "Animal.h"
class Cow : public Animals
{
public:
	void speak() override;
	Cow() {};
	~Cow() {};
};

