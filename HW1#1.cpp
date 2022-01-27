#include <iostream>
using namespace std;

int main()
{
  double gallons, liters;

  cout<<"Enter the amount of gallons you would like to convert to liters.\n";
  cin>>gallons;

  liters = gallons * 3.78541;

  cout<<gallons<<" gallons is equal to "<<liters<<" liters."<<endl;
  return 0;
}
