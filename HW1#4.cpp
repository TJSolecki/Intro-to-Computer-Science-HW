#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  double a, b, c;  //d in double was capitalized
  b = 2;   //was 2=b; insted of b=2;

  cout<<"Enter length of hypotenuse"<<endl;
  cin>>c; //endl cant be used in cin
  cout<<"Enter length of a side"<<endl; //first set of << were facing the wrong way (>>)
  cin>>a;

  double intermediate = pow(c, 2) - pow(a, 2);
  b = sqrt(intermediate);
  cout<<"Length of other side is:"<<b<<endl; //missing "<<" between the end of the string and b and endline should be endl

  return 0;
}
