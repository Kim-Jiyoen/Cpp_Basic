﻿#include "io.h"

void OperationArithmetic(int arith1, int arith2) // 산술 연산
{
  //int arith1 = 10;
  //int arith2 = 20;
  
  int Sum = arith1 + arith2;
  int Sub = arith1 - arith2;
  int Mul = arith1 * arith2;
  int Div = arith1 / arith2;
  int Rest = arith1 % arith2;
  
  cout << Sum << endl
   << Sub << endl
   << Mul << endl
   << Div << endl
   << Rest << endl;
}

void OperationIncrementDecrement() // 증감 연산
{
  int Increase = 0; // 초기화
  int Decrease = 10;
  
  Increase = Increase + 1; // 더해지는 값: 증감값(step)
  Decrease = Decrease - 2;
  
  cout << Increase << endl << Decrease << endl;
  
  Increase += 1;
  Decrease -= 2;
  
  cout << Increase << endl << Decrease << endl;
  
  // Count : 개수 1씩 증가, 감소
  Increase++;
  Decrease--;
  
  cout << Increase << endl << Decrease << endl;
}

void OperationComparision() // 비교 연산
{     
  // 비교 연산의 결과 값: 참/거짓, true/false, 1/0
  int Greater = 30;
  int Less = 10;

  cout << (Greater > Less) << endl; // > : greater than
  cout << (Greater < Less) << endl; // < : less than

  cout << (Greater >= Less) << endl;
  cout << (Greater <= Less) << endl;

  cout << (Greater == Less) << endl;
  cout << (Greater != Less) << endl;
}

void OperationLogical() // 논리 연산
{  
  // AMD : bool 값이 모두 true 이면 결과는 true, 하나라도 false이면 결과는 false
  cout << (true && true) << endl;
  cout << (true && false) << endl;

  // OR: bool 값이 모두 false이면 결과 false, 하나라도 true이면 결과는 true
  cout << (true || true) << endl;
  cout << (true || false) << endl;

  // 국어가 90이상이고 영어가 90 이상이면
  int Kor = 80;
  int Eng = 95;

  // cout << (Kor >= 90 && Eng >= 90) << endl;
  // cout << (false && true) << endl;
  // cout << (false) << endl;

  cout << !(Kor >= 90 && Eng >= 90) << endl;
  cout << (!(Kor >= 90) && Eng >= 90) << endl;
}

void OperationBit() // 비트 연산
{
  int Bit1 = 15; // 00001111
  int Bit2 = 20; // 00010100

  int BitAnd = Bit1 & Bit2;
  // 00001111
  // 00010100
  // 00000100 => 2^0 * 0 + 2^1 *0 + 2^2 * 1 = 4

  cout << BitAnd << endl;

  // 15 숫자 값을 비트 이동 연산
  cout << (Bit1 << 1) << endl;
  // 00001111
  // 00011110 => 2^0*-+2^1*1+2^2*1+2^3*1+2^4*1 = 2+4+8+16 = 30
}
  
void OperationThree()   // 삼항 연산
{
  cout << (3 > 5 ? "Hello" : "World") << endl;
  cout << (3 < 5 ? "Hello" : "World") << endl;
}


