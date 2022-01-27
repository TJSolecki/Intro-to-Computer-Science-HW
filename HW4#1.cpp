#include <iostream>
using namespace std;

void takeInput(int& hr, int& min);
void computeTime(int& hr, char& AmPm);
void sendOutput(int hr, int min, char AmPm);

int main()
{
  int hr, min;
  char AmPm;
  bool again = true;
  do{
    takeInput(hr, min);
    computeTime(hr, AmPm);
    sendOutput(hr, min, AmPm);
    cout<<"Enter 0 if you would like to stop the program.\nEnter 1 if you would like to run the program again.\n";
    cin>>again;
  }while(again == true);

  return 0;
}

void takeInput(int& hr, int& min)
{
  cout<<"Enter the hour of the 24 hour time you would like to convert.\n";
  cin>>hr;
  cout<<"Enter the minutes of the 24 hour time you would like to convert.\n";
  cin>>min;
}

void computeTime(int& hr, char& AmPm)
{
  if(hr > 12)
  {
    if(hr == 24)
    {
      hr -= 12;
      AmPm = 'a';
    }
    else
    {
      hr -= 12;
      AmPm = 'p';
    }
  }
  else
  {
    if(hr == 12)
    {
      AmPm = 'p';
    }
    else
    {
      AmPm = 'a';
    }
  }
}

void sendOutput(int hr, int min, char AmPm)
{
  switch(AmPm)
  {
    case 'a':
      if(min < 10)
      {
        cout<<hr<<":0"<<min<<" A.M.\n";
      }
      else
      {
        cout<<hr<<":"<<min<<" A.M.\n";
      }
      break;
    case 'p':
      if(min < 10)
      {
        cout<<hr<<":0"<<min<<" P.M.\n";
      }
      else
      {
        cout<<hr<<":"<<min<<" P.M.\n";
      }
      break;
    default:
    cout<<"ERROR\n";
  }

}
