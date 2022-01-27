#include <iostream>
using namespace std;

string substring(string input, int startIndex, int length);
int findStr(string input, string find);
string encrypt(string in, int shift);

int main()
{
  string str = "Zoo";
  cout<<encrypt(str, 1);
  return 0;
}

string encrypt(string in, int shift)
{
  string output = "";
  for(int i = 0; i < in.length(); i++)
  {
    in[i] = tolower(in[i]);
    in[i] = in[i] + shift;
    if(in[i] > 'z')
    {
      in[i] -= 26;
    }
    output += in[i];
  }
  return output;
}

int findStr(string input, string find)
{
  for(int i = 0; i < input.length(); i++)
  {
    if(substring(input, i, find.length()) == find)
    {
      return i;
    }
  }
  return -1;
}

string substring(string input, int startIndex, int length)
{
  string output = "";
  int temp = 0;
  if(startIndex + length > input.length())
  {
    temp = (startIndex + length) - input.length();
    length -= temp;
  }
  for(int i = startIndex; i < startIndex + length; i++)
  {
    output += input[i];
  }
  return output;
}
