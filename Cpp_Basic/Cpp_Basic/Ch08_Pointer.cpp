# include "io.h"

void PointerDefine()
{
	int a = 10;

	cout << "a : " << a << endl; // �� ���
	cout << " &a : " << & a << endl; // &a : &(�ּ�����) ����, �ּ� ���

	int* pa = &a; // ������ ������ �ּҰ� ����

	cout << "pa : " << pa << endl; // �ּ� ���
	cout << "*pa : " << *pa << endl; // �� ���
	// int*�� �پ��ִ� *(���� ����) �� *pa�� �پ��ִ� *(���꿡 ����)�� ���� �ٸ�!!

	cout << "pa + 1 : " << pa + 1 << endl;
	cout << "*pa + 1 : " << *pa + 1 << endl;
	cout << "*(pa + 1) : " << *(pa + 1) << endl; // a�� �ּ� 

	int** ppa = &pa; // �����͸� �����ϴ� ������

	cout << "ppa : " << ppa << endl;
	cout << "*ppa : " << * ppa << endl;
	cout << "**ppa : " << **ppa << endl; // ��

	int Array[3] = { 1,5,9 };
	int* pArray = Array; // Array�� �ּҰ��̱� ������ & ���� �ʿ� ����.
	
	cout << Array << endl; // ù��° ������ �ּҰ�
	cout << pArray << endl;

	cout << Array[1] << endl;
	cout << pArray[1] << endl;

	cout << *pArray << endl;
	cout << *Array << endl;

	cout << Array + 1 << endl; // �ּҰ�, Array[0] ����ĭ �ּҰ�
	cout << pArray + 1 << endl; // �ּҰ�
	
	cout << *Array + 1 << endl; // �� 1+1
	cout << *pArray + 1 << endl; // �� 1+1
	 
	cout << *(Array + 1) << endl; // ��, Array[0] ����ĭ �ּҰ� ����Ű�� �� = 5
	cout << *(pArray + 1) << endl; // ��
	


}

