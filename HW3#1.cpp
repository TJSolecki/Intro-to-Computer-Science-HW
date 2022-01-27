#include <iostream>
#include <cmath>
using namespace std;

const double G = 6.673 * pow(10, -8);

double gravAttact(double m1, double m2, double d);

int main()
{
  double mm1, mm2, dd;
  bool again = false;
  do
  {
  cout<<"Enter the mass of the first object in grams"<<endl;
  cin>>mm1;
  cout<<"Enter the mass of the second object in grams"<<endl;
  cin>>mm2;
  cout<<"Enter the distance between the two objects in cm"<<endl;
  cin>>dd;

  cout<<"The gravitational atractive force between the two objects is "<<gravAttact(mm1,mm2,dd)<<" dynes.\nOne dyne is equal to g * cm/sec^2.\n"<<endl;

  cout<<"Would you like to run the program again?\nIf so enter 1 if not enter 0."<<endl;
  cin>>again;
}while(again == true);
  return 0;
}

double gravAttact(double m1, double m2, double d)
{
  return (G * m1 * m2) / pow(d, 2);
}
