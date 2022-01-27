#include <iostream>
using namespace std;

int main()
{
  double totalScore, curScore, avgScore;
  int numUsed = 0;
  double scores[50];

  cout<<"Enter the first score"<<endl;
  cin>>curScore;

  while(curScore != -1.0)
  {
    scores[numUsed] = curScore;
    numUsed++;

    cout<<"Enter the next score. When you are done entering scores enter -1"<<endl;
    cin>>curScore;
  }

  for(int i = 0; i < numUsed; i++)
  {
    totalScore += scores[i];
  }
  avgScore = totalScore/numUsed;
  cout<<"The average score is = "<<avgScore<<endl;

  return 0;
}
