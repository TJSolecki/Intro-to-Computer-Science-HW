//Lab 4
#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

bool is_even(int n)
{
  if(n%2 == 0)
  {
    return true;
  }
  else
  {
    return false;
  }
}

int evens_between(int n, int m)
{
  int count = 0;
  int temp1, temp2;

  temp1 = n;
  temp2 = m;
  n = n<m?temp1:temp2;
  m = m>n?temp2:temp1;

  for(int i = n; i <= m; i++)
  {
    if(is_even(i))
    {
      count++;
    }
  }
  return count;
}


int main()
{
  cout<<is_even(10)<<endl;
  cout<<is_even(11)<<endl;
  cout<<evens_between(10,22)<<endl;
  cout<<evens_between(20,10)<<endl;

  return 0;
}
