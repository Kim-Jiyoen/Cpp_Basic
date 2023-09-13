#include "io.h"
  


void Structure()
{
  // 구조체 서술 정의 : 데이터 타입을 생성
  struct inflatable // 변수 이름이 아니고 데이터 타입임 // 대문자로 시작안함
  {
    char name[20];
    float volume;
    double price;
  };

  inflatable People = { "Tom", 0.75, 15.235};

  struct sesac
  {
    // 멤버 변수 
    char name[20];
    char address[100];
    char phone[20];
    int age;
};

  sesac Banjang;
  Banjang = {"Jane", "서울시", "01012345678", 25};

  Banjang.age = 30;
  
}

void Enum() //9/12
{
  // enum : 열거형 데이터 타입
  // Sun, Mon, Tue, ... Sat : 열거형 "상수"
  // 0부터 시작하는 양수를 열거형 상수의 값으로 할당
  // 0부터 6까지 의미를 붙여줌
  enum day {Sun, Mon, Tue, Wed, Thu, Fri, Sat}; 
  // enum day {Sun=1, Mon, Tue, Wed, Thu, Fri, Sat}; 
  // enum day {Sun, Mon, Tue=10, Wed, Thu, Fri, Sat};
  // Tue 뒤로 1씩 증가, 11, 12, 13, 14 
  
  // 숫자에 의미를 부여하기 위해 미리 정의해놓은 상수 - 전체 대문자
  //cout << CLOCKS_PER_SEC << endl;    
  
  day DayName;
  DayName = Sat;
  cout << DayName << endl;

  // 가독성 좋아짐!
  switch(DayName)
  {
    case Sun:
      cout << "Bicycle";
    case Mon:
      cout << "Work";
    case Tue:
      cout << "Work";
    case Wed:
      cout << "Work";
    case Thu:
      cout << "Work";
    case Fri:
      cout << "Work";
    case Sat:
      cout << "Party";
  }
  
}


void ChangeValue(int a)
 {
   a = 0;
 }

int ChangeValue2(){
  return 0;
}

int c = 10;


void CallByvalue()
{
  //ChangeValue(c);
  c = ChangeValue2();
}