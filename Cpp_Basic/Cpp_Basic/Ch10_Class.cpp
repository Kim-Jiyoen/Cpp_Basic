#include "Ch10_Class.h"
#include <iostream>
using namespace std;

void Car::DriveVelocity() // Car Ÿ�Կ� �����ִ� �޼ҵ�
{
	cout << Velocity << "km" << endl;
}
void Car::DriveTime()
{
	int LengthUnit = 100;
	cout << (100/Velocity) << "hour" << endl;
}

