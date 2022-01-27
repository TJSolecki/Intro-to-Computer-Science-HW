#include <iostream>
using namespace std;

struct studentRecord
{
  double quiz1Points;
  double quiz2Points;
  double midtermPoints;
  double finalPoints;
};

void findLetterGrade(double& grade, char& letter, int outOf);

int main()
{
  studentRecord user;
  char quiz1Letter, quiz2Letter, midtermLetter, finalLetter, finalGradeLetter;

  cout<<"Enter the student's score in points for quiz 1\n";
  cin>>user.quiz1Points;
  cout<<"Enter the student's score in points for quiz 2\n";
  cin>>user.quiz2Points;
  cout<<"Enter the student's score in points for the midterm\n";
  cin>>user.midtermPoints;
  cout<<"Enter the student's score in points for the final\n";
  cin>>user.finalPoints;

  double avgQuizScore = (user.quiz1Points + user.quiz2Points) / 2;
  double finalGrade = (avgQuizScore/10) * 25 + (user.midtermPoints/100) * 25 + (user.finalPoints/100) * 50;

  findLetterGrade(user.quiz1Points, quiz1Letter, 10);
  findLetterGrade(user.quiz2Points, quiz2Letter, 10);
  findLetterGrade(user.midtermPoints, midtermLetter, 100);
  findLetterGrade(user.finalPoints, finalLetter, 100);
  findLetterGrade(finalGrade, finalGradeLetter, 100);

  cout<<"Student Record:\n"<<"Quiz 1 = "<<quiz1Letter<<endl;
  cout<<"Quiz 2 = "<<quiz2Letter<<endl;
  cout<<"Midterm Exam = "<<midtermLetter<<endl;
  cout<<"Final Exam = "<<finalLetter<<endl;
  cout<<"Final Grade = "<<finalGrade<<endl;
  cout<<"Final Grade Letter = "<<finalGradeLetter<<endl;


  return 0;
}

void findLetterGrade(double& grade, char& letter, int outOf)
{
  int multiplier = outOf/10;
  if(grade >= 9 * multiplier)
  {
    letter = 'A';
  }
  else if (grade >= 8 * multiplier)
  {
    letter = 'B';
  }
  else if (grade >= 7 * multiplier)
  {
    letter = 'C';
  }
  else if (grade >= 6 * multiplier)
  {
    letter = 'D';
  }
  else if (grade < 6 * multiplier)
  {
    letter = 'F';
  }
}
