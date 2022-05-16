#pragma once
#include <iostream>
using namespace std;

class Property
{
protected:
	int worth;
public:
	Property(int worth)
	{
		this->worth = worth;
	}
	Property()
	{
		worth = 0;
	}

	virtual double Tax() = 0;
	int getWorth() { return worth; };
};

class Apartmemt :public Property
{
public:
	Apartmemt(int worth): Property(worth)
	{

	}
	Apartmemt() : Property()
	{

	}
	double Tax() override; 
};

class Car :public Property
{
public:
	Car(int worth): Property(worth)
	{

	}
	Car() : Property()
	{

	}
	double Tax() override;
};

class CountryHouse :public Property
{
public:
	CountryHouse(int worth): Property(worth)
	{

	}
	CountryHouse() : Property()
	{

	}
	double Tax() override;
};