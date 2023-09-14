# ���α׷��� (���̹�) ǥ���

- ���α׷��� ������ ��ҹ��� ����
- �������� �����Ǿ� ����
- ����, �Լ�, Ŭ���� ���� �̸��� ���Ҷ� ���� ���� ���ܾ ��� �� �� ������ �ܾ ����


##### �Ϲ����� ���� ; unreal engine function variable

- Snake Case; unreal_engine_function_variable
- Kebap Case; unreal-engine-function-variable
- Camel Case; unrealEngineFunctionVariable (���� ���� ���)
- Pascal Case; UnrealEngineFunctionVariable (���� �ð�, �𸮾󿡼� �� ǥ���)
--> �𸮾� ���� ������Ģ, ����: �ο� ������ ���λ� b�� ����

## ���ɾ�, �����

 - C++���� ����ϱ�� ������ �ִ� ����
 - ����, �Լ��� �̸��� ������ �� ������ �ߺ����� �ʵ��� �̸��� �����Ͽ�����
 
 ## �ּ�: ������� �ʴ� �����κ�

 ##### ������ ����
    - ����
    - ������ Ÿ��()
    - �Ǽ��� Ÿ��
    - ����

## bit, byte 8��Ʈ = 1����Ʈ
- bit : ��ǻ�� �������� �ּҴ���
- byte : ��ǻ�� ������ �ǹ��� �ּ� ����

��ǻ�Ͱ� ����ϴ� ���� ����(����): 2����(0,1)
- 8����: 0,1,2,3,4,5,6,7
- 10����: 0,1,2,3,4,5,6,7,8,9
- 16����: 0,1,2,3,4,5,6,7,8,9,A,B,C,D,E,F

1 bit => 0,1 ���� ���� => 2���� ���� ����
2 bit => 2*2 => 4��
3 bit => 2*2*2 => 8
...
8 bit => 2^8 => 256

1. ��Ʈ��ũ ip address
192.168.0.1 / [0~255].[0~255].[0~255].[0~255]

2. �� ǥ��(RGB color - 24bit true color)
R - 8bit
G - 8bit
B - 8bit
Red : #FF0000

3. ���� ǥ��: UTF-8, EUC-KR
UTF-8 : 2byte ���� ��� ���ڸ�ǥ��

�����ڿ� ����
- ���� �� ���̿� ��ġ��� ��ȣ ; ������

���Կ���
- ���Կ����� : =
- ���ͷ� ������� ������ ����

// ���� vs �Ҵ�
// ���Կ���: ������ ���� �Ҵ��ϴ� ����
// �����ʿ��� ��������

��������
 - ����, ���� ����
 - Ư�� ���� ���� ũ�⸸ŭ ���� �Ǵ� ����
 - (�ݺ����� �����)

��������
- ħ/���� �Ǵ��ϴ�(�ٷ��) ����
- AND(�׸���) ���� : &&
- OR(�Ǵ�) ���� : ||
- NOT(����) ���� : !

��Ʈ����
- 10���� ���� ��, ���� ���� �״�� �����ͷ� �ٷ�� ���� �ƴ϶� 2���� �����ͷ� ������ ��
  2���� �����͸� ����
- ��Ʈ ������ �� �ڸ��� 2�������� ����
- ��Ʈ �̵� ����: �� ��Ʈ�� �ڸ��� �̵� ����

���� ����
- ���ǽ�(�񱳽�) ������� true/false �϶�,
- true �̸� �ݷ� ���� ���� ���� ����
- false �̸� �ݷ� ���� ���� ���� ����

if / else if / else
- ǥ������ ������� true/false ���� �Ǵ��ؼ� �� �ش� �б��� ���� ����

if (ǥ����1)
{
  ǥ������ ���� �� ����
}
else if (ǥ����2)
{
  ǥ����2�� ���� �� ����
}
else 
{
  �ռ� ǥ������ ��� ������ �� ����
}

- if ������ ���� �б� ���� ���δ� if �� �ٷ�� bool type ��(true/false)�� ���� ����
- if ���� ���� ���Ǵ� ��ȣ �κп� bool type ���� ���Ǹ� �б� ������ ����
- true/false => 1/0, 0������ ����/0

if (true)
{
  ���� ����
}
if(false)
{
  ���� ����
}

if(1+1)
{

}

// switch
// ����(������)�� ����/���� ����� ���� ���� �б⸦ ����(����)
// �б��� ������ ������ if ���� switch ���

switch(ǥ����)
{
  case:
    ���౸��1
  case:
    ���౸��2
  ...
  case:
    ���౸��...  
}

for ����

for (����1; ����2; ����3)
{  
  �ڵ����
}

- ����1: for ó�� ����� �� �� ���� ����
- ����2: for �ݺ���(loop)�� �ݺ� ����� �� �ڵ� ������ ����Ǳ� �� ����Ǵ� ����
- ����3: for loop�� �ݺ� ����� �� �ڵ������ ������ ���Ŀ� ����Ǵ� ����
- ����2: ���ǽ�, ����3: ������

for (int i =0; i<10; i++)
{
  ���� ����
}

- while
- ���ǽ��� ���� ���� �ݺ� ����
- �ڵ� ������ �����ϱ� �� ���ǽ� �� ����
- do~while: �ڵ� ������ ������ ���Ŀ� ���� ��

while(���ǽ�)
{  
  �ڵ����
}

do 
{
  �ڵ����
}
while(���ǽ�)

Ŭ���� ĸ��ȭ vs �Լ� ĸ��ȭ
API: �Լ�
����: '����' ����

parameter(���� �Ű�����) vs argument(���� �Ű�����)

�Լ� ����(����)
void Function(para) <= parameter
{

}

�Լ� ȣ��
Function(10); <= 10 : argument

global scope - 
function scope - �Լ� 
block scope - ����(for, if ��)


# Ŭ����

- ��ü ���� ���α׷��� ��ǥ���� ���
- ����ü�κ��� ���׷��̵�� ���
  - ����ü : ���������� ������ ����ü
  - Ŭ���� : ������ �Լ��� ������ ����ü

- ��ü���� ���α׷����� Ư¡
  - �߻�ȭ 
  - ĸ��ȭ 
  - ���� ���� 
  - ��Ӽ�
  - ������
  
- Ŭ������ ����
 - ����: ��� ���� / ������Ƽ(ex.�� ������� - �� �÷�, â��, ���� ��)
 - �Լ�: ��� �Լ� / �޼ҵ�(ex.�� ��� - ����, ������ �۵� ��)
 
- Ŭ������ �ǹ�
  - Ŭ����
    - ���赵 => ��ü ����. ****
  - ��ü / �ν��Ͻ� 
    - Ŭ������ ���ؼ� ������ ��ü
     
����ü�� �����ϸ� ����ü Ÿ������ ������ �����ؾ� ��ó��
Ŭ������ ���赵�� �������� ��ü �ν��Ͻ�(��ü)�� ��������

### ����

#### ����ü ����

...
struct Car
{
  char name[30];
  char mode[30];
  int year;
  int TireSize;
  char Color[30];
}

�������� ����, ���� �ƴ�
void Drive(char name[30]){}
void Break(char name[30]){}
void Parking(char name[30]){}
void Rear(char name[30]){}

Car BMW = { "X7", "xDrive401". 2023, 23, "Black" }

Car Jeep = { "Rubicon", "Mountain", 2021, 26, "Blue" }

cout << BMW.year << endl;

cout << Jeep.year << endl;

Drive("X7");
Drive("Rubicon");
--> ����, ���� �Լ�. �ó����� ź �Ͱ� ���� ����

...

#### Ŭ���� ����

...

class Car
{
  char name[30];
  char mode[30];
  int year;
  int TireSize;
  char Color[30];

  void Drive(){}
  void Break(){}
  void Parking(){}
  void Rear(){}
}

Car Sonata;
cout << Sonata.year << endl;
Sonata.Drive(); --> ���� �Լ�

Car Ray;
cout << Ray.year << endl;
Ray.Drive();

* Sonata�� Drive�� Ray�� Drive�� �ٸ� �Լ�. ������ ���� �Լ���. ���� �ڱ� ���⿡ �°� Ŀ���͸���¡ ����
...

����ü�� Ŭ���� ��� �����ִ� �������� Ŭ���� �ȿ� �����ִ� �Լ��� ���� �����ִ� ������ �������� ����(���� ����)
