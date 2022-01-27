#include <iostream>
using namespace std;

void deleteRepeats(char a[], int& numUsed);

int main()
{
  char a[30] = {'a','a','a','a','a','b','a','c','c','b','d','z','z','x'};
  int numUsed = 14;
  deleteRepeats(a, numUsed);
  for(char y : a)
  {
    cout<<y<<" ";
  }
  cout<<endl;
  return 0;
}

void deleteRepeats(char a[], int& numUsed)
{
  char curChar;
  for(int i = 0; i < numUsed ; i++)
  {
    curChar = a[i];
    for(int j = i + 1; j < numUsed;)
    {
      if(a[j] == curChar)
      {
        //DEL AND SHIFT ARRAY
        for(int x = j; x < numUsed; x++)
        {
          a[x] = a[x+1];
        }
        numUsed--;
        a[numUsed] = ' ';
        j--;
      }
      j++;
    }
  }
}
