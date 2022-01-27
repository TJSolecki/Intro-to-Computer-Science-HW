#include <iostream>
using namespace std;

int main()
{
  double totalScore, curScore, avgScore, highScore, lowScore;
  int numScores = 0;
  totalScore = 0;
  highScore = 0;
  lowScore = 30;

  cout<<"Enter the first score"<<endl;
  cin>>curScore;
  while(!(curScore>=0 && curScore<=30) && curScore != -1)
  {
    cout<<"The score you entered was invalid.\nPlease enter a valid score."<<endl;
    cin>>curScore;
  }

  while(curScore != -1.0)
  {
    highScore = (curScore>highScore)?highScore = curScore:highScore = highScore;
    lowScore = (curScore<lowScore)?lowScore = curScore:lowScore = lowScore;

    totalScore += curScore;
    numScores++;

    cout<<"Enter the next score"<<endl;
    cin>>curScore;
    while(!(curScore>=0 && curScore<=30) && curScore != -1)
    {
      cout<<"The score you entered was invalid.\nPlease enter a valid score."<<endl;
      cin>>curScore;
    }
  }

  if(totalScore == 0 && curScore == -1)
  {
    cout<<"You did not enter any scores.\nPlease restart the program if you wish to calculate an average score.";
  }
  else
  {
    avgScore = totalScore / numScores;
    cout<<"The average score is = "<<avgScore<<endl;
    cout<<"The highest score is = "<<highScore<<endl;
    cout<<"The lowest score is = "<<lowScore<<endl;
  }

  return 0;
}
