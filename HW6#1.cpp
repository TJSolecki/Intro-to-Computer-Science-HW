#include <iostream>
using namespace std;

int main()
{
  string board[3][3] = {{"1","2","3"},{"4","5","6"},{"7","8","9"}};
  bool gameOver = false;
  string winner = "";
  int turn = 1;
  string curTurn = "";
  int space = 0;
  bool notValid = false;
  while(gameOver == false && turn < 10)
  {
    curTurn = turn % 2 == 1?"X":"O";
    cout<<curTurn<<endl;
    for(int i = 0; i < 3; i++)
    {
      for(int j = 0; j < 3; j++)
      {
        cout<<board[i][j]<<" ";
      }
      cout<<endl;
    }
    cout<<"It is player "<<curTurn<<"'s turn.\nPlease enter the number of the space that you would like to place your "<<curTurn<<".\n";
    cin>>space;
    do{
      if(notValid == true)
      {
        cout<<"The space you entered was not a valid space.\nPlease enter a different space.\n";
        cin>>space;
      }
      notValid = false;
      switch(space)
      {
        case 1:
          if(board[0][0] == "X" || board[0][0] == "O")
          {
            notValid = true;
          }
          else
          {
            board[0][0] = curTurn;
          }
          break;
        case 2:
          if(board[0][1] == "X" || board[0][1] == "O")
          {
            notValid = true;
          }
          else
          {
            board[0][1] = curTurn;
          }
          break;
        case 3:
          if(board[0][2] == "X" || board[0][2] == "O")
          {
            notValid = true;
          }
          else
          {
            board[0][2] = curTurn;
          }
          break;
        case 4:
          if(board[1][0] == "X" || board[1][0] == "O")
          {
            notValid = true;
          }
          else
          {
            board[1][0] = curTurn;
          }
          break;
        case 5:
          if(board[1][1] == "X" || board[1][1] == "O")
          {
            notValid = true;
          }
          else
          {
            board[1][1] = curTurn;
          }
          break;
        case 6:
          if(board[1][2] == "X" || board[1][2] == "O")
          {
            notValid = true;
          }
          else
          {
            board[1][2] = curTurn;
          }
          break;
        case 7:
          if(board[2][0] == "X" || board[2][0] == "O")
          {
            notValid = true;
          }
          else
          {
            board[2][0] = curTurn;
          }
          break;
        case 8:
          if(board[2][1] == "X" || board[2][1] == "O")
          {
            notValid = true;
          }
          else
          {
            board[2][1] = curTurn;
          }
          break;
        case 9:
          if(board[2][2] == "X" || board[2][2] == "O")
          {
            notValid = true;
          }
          else
          {
            board[2][2] = curTurn;
          }
          break;
        default:
          notValid = true;
      }
    }while(notValid == true);

    if(board[0][0] == board[0][1] && board[0][1] == board[0][2])
    {
      gameOver = true;
      cout<<"The winner is "<<board[0][0]<<"!\n";
    }
    if(board[1][0] == board[1][1] && board[1][1] == board[1][2])
    {
      gameOver = true;
      cout<<"The winner is "<<board[1][0]<<"!\n";
    }
    if(board[2][0] == board[2][1] && board[2][1] == board[2][2])
    {
      gameOver = true;
      cout<<"The winner is "<<board[2][0]<<"!\n";
    }
    if(board[0][0] == board[1][0] && board[1][0] == board[2][0])
    {
      gameOver = true;
      cout<<"The winner is "<<board[0][0]<<"!\n";
    }
    if(board[0][1] == board[1][1] && board[1][1] == board[2][1])
    {
      gameOver = true;
      cout<<"The winner is "<<board[0][1]<<"!\n";
    }
    if(board[0][2] == board[1][2] && board[1][2] == board[2][2])
    {
      gameOver = true;
      cout<<"The winner is "<<board[0][2]<<"!\n";
    }
    if(board[0][0] == board[1][1] && board[1][1] == board[2][2])
    {
      gameOver = true;
      cout<<"The winner is "<<board[0][0]<<"!\n";
    }
    if(board[0][2] == board[1][1] && board[1][1] == board[2][0])
    {
      gameOver = true;
      cout<<"The winner is "<<board[0][2]<<"!\n";
    }

    turn++;
  }
  cout<<"Final Game Board:\n";
  for(int i = 0; i < 3; i++)
  {
    for(int j = 0; j < 3; j++)
    {
      cout<<board[i][j]<<" ";
    }
    cout<<endl;
  }
  if(gameOver == false)
  {
    cout<<"The game is a tie.\n";
  }
  return 0;
}
