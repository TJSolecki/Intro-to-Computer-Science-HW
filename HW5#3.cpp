#include <iostream>
#include <cmath>
using namespace std;

double stddev(double a[], int size);

int main()
{
  double a[] = {1,2,3,4,5,6,7,8,9};
  cout<<"std dev root = "<<stddev(a, 9)<<endl;
  return 0;
}

double stddev(double a[], int size)
{
  double m, s, total;
  //finding m
  for(int i = 0; i < size; i++)
  {
    total += a[i];
  }
  m = total/size;

  //finding s
  for(int j = 0; j < size; j++)
  {
    s += pow((a[j]-m),2);
  }

  //returning std dev root
  return sqrt(s/size);
}
