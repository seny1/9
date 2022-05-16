#include "9.h"

double Apartmemt::Tax()
{
	return (getWorth() / 1000);
}

double Car::Tax()
{
	return (getWorth() / 200);
}

double CountryHouse::Tax()
{
	return (getWorth() / 500);
}
