#include <iostream>
#include <cmath>
using namespace std;

void doubleAndMax(double& avg, double& max);

int main()
{
  double avg, max;
  doubleAndMax(avg, max);
  cout<<"avg = "<<avg<<", max = "<<max<<endl;
  return 0;
}

void doubleAndMax(double& avg2, double& max2)
{
  double val = 0, total = 0, count = 0, max = -1;
  cout<<"Please enter a value, or -1 when you're done."<<endl;
  cin>>val;
  while(val!=-1){
      total+=val;
      if(val>max)
          max = val;
      count++;
      cout<<"Please enter a value, or -1 when you're done."<<endl;
      cin>>val;
  }
  avg2 = total/ count;
  max2 = max;
}
