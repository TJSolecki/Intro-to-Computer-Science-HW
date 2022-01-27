#include <iostream>
using namespace std;

void inputFeet(int& feet, double& in);
void inputMeters(int& meters, double& cm);
void feetToMeters(int feet, double in, int& meters, double& cm);
void metersToFeet(int meters, double cm, int& feet, double& in);
void outputFeetToMeters(int feet, double in, int meters, double cm);
void outputMetersToFeet(int meters, double cm, int feet, double in);

void fullFeetToMeters();
void fullMetersToFeet();

void inputPounds(int& pounds, double& ounces);
void inputKilos(int& kilos, double& grams);
void poundsToKilos(int pounds, double ounces, int& kilos, double& grams);
void kilosToPounds(int kilos, double grams, int& pounds, double& ounces);
void outputPoundsToKilos(int pounds, double ounces, int kilos, double grams);
void outputKilosToPounds(int kilos, double grams, int pounds, double ounces);

void fullPoundsToKilos();
void fullKilosToPounds();

int main()
{
  bool again = true;
  int whichMetric, poundsOrKilos, feetOrMeters;
  do
  {
    cout<<"Welcome to the conversion program.\n\nEnter 1 if you would like to convert weights or 2 if you would like to convert lengths\n";
    cin>>whichMetric;

    if(whichMetric == 1) //for weights
    {
      cout<<"If you would like to convert pounds to kilograms enter 1 or if you would like to convert kilograms to pounds enter 2\n";
      cin>>poundsOrKilos;

      if(poundsOrKilos == 1)
      {
        fullPoundsToKilos();
      }
      else
      {
        fullKilosToPounds();
      }
    }
    else //for lengths
    {
      cout<<"If you would like to convert feet to meters enter 1 or if you would like to convert meters to feet enter 2\n";
      cin>>feetOrMeters;

      if(feetOrMeters == 1)
      {
        fullFeetToMeters();
      }
      else
      {
        fullMetersToFeet();
      }
    }

    cout<<"Enter 0 if you would like to stop the program.\nEnter 1 if you would like to run the program again.\n";
    cin>>again;
  }while(again == true);
  return 0;
}

void inputKilos(int& kilos, double& grams)
{
  cout<<"enter the amount of kilograms\n";
  cin>>kilos;
  cout<<"enter amount of grams\n";
  cin>>grams;
}

void kilosToPounds(int kilos, double grams, int& pounds, double& ounces)
{
  double totalGrams = grams + (kilos * 1000);
  double totalOunces = totalGrams / 28.3495;
  pounds = totalOunces/16;
  ounces = totalOunces - (pounds * 16);
}

void outputKilosToPounds(int kilos, double grams, int pounds, double ounces)
{
  cout<<kilos<<" kilogram(s) and "<<grams<<" gram(s) is equal to "<<pounds<<" pound(s) and "<<ounces<<" ounce(s)\n";
}

void fullKilosToPounds()
{
  int pounds, kilos;
  double ounces, grams;
  inputKilos(kilos, grams);
  kilosToPounds(kilos, grams, pounds, ounces);
  outputKilosToPounds(kilos, grams, pounds, ounces);
}

void inputPounds(int& pounds, double& ounces)
{
  cout<<"enter the amount of pounds\n";
  cin>>pounds;
  cout<<"enter amount of ounces\n";
  cin>>ounces;
}

void poundsToKilos(int pounds, double ounces, int& kilos, double& grams)
{
  double totalOunces = ounces + (pounds * 16);
  double totalGrams = totalOunces * 28.3495;
  kilos = totalGrams/1000;
  grams = totalGrams - (kilos * 1000);
}

void outputPoundsToKilos(int pounds, double ounces, int kilos, double grams)
{
  cout<<pounds<<" pound(s) and "<<ounces<<" ounce(s) is equal to "<<kilos<<" kilogram(s) and "<<grams<<" gram(s)\n";
}

void fullPoundsToKilos()
{
  int pounds, kilos;
  double ounces, grams;
  inputPounds(pounds, ounces);
  poundsToKilos(pounds, ounces, kilos, grams);
  outputPoundsToKilos(pounds, ounces, kilos, grams);
}

void inputMeters(int& meters, double& cm)
{
  cout<<"enter the amount of meters\n";
  cin>>meters;
  cout<<"enter amount of cm\n";
  cin>>cm;
}

void metersToFeet(int meters, double cm, int& feet, double& in)
{
  double totalCm = cm + (meters * 100);
  double totalInch = totalCm * 0.393701;
  feet = totalInch/12;
  in = totalInch - (feet * 12);
}

void outputMetersToFeet(int meters, double cm, int feet, double in)
{
  cout<<meters<<" meter(s) and "<<cm<<" cm is equal to "<<feet<<" feet and "<<in<<" in\n";
}

void fullMetersToFeet()
{
  int feet, meters;
  double in, cm;
  inputMeters(meters, cm);
  metersToFeet(meters, cm, feet, in);
  outputMetersToFeet(meters, cm, feet, in);
}

void inputFeet(int& feet, double& in)
{
  cout<<"enter the amount of feet\n";
  cin>>feet;
  cout<<"enter amount of inches\n";
  cin>>in;
}

void feetToMeters(int feet, double in, int& meters, double& cm)
{
  double totalInch = in + feet*12;
  double totalCm = totalInch * 2.54;
  meters = totalCm/100;
  cm = totalCm - (meters * 100);
}

void outputFeetToMeters(int feet, double in, int meters, double cm)
{
  cout<<feet<<" feet and "<<in<<" in is equal to "<<meters<<" meter(s) and "<<cm<<" cm\n";
}

void fullFeetToMeters()
{
  int feet, meters;
  double in, cm;
  inputFeet(feet, in);
  feetToMeters(feet, in, meters, cm);
  outputFeetToMeters(feet, in, meters, cm);
}
