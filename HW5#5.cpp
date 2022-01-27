#include <iostream>
using namespace std;

const int MAX_DIGITS = 20;

void addNumbers(int a[], int b[], int c[], bool& overflow);

int main()
{
  char inputChar;
  bool overflow = false;
  bool again;
  int numUsed1 = 0;
  int numUsed2 = 0;
  int digits;
  int num1[MAX_DIGITS], num2[MAX_DIGITS], result[MAX_DIGITS];
  do{
    numUsed1 = 0;
    numUsed2 = 0;
    overflow = false;
  for(int i = 0; i < MAX_DIGITS; i++)
  {
    num1[i] = 0;
    num2[i] = 0;
  }

  cout<<"Enter how many digits long the first number is (Note the number has a max of "<<MAX_DIGITS<<" digits)\n";
  cin>>digits;
  for(int i = 0; i < digits; i++)
  {
    cout<<"Enter digit number "<<numUsed1+1<<" of the first number\n";
    cin>>inputChar;
    num1[MAX_DIGITS - digits + numUsed1] = inputChar - '0';
    numUsed1++;
  }

  cout<<"Enter how many digits long the second number is (Note the number has a max of "<<MAX_DIGITS<<" digits)\n";
  cin>>digits;
  for(int j = 0; j < digits; j++)
  {
    cout<<"Enter digit number "<<numUsed2+1<<" of the second number\n";
    cin>>inputChar;
    num2[MAX_DIGITS - digits + numUsed2] = inputChar - '0';
    numUsed2++;
  }

  addNumbers(num1, num2, result, overflow);

  if(overflow)
  {
    cout<<"Integer overflow\n";
  }
  else
  {
    bool start = false;
    cout<<"Answer = ";
    for(int i = MAX_DIGITS - 1; i >= 0; i--)
    {
      if(start == false && result[i] == 0)
      {

      }
      else
      {
        start = true;
        cout<<result[i];
      }
    }
    cout<<endl;
  }
  cout<<"If you would like to run the program again enter 1 and if not enter 0\n";
  cin>>again;
}while(again == true);

  return 0;
}

void addNumbers(int a[], int b[], int c[], bool& overflow)
{
  int carry = 0;
  int indexOfResult = 0;
  int temp;
  for(int i = MAX_DIGITS - 1; i >= 0; i--)
  {
    temp = a[i] + b[i] + carry;
    if(temp > 9)
    {
      carry = temp/10;
      temp = temp%10;
    }
    else
    {
      carry = 0;
    }
    c[indexOfResult] = temp;
    indexOfResult++;
    if(indexOfResult == MAX_DIGITS - 1 && carry != 0)
    {
      overflow = true;
    }
  }
}
