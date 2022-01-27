#include <iostream>
#include <fstream>
using namespace std;

void sort(int a[], int numUsed);
void swap(int& x, int& y);
int findIndexOfSmallest(int a[], int startIndex, int numUsed);
void compute(ifstream& input1, ifstream& input2, ofstream& output);

int main()
{
  ifstream input1;
  ifstream input2;
  ofstream output;

  input1.open("input1.txt");
  input2.open("input2.txt");
  output.open("output.txt");

  compute(input1, input2, output);

  input1.close();
  input2.close();
  output.close();

  return 0;
}

void compute(ifstream& input1, ifstream& input2, ofstream& output)
{
  int inputNum, numUsed, arr[1000];
  numUsed = 0;
  while(input1>>inputNum)
  {
    arr[numUsed] = inputNum;
    numUsed++;
  }
  while(input2>>inputNum)
  {
    arr[numUsed] = inputNum;
    numUsed++;
  }
  sort(arr, numUsed);
  for(int i = 0; i < numUsed; i++)
  {
    output<<arr[i]<<" ";
  }
}

void swap(int& x, int& y)
{
  int temp = x;
  x = y;
  y = temp;
}

int findIndexOfSmallest(int a[], int startIndex, int numUsed)
{
  int min = a[startIndex];
  int indexOfMin = startIndex;
  for(int i = startIndex + 1; i < numUsed; i++)
  {
    if(a[i] < min)
    {
      min = a[i];
      indexOfMin = i;
    }
  }
  return indexOfMin;
}

void sort(int a[], int numUsed)
{
  int indexOfNextSmall;
  for(int i = 0; i < numUsed; i++)
  {
    indexOfNextSmall = findIndexOfSmallest(a,i,numUsed);
    swap(a[i],a[indexOfNextSmall]);
  }
}
