#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int humanTurn(int humanTotalScore);
int computerTurn(int computerTotalScore);

int main()
{
  int humanTS = 0;
  int cpuTS = 0;
  string winner = " ";
  int winningScore = 0;
  int turnNum = 1;
  srand(time(0));
  while(1)
  {
    cout<<"Current standings for turn "<<turnNum<< " are:"<<endl;
    cout<<"Human score = "<<humanTS<<endl;
    cout<<"Computer score = "<<cpuTS<<endl<<endl;
    humanTS += humanTurn(humanTS);
    if(humanTS>=100)
    {
      winningScore = humanTS;
      winner = "human";
      break;
    }

    cpuTS += computerTurn(cpuTS);
    if(cpuTS>=100)
    {
      winningScore = cpuTS;
      winner = "computer";
      break;
    }
    turnNum++;
    cout<<endl;
  }

  cout<<"The winner was the "<<winner<<" with a score of "<<winningScore<<".\n";
  return 0;
}

int humanTurn(int humanTotalScore)
{
  char answer = 'r';
  int lastRoll = 0;
  int turnScore = 0;
  while(answer == 'r')
  {
    lastRoll = rand()%6+1;
    cout<<endl;
    if(lastRoll == 1)
    {
      cout<<"You rolled a 1. Your turn is over."<<endl<<endl;
      return 0;
    }
    else
    {
      turnScore += lastRoll;
      cout<<"You rolled a "<<lastRoll<<" your current score turn is "<<turnScore<<".\n";
      cout<<"Your total score if you hold would be "<<turnScore + humanTotalScore<<".\n";
      cout<<"If you would like to roll again type r. If you would like to hold type h.\n";
      cin>>answer;
      while(!(answer == 'h' || answer == 'r'))
      {
        cout<<"You did not enter h or r."<<endl;
        cout<<"If you would like to roll again type r. If you would like to hold type h.\n";
        cin>>answer;
      }
      if(answer == 'h')
      {
        return turnScore;
      }
    }
  }
}

int computerTurn(int computerTotalScore)
{
  int totalScore = computerTotalScore;
  int curScore = 0;
  int lastRoll = 0;
  while(curScore < 20 && !(totalScore>=100))
  {
    lastRoll = rand()%6+1;
    cout<<"The computer rolled a "<<lastRoll<<endl;
    if(lastRoll == 1)
    {
      cout<<"The computer rolled a 1 and will recive 0 points this turn\n";
      return 0;
    }
    else
    {
      curScore += lastRoll;
      totalScore += lastRoll;
      //debug
      cout<<"Computer score this turn = "<<curScore<<endl;
    }
  }
  //debug
  cout<<"The compter's turn is over. The computer got "<<curScore<<" points this turn\n";
  return curScore;
}
