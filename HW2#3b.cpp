#include <iostream>
using namespace std;

int main()
{
  int firstNum = 10;
  int secondNum = 5;

  for(int i = 0; i < 5; i++)
  {
    cout<<"start ";
    for(int l = 0; l < 5; l++)
    {
      cout<<firstNum<<" "<<secondNum<<", ";
      secondNum--;
    }
    firstNum += 2;
    secondNum = 5;
    cout<<"end"<<endl;
  }

  return 0;
}
