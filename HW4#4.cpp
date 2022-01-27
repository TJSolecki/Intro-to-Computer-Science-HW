#include <iostream>
using namespace std;

double convertToMPH(int min, int sec);
double convertToMPH(double kph);

int main()
{
  int kphOrMileTime, min, sec;
  double kph;
  cout<<"press 1 if you would like to convert kph to mph\nor press 2 if you would like to convert your mile time to mph\n";
  cin>>kphOrMileTime;
  if(kphOrMileTime == 1)
  {
    cout<<"enter kph\n";
    cin>>kph;
    cout<<kph<<" kph equals "<<convertToMPH(kph)<<" mph\n";
  }
  else
  {
    cout<<"enter min\n";
    cin>>min;
    cout<<"enter sec\n";
    cin>>sec;
    cout<<"a "<<min<<" minute and "<<sec<<" second mile means you were running at "<<convertToMPH(min, sec)<<"mph\n";
  }
  return 0;
}

double convertToMPH(int min, int sec)
{
  double minPlusSec = min + (((double)sec)/60.0);
  return 60.0/minPlusSec;
}

double convertToMPH(double kph)
{
  return kph / 1.61;
}
