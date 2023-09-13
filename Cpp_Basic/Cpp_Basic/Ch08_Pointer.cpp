# include "io.h"

void PointerDefine()
{
	int a = 10;

	cout << "a : " << a << endl; // 값 출력
	cout << " &a : " << & a << endl; // &a : &(주소참조) 연산, 주소 출력

	int* pa = &a; // 포인터 변수에 주소값 대입

	cout << "pa : " << pa << endl; // 주소 출력
	cout << "*pa : " << *pa << endl; // 값 출력
	// int*에 붙어있는 *(선언에 사용됨) 와 *pa에 붙어있는 *(연산에 사용됨)는 완전 다름!!

	cout << "pa + 1 : " << pa + 1 << endl;
	cout << "*pa + 1 : " << *pa + 1 << endl;
	cout << "*(pa + 1) : " << *(pa + 1) << endl; // a의 주소 

	int** ppa = &pa; // 포인터를 참조하는 포인터

	cout << "ppa : " << ppa << endl;
	cout << "*ppa : " << * ppa << endl;
	cout << "**ppa : " << **ppa << endl; // 값

	int Array[3] = { 1,5,9 };
	int* pArray = Array; // Array가 주소값이기 때문에 & 넣을 필요 없음.
	
	cout << Array << endl; // 첫번째 원소의 주소값
	cout << pArray << endl;

	cout << Array[1] << endl;
	cout << pArray[1] << endl;

	cout << *pArray << endl;
	cout << *Array << endl;

	cout << Array + 1 << endl; // 주소값, Array[0] 다음칸 주소값
	cout << pArray + 1 << endl; // 주소값
	
	cout << *Array + 1 << endl; // 값 1+1
	cout << *pArray + 1 << endl; // 값 1+1
	 
	cout << *(Array + 1) << endl; // 값, Array[0] 다음칸 주소가 가리키는 값 = 5
	cout << *(pArray + 1) << endl; // 값
	


}

