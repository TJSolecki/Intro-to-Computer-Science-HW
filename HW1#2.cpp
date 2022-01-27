#include <iostream>
using namespace std;

int main()
{
  const double sodaPercentSweetener = 0.001;

  //Defining nessasary variables
  double amtToKillMouse, weightOfMouse, weightOfDieter, amtInEachSoda,
  amtToKillPerOunce, amtToKillDieter,amtOfSodaToKillMouse;
  int amtOfSodasSafeToDrink;

  //Getting the user to initialize the nessasary variables
  cout<<"Enter the amount of sodas needed to kill a mouse.\n";
  cin>>amtOfSodaToKillMouse;
  cout<<"Enter the weight of the mouse in ounces.\n";
  cin>>weightOfMouse;
  cout<<"Enter the weight when you will give up soda in ounces.\n";
  cin>>weightOfDieter;

  //Doing the calulations to see how many sodas the dieter can drink before dying
  amtToKillMouse = amtOfSodaToKillMouse * sodaPercentSweetener;
  amtToKillPerOunce = amtToKillMouse / weightOfMouse;
  amtToKillDieter = weightOfDieter * amtToKillPerOunce;
  amtOfSodasSafeToDrink = amtToKillDieter / sodaPercentSweetener;


  //Telling the user the maximum amount of sodas they can safely drink
  cout<<"You can drink a maximum of "<<amtOfSodasSafeToDrink<<" sodas before dying.\n";

  return 0;

}
