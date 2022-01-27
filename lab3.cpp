#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  double g, theta, v, y0, x, y;
  g = 9.81;
  cout<<"Enter the angle at which the projectile is launched."<<endl;
  cin>>theta;
  cout<<"Enter the speed at which the projectile is lauched in m/s."<<endl;
  cin>>v;
  cout<<"Enter the initial height of the projectile."<<endl;
  cin>>y0;

  x = 0;
  y = y0 + x * tan(theta) - ((g*pow(x,2))/(2* pow((v*cos(theta)), 2)));
  for(x=0;y>=0;)
  {
    cout<<"At x = "<<x<<",y = "<<y<<endl;
    x++;
    y = y0 + x * tan(theta) - ((g*pow(x,2))/(2* pow((v*cos(theta)), 2)));
  }
  return 0;
}
