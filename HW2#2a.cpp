#include <iostream>
using namespace std;

int main()
{
  double totalScore, curScore, avgScore;
  int numScores = 0;

  cout<<"Enter the first score"<<endl;
  cin>>curScore;

  while(curScore != -1.0)
  {
    totalScore += curScore;
    numScores++;

    cout<<"Enter the next score"<<endl;
    cin>>curScore;
  }

  avgScore = totalScore / numScores;
  cout<<"The average score is = "<<avgScore<<endl;

  return 0;
}
