#include "io.h"
#include <array>

using namespace std;

void ArrayClass()
{
	array<int, 3> Number = { 10,20,30 };

	cout << Number.size() << endl; // ���� �Լ�
	cout << Number.front() << endl;
	cout << Number.back() << endl;
	cout << Number.empty() << endl;
	cout << Number.at(1) << endl;
}

// Ŭ�������� �������(������Ƽ)�� ����Լ�(�޼ҵ�) ���
// -> ���� ��ɵ��� ����� �� ����.00