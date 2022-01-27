#include <iostream>
#include <cmath>
using namespace std;

double calcWindChill(double v, double t);

int main()
{
  double vel, temp;
  cout<<"Enter the wind speed in m/sec"<<endl;
  cin>>vel;
  cout<<"Enter a temputure in celsius that is less than or equal to 10 degrees celsius."<<endl;
  cin>>temp;
  while(!(temp<=10))
  {
    cout<<"The temputure you entered was invalid.\nPlease enter a temputure in celsius that is less than or equal to 10.\n";
    cin>>temp;
  }

  cout<<"The wind chill is "<<calcWindChill(vel, temp)<<" degrees celsius.\n";
  return 0;
}

double calcWindChill(double v, double t)
{
  return (33 - (((10 * sqrt(v) - v + 10.5) * (33 - t)) / 23.1));
}
