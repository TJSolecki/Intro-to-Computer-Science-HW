#include <iostream>
#include <cmath>
using namespace std;

bool isLeapYear(int year);
int getCenturyValue(int year);
int getYearValue(int year);
int getMonthValue(int month, int year);

int main()
{
  int month, year, day;
  cout<<"Enter the day of the month"<<endl;
  cin>>day;
  cout<<"Enter the month as a number"<<endl;
  cin>>month;
  cout<<"Enter the year"<<endl;
  cin>>year;

  int switchNum = (day + getMonthValue(month, year) + getYearValue(year) + getCenturyValue(year)) % 7;
  switch(switchNum)
  {
    case 0:
      cout<<"Sunday"<<endl;
      break;
    case 1:
      cout<<"Monday"<<endl;
      break;
    case 2:
      cout<<"Tuesday"<<endl;
      break;
    case 3:
      cout<<"Wednesday"<<endl;
      break;
    case 4:
      cout<<"Thursday"<<endl;
      break;
    case 5:
      cout<<"Friday"<<endl;
      break;
    case 6:
      cout<<"Saturday"<<endl;
      break;
    default:
      cout<<"ERROR"<<endl;
  }
  return 0;
}

bool isLeapYear(int year)
{
  return ((year % 400 == 0)||(year % 4 == 0 && year % 100 != 0));
}

int getCenturyValue(int year)
{
  return (3 - ((year/100) % 4)) * 2;
}

int getYearValue(int year)
{
  return ((year % 100) / 4) + (year % 100);
}

int getMonthValue(int month, int year)
{
  switch(month)
  {
    case 1:
      if(isLeapYear(year))
      {
        return 6;
      }
      else
      {
        return 0;
      }
    case 2:
      if(isLeapYear(year))
      {
        return 2;
      }
      else
      {
        return 3;
      }
    case 3:
      return 3;
    case 4:
      return 6;
    case 5:
      return 1;
    case 6:
      return 4;
    case 7:
      return 6;
    case 8:
      return 2;
    case 9:
      return 5;
    case 10:
      return 0;
    case 11:
      return 3;
    case 12:
      return 5;
    default:
      cout<<"ERROR::VALUE ENTERED IN GETMONTHVALUE FOR MONTH WAS NOT 1-12"<<endl;
      return 0;
  }
}
