#include "io.h"

#include <string>

using namespace std;

void StringClass()
{
	string Text1 = "Hello SeSac";
	string Text2 = "Hello World"; 
	
	cout << (Text1 < Text2) << endl; // ���ĺ� ���� ��
	// w�� s���� �ڿ��ֱ� ������ Text2�� �� ũ�� ���� 
	cout << (Text1 > Text2) << endl;
	cout << (Text1 == Text2) << endl;
	cout << (Text1 + Text2) << endl; // ���� ����

	cout << Text1.front() << endl;
	cout << Text1.back() << endl;
	cout << Text1.size() << endl;
	cout << Text1.at(3) << endl;

	cout << Text1.append(Text2) << endl; // ���� ����
	cout << Text2.substr(5) << endl; //5��°���� ������
	cout << Text2.find("Hello") << endl;
}