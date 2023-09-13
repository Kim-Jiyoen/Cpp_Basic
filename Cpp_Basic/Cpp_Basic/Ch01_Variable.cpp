#include "io.h"

void Variable() // 변수, 상수
{
  int Value1 = 100;
  Value1 = 200;
  
  const int Value2 = 50;
  //Value2 = 100;
  // 실행 되는 애들 중에서 오류 있는지 체크
  // 함수는 지금 실행 안되는상태여서
}

void VariableTypeNumber() // 변수 타입- 정수, 실수
{
  // 정수형 데이터 종류
  short Num1 = 10; // 2^16(음수양수)
  int Num2 = 20;   // 2^32
  // 적당한범위여서 많이씀, integer 의 약자
  long Num3 = 30; // 2^64
  
  cout << Num1 << Num2 << Num3 << endl;
  
  // 실수형 데이터 종류
  float Num4 = 1.23; // 소수점 0이면 무시
  float Num41 = 1.345f;
  double Num5 = 1.34567;
  
  cout << Num4 << Num5 << endl;
}

void VariableTypeCharacter() // 변수 타입 - 문자
{
  // 문자형 데이터
  // 문자 한개: '', 문자여러개: ""
  // char 타입은 문자 1개만 저장 가능
  char Text1; // char: character
  char Text2;
  
  Text1 = 'A';
  Text2 = 'B';
  // 여러개는 뒤에 배열에서..
  
  cout << Text1 << endl << Text2 << endl;
}

void VariableTypeBool() // 변수 타입 - bool
{
  bool condition;
  
  condition = true;
  cout << condition << endl;
  condition = false;
  cout << condition << endl;
  
  condition = 1; // true
  condition = 0; // false
  
  // 0 => false, 그 외 정수 => true
  condition = 10;
  cout << condition << endl;
  
  condition = -5;
  cout << condition << endl;
}

void InputOutput() // 입출력
{
  int number;
  // 외부 입력
  cin >> number;
  cout << number << endl;
}
