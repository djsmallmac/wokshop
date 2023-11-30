#pragma once
#ifndef Animal_H
#define Animal_H

class Animals
{
public:
	virtual void speak() = 0;
	Animals() {};
	virtual ~Animals() {};
};
//class Sheeps : public Animals // all classes inherit from animal class
//{
//public:
	//void speak() override;
	//virtual ~Sheep() {}
//};
//class Cows : public Animals
//{
//public:
	//void speak() override;
	//virtual ~Cow() {}
//};
//class Frisians : public Cows //Frisian is a type of cow so it inherits
//{
	//void speak() override;
	//~Frisian() {}
//};

#endif
