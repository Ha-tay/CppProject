#include "io.h"

void CountNumber()
{
  int Counter = 0;
  cout << "숫자 개수를 입력해주세요 : ";
  cin >> Counter;

  int Number[Counter];
  for(int i=0; i<Counter; i++)
  {
    cout << "수 데이터를 입력해주세요 : ";
    cin >> Number[i];
  }

  int FindNumber;
  cout << "찾을 수를 입력해주세요 :";
  cin >> FindNumber;

  int FindCount = 0;
  for(int i=0; i<Counter; i++)
  {
    if(Number[i] == FindNumber)
    {
      FindCount++;
    }
  }

  cout << "찾는 수의 개수는 " << FindCount << "개 입니다.";
}

void LessNumber()
{
  int Counter = 0;
  cout << "숫자 개수를 입력해주세요 : ";
  cin >> Counter;

  int FindNumber;
  cout << "기준 수를 입력해주세요 :";
  cin >> FindNumber;

  int Number[Counter];
  for(int i=0; i<Counter; i++)
  {
    cout << "수 데이터를 입력해주세요 : ";
    cin >> Number[i];
  }

  for(int i=0; i<Counter; i++)
  {
    if(FindNumber > Number[i])
    {
      cout << Number[i] << " : ";
    }
  }
}
void MissingNumber()
{
  int Counter = 0;
  cout <<  "학생수 입력해주세요 : ";
  cin >> Counter;

  int FindNumber;
  cout << "과제 제출하지 않은 학생 수를 입력해주세요 :";
  cin >> FindNumber;
  int TotalMember[Counter];
  int I[2] = {1,2}; 
  for(int i=0; i<Counter; i++)
    {
      TotalMember[i] = i+1;
    }
  int WorkMember[Counter - FindNumber];
  for(int i=0; i<( Counter - FindNumber); i++)
    {
      cin >> WorkMember[i];
    }

  for(int i=0; i<(Counter - FindNumber); i++)
    {
    for(int j=0; j<Counter; i++)
      {
        if(WorkMember[i] == TotalMember[j]){
          
      }
    }
  }
}