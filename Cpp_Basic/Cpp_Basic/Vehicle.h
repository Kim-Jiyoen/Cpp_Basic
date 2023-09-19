#pragma once
#include <iostream>
using namespace std;

class Vehicle
{
private:
	int Year; // 여기에 초기화하면 값이 고정되어버림

public:
	int Price;

public: 
	// Constructer 명시적 선언
	Vehicle(); // Default Constructor
	Vehicle(int _Year, int _Price);

	// Destructor 선언
	~Vehicle();

	// Method
	void PrintYear();
	void PrintPrice();
	int GetYear();
	void SetYear(int newYear);
};
