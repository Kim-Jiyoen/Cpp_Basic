#include "Ch10_Class.h"
#include <iostream>
using namespace std;

void Car::DriveVelocity() // Car 타입에 속해있는 메소드
{
	cout << Velocity << "km" << endl;
}
void Car::DriveTime()
{
	int LengthUnit = 100;
	cout << (100/Velocity) << "hour" << endl;
}

