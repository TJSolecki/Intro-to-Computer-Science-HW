#include <iostream>
using namespace std;

int findMin(int arr[], int size);

int main()
{
  int arr[] = {10,20,30,40};
  cout<<findMin(arr, 4)<<endl;
  return 0;
}

int findMin(int arr[], int size)
{
  int min = arr[0];
  for(int i = 0; i < size; i++)
  {
    min = arr[i]<min?arr[i]:min;
  }
  return min;
}
