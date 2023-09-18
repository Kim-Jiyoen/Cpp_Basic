#include "Animal.h"
#include <iostream>

using namespace std;

Animal::Animal()
{
	Finger = 10;
	Leg = 2;
}

void Animal::PrintFinger()
{
	cout << Finger << endl;
}

void Animal::PrintLeg()
{
	cout << Leg << endl;
}