#include <iostream>
#include <cmath>
using namespace std;

void areaAndPerimeter(double a, double b, double c, double& area, double& perimeter);

int main()
{
  double area, perimeter, a, b, c;

  cout<<"Enter the length of side a\n";
  cin>>a;
  cout<<"Enter the length of side b\n";
  cin>>b;
  cout<<"Enter the length of side c\n";
  cin>>c;

  areaAndPerimeter(a, b, c, area, perimeter);

  cout<<"Area = "<<area<<", Perimeter = "<<perimeter<<endl;
  return 0;
}

void areaAndPerimeter(double a, double b, double c, double& area, double& perimeter)
{
  perimeter = a+b+c;
  double s = perimeter/2;
  area = sqrt(s*(s-a)*(s-b)*(s-c));
}
