#pragma once
#include <iostream>
using namespace std;

class Vehicle
{
private:
	int Year; // ���⿡ �ʱ�ȭ�ϸ� ���� �����Ǿ����

public:
	int Price;

public: 
	// Constructer ����� ����
	Vehicle(); // Default Constructor
	Vehicle(int _Year, int _Price);

	// Destructor ����
	~Vehicle();

	// Method
	void PrintYear();
	void PrintPrice();
	int GetYear();
	void SetYear(int newYear);
};
