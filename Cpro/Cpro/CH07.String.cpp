#include "io.h"
void Structure()
{
  // 구조체 서술 정의 : 하나의 데이터 타입 생성
 struct inflatable {
 char name[20];
 float volume;
 double price;
 };

  inflatable people = {"Tom", 0.75, 15.235 };

  struct sesac{
  char name[20];
  char address[100];
  char phone[20];
  int age;
  };
  sesac Banjang;
  Banjang = {"jane","서울시" , "010123465798", 25 };
  Banjang.age = 30;

  
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
  // ChangeValue(c);
  c = ChangeValue2();
}

void Enum()
{
  //enum : 열거형 데이터 타입
  // Sun, Mon, Tue... : 열거형 상수
  // 0부터 시작하는 양수를 열거형 상수의 값으로 할당
  enum day {Sun, Mon, Tue, Wed, Thu, Fri, Sat};

  
  day DayName;
  
  DayName = Sun;

  switch(DayName)
  {
    case Sun:
    cout << "Bicycle";
    break;
    case Mon:
    cout << "work";
    break;
    case Tue:
    cout << "work";
    break;
    case Wed:
    cout << "work";
    break;
    case Thu:
    cout << "work";
    break;
  }

  cout << DayName << endl;
}

