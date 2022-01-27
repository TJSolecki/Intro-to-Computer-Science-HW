#include <iostream>
#include <string>
using namespace std;

int main()
{
  //declaring variables
  string day;
  char dayChar = 'Z';

  //Getting the day of the week from the user
  cout<<"Please enter which weekday you would like to see the schedule for.\n(Be sure to start the weekday with a capital letter)\n";
  cin>>day;

  //Checks what day the user entered and assigns dayChar the respective char
  if(day.compare("Thursday") == 0)
  {
    dayChar = 'R';
  }
  else if(day.compare("Monday") == 0)
  {
    dayChar = 'M';
  }
  else if(day.compare("Tuesday") == 0)
  {
    dayChar = 'T';
  }
  else if(day.compare("Wednesday") == 0)
  {
    dayChar = 'W';
  }
  else if(day.compare("Friday") == 0)
  {
    dayChar = 'F';
  }

  //checking the schedule for the corresponding day and printing it out to the user in the console
  switch(dayChar)
  {
    case 'M':
      cout<<"CSCI 10 at 1:00, PHIL 11A at 2:15, MATH 12 at 4:45"<<endl;
      break;
    case 'T':
      cout<<"PHYS 2 at 12:10, CSCI 10 lab at 2:15"<<endl;
      break;
    case 'W':
      cout<<"CSCI 10 at 1:00, PHIL 11A at 2:15, MATH 12 at 4:45"<<endl;
      break;
    case 'R':
      cout<<"PHYS 2 at 12:10"<<endl;
      break;
    case 'F':
      cout<<"CSCI 10 at 1:00, PHIL 11A at 2:15, MATH 12 at 4:45"<<endl;
      break;
    default:
      cout<<"The day you entered was either not a weekday or missspelled.\n";
  }

  return 0;
}
