#include <iostream>
using namespace std;
int main()
{
  string p1, p2;
  cout<<"Enter genotype for the first parent \n";
  cin>>p1;
  cout<<"Enter genotype for the second parent \n";
  cin>>p2;

  if(p1 == "GG" && p2 =="GG")
  {
    cout<<"100% GG";
  }
  else if(p1 == "gg" && p2 =="gg")
  {
    cout<<"100% gg";
  }
  else if((p1 == "GG" && p2 == "Gg")||(p2 == "GG" && p1 == "Gg"))
  {
    cout<<"50% GG, 50% Gg";
  }
  else if((p1 == "gg" && p2 == "GG")||(p2 == "gg" && p1 == "GG"))
  {
    cout<<"100% Gg";
  }
  else if(p1 == "Gg" && p2 == "Gg")
  {
    cout<<"50% Gg, 25% gg, 25% Gg";
  }
  else if((p1 == "Gg" && p2 == "gg")||(p2 == "Gg" && p1 == "gg"))
  {
    cout<<"50% Gg, 50% gg";
  }
    return 0;
}
