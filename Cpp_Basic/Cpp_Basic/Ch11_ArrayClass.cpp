#include "io.h"
#include <array>

using namespace std;

void ArrayClass()
{
	array<int, 3> Number = { 10,20,30 };

	cout << Number.size() << endl; // 전용 함수
	cout << Number.front() << endl;
	cout << Number.back() << endl;
	cout << Number.empty() << endl;
	cout << Number.at(1) << endl;
}

// 클래스에는 멤버변수(프로퍼티)와 멤버함수(메소드) 담김
// -> 여러 기능들을 사용할 수 있음.00