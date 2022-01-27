#include <iostream>
using namespace std;

struct Fraction
{
  int numerator;
  int denominator;
};

void printFraction(Fraction f);
Fraction mult(Fraction f1, Fraction f2);
Fraction add(Fraction f1, Fraction f2);

int main()
{
  Fraction f1 = {2,3};
  Fraction f2 = {3,4};

  printFraction(f1);
  printFraction(mult(f1,f2));
  printFraction(add(f1,f2));

  return 0;
}

void printFraction(Fraction f)
{
  cout<<f.numerator<<"/"<<f.denominator<<endl;
}

Fraction mult(Fraction f1, Fraction f2)
{
  int newNumer = f1.numerator * f2.numerator;
  int newDenom = f1.denominator * f2.denominator;
  Fraction answer = {newNumer, newDenom};
  return answer;
}

Fraction add(Fraction f1, Fraction f2)
{
  if(f1.denominator == f2.denominator)
  {
    int newNumer1 = f1.numerator + f2.numerator;
    Fraction answer1 = {newNumer1, f1.denominator};
    return answer1;
  }
  else
  {
    int newNumer2 = (f1.numerator * f2.denominator) + (f2.numerator * f1.denominator);
    int newDenom2 = f1.denominator * f2.denominator;
    Fraction answer2 = {newNumer2, newDenom2};
    return answer2;
  }
}
