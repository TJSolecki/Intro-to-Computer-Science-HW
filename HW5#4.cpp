#include <iostream>
using namespace std;

void sort(int a[], int numUsed);
int findIndexOfBig(int a[], int startIndex, int numUsed);
void swap(int& x, int& y);

void formatArray(int a[], int& numUsed, int b[]);

int main()
{
  int col1[50], col2[50];
  int curInput, numUsed = 0;
  char again = 'y';
  cout<<"Enter the first number that you would like the list to contain\n";
  while(again == 'y'|| again == 'Y')
  {
    cin>>curInput;
    col1[numUsed] = curInput;
    numUsed++;
    cout<<"Would you like to add another number to the list? If yes enter y and press enter. If no enter n.\n";
    cin>>again;
    if(again == 'y'|| again == 'Y')
    {
      cout<<"Enter the next number\n";
    }
  }

  sort(col1,numUsed);
  //fills col2 with 1's
  for(int i = 0; i < 50; i++)
  {
    col2[i] = 1;
  }
  //call formatArray
  formatArray(col1,numUsed,col2);
  //print the results
  cout<<"N  Count\n";
  for(int i = 0; i<numUsed; i++)
  {
    cout<<col1[i]<<"  "<<col2[i]<<endl;
  }
  return 0;
}

void formatArray(int a[], int& numUsed, int b[])
{
  int curInt;
  for(int i = 0; i < numUsed ; i++)
  {
    curInt = a[i];
    for(int j = i + 1; j < numUsed;)
    {
      if(a[j] == curInt)
      {
        b[i]++;
        //DEL AND SHIFT ARRAY
        for(int x = j; x < numUsed; x++)
        {
          a[x] = a[x+1];
        }
        numUsed--;
        a[numUsed] = 0;
        j--;
      }
      j++;
    }
  }

}

void swap(int& x, int& y)
{
  int temp = x;
  x = y;
  y = temp;
}

int findIndexOfBig(int a[], int startIndex, int numUsed)
{
  int max = a[startIndex];
  int indexOfMax = startIndex;
  for(int i = startIndex + 1; i < numUsed; i++)
  {
    if(a[i] > max)
    {
      max = a[i];
      indexOfMax = i;
    }
  }
  return indexOfMax;
}

void sort(int a[], int numUsed)
{
  int indexOfNextBig;
  for(int i = 0; i < numUsed; i++)
  {
    indexOfNextBig = findIndexOfBig(a,i,numUsed);
    swap(a[i],a[indexOfNextBig]);
  }
}
