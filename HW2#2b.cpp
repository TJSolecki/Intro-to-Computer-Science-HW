#include <iostream>
using namespace std;

int main()
{
  double totalScore, curScore, avgScore;
  int numScores = 0;
  totalScore = 0;

  cout<<"Enter the first score"<<endl;
  cin>>curScore;
  //checks to see if score is valid and if it is not it contines asking for a score until it recives a valid one
  while(!(curScore>=0 && curScore<=30) && curScore != -1)
  {
    cout<<"The score you entered was invalid.\nPlease enter a valid score."<<endl;
    cin>>curScore;
  }

  while(curScore != -1.0)
  {
    totalScore += curScore;
    numScores++;

    cout<<"Enter the next score"<<endl;
    cin>>curScore;
    //checks to see if score is valid and if it is not it contines asking for a score until it recives a valid one
    while(!(curScore>=0 && curScore<=30) && curScore != -1)
    {
      cout<<"The score you entered was invalid.\nPlease enter a valid score."<<endl;
      cin>>curScore;
    }
  }

  //checks to see if the first score entered was -1
  if(totalScore == 0 && curScore == -1)
  {
    cout<<"You did not enter any scores.\nPlease restart the program if you wish to calculate an average score.";
  }
  else
  {
    avgScore = totalScore / numScores;
    cout<<"The average score is = "<<avgScore<<endl;
  }

  return 0;
}
