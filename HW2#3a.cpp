#include <iostream>
using namespace std;

int main()
{
  for(int i = 0; i < 5; i++)
  {
    cout<<"start ";
    for(int l = 0; l < 8; l++)
    {
      if(l<=i)
      {
        cout<<"o";
      }
      else
      {
        cout<<"x";
      }
    }
    cout<<" end"<<endl;
  }

  return 0;
}
