#include "9.h"

int main()
{
	const int size = 7;
	double sum = 0;
	Property* arr[size];

	for (int i = 0; i < size; i++)
	{
		if (i < 3)
		{
			arr[i] = new Apartmemt(rand() % 5000 + 1);
		}
		if (i == 3 or i == 4)
		{
			arr[i] = new Car(rand() % 5000 + 1);
		}
		else
		{
			arr[i] = new CountryHouse(rand() % 5000 + 1);
		}
	}

	for (int i = 0; i < size; i++)
	{
		sum = sum + arr[i]->Tax();
		cout << arr[i]->getWorth() << endl;
		delete arr[i];
	}
	cout << "sum: " << sum;
}