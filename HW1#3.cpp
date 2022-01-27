#include <iostream>
using namespace std;

int main()
{
  double amtOfMets, weightInLb, minutesSpent, weightInKg, calBurnedPerMin, calBurnedTotal;

  cout<<"Enter your weight in pounds.\n";
  cin>>weightInLb;
  cout<<"Enter the amount of METs for the activity.\n";
  cin>>amtOfMets;
  cout<<"Enter the amount of minutes spent doing the activity.\n";
  cin>>minutesSpent;

  weightInKg = weightInLb / 2.2;
  calBurnedPerMin = 0.0175 * amtOfMets * weightInKg;
  calBurnedTotal = calBurnedPerMin * minutesSpent;

  cout<<"Total number of calories burned = "<<calBurnedTotal;

  return 0;

}
