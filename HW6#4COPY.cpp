#include <iostream>
#include <string>
#include <fstream>
using namespace std;

//____________________________________________________________________

void swap(string& x, string& y)
{
  string temp = x;
  x = y;
  y = temp;
}

int findIndexOfSmallest(string a[], int startIndex, int numUsed)
{
  string min = a[startIndex];
  int indexOfMin = startIndex;
  for(int i = startIndex + 1; i < numUsed; i++)
  {
    if(a[i].compare(min) < 0)
    {
      min = a[i];
      indexOfMin = i;
    }
  }
  return indexOfMin;
}

void sort(string a[], int numUsed)
{
  int indexOfNextSmall;
  for(int i = 0; i < numUsed; i++)
  {
    indexOfNextSmall = findIndexOfSmallest(a,i,numUsed);
    swap(a[i],a[indexOfNextSmall]);
  }
}

//_____________________________________________________________

int main()
{

  string list[100] = {"1. The Dying - John Legend", "A Lulluby- no author listed", "lil kennedy   - J.F.K", "An Amazing- Song - John Witchhawk", "Beamer Boy - Lil peep"};
  string line;
  int numUsed = 5;

    //a.)removing any leading numbers, spaces, ect.
    for(int i = 0; i < numUsed; i++)
    {
      string output = "";
      bool start = false;
      for(int j = 0; j < list[i].length(); j++)
      {
        if((list[i][j] >= 'a' && list[i][j] <= 'z') || (list[i][j] >= 'A' && list[i][j] <= 'Z'))
        {
          start = true;
        }
        if(start)
        {
          output += list[i][j];
        }
      }
      list[i] = output;
    }

    int indexOfDash;
    //b.) removing multi-spaces, fixing - spacing
    for(int i = 0; i < numUsed; i++)
    {
      string output = "";
      char prevChar;
      indexOfDash = 0;
      bool addSpace = false;
      for(int j = 0; j < list[i].length(); j++)
      {
        bool replace = false;
        if(list[i][j] == '-')
        {
          for(int l = j + 1; l < list[i].length(); l++)
          {
            if(list[i][l] == '-')
            {
              replace = true;
            }
          }
          if(replace)
          {
            list[i][j] = ' ';
          }
        }

        if(list[i][j] == '-' && ((list[i][j-1] >= 'a' && list[i][j-1] <= 'z') || (list[i][j-1] >= 'A' && list[i][j-1] <= 'Z')))
        {
          indexOfDash = j;
          addSpace = true;
        }

        if(prevChar == ' ' && list[i][j] == ' ')
        {

        }
        else
        {
          output += list[i][j];
        }
        prevChar = list[i][j];
      }

      if(addSpace)
      {
        output.insert(indexOfDash, " ");
      }

      list[i] = output;

      for(int j = 0; j < list[i].length(); j++)
      {
        if(list[i][j] == '-')
        {
          indexOfDash = j;
        }
      }

      if(list[i].find("The ") == 0)
      {
        list[i].insert(indexOfDash - 1,", The");
        list[i] = list[i].substr(4);
      }
      if(list[i].find("A ") == 0)
      {
        list[i].insert(indexOfDash - 1,", A");
        list[i] = list[i].substr(2);
      }
      if(list[i].find("An ") == 0)
      {
        list[i].insert(indexOfDash - 1,", An");
        list[i] = list[i].substr(3);
      }
    }
    for(int i = 0; i < numUsed; i++)
    {
      for(int j = 0; j < list[i].length(); j++)
      {
        if(list[i][j] == '-')
        {
          indexOfDash = j;
        }
      }

      string author = "";

      for(int j = indexOfDash + 2; j < list[i].length(); j++)
      {
        author += list[i][j];
      }
      string title = "";
      for(int j = 0; j < indexOfDash - 1; j++)
      {
        title += list[i][j];
      }

      list[i] = author + " - " + title;
    }

    sort(list,numUsed);

    for(int i = 0; i < numUsed; i++)
    {
      cout<<list[i]<<endl;
    }

  return 0;
}
