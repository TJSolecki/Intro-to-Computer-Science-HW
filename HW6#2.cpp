#include <iostream>
#include <cstring>
#include <string>
using namespace std;

void removePrev(int index, char arr[]);

int main()
{
  string string1 = "";
  char input[100];
  char prevChar, curChar;
  bool period = false;
  int i = 0;
  cout<<"Enter your text.\n";
  do
  {
    cin.get(curChar);
    input[i] = curChar;
    i++;
  } while(curChar != '.' && i < 100);
  string1 = input;
  string output = "";
  for(int i = 0; i < string1.length(); i++)
  {
    if(i == 0)
    {
      string1[i] = toupper(string1[i]);
    }
    else
    {
      string1[i] = tolower(string1[i]);
    }
    if(ispunct(string1[i]) && string1[i - 1] == ' ')
    {
      output.erase(output.length() - 1);
    }
    if((string1[i] == ' ' && prevChar == ' ') || string1[i] == '\n')
    {

    }
    else
    {
      output += string1[i];
    }

    prevChar = string1[i];
  }
  bool end = false;
  for(int j = 0; j < output.length(); j++)
  {
    if(end == false)
      cout<<output[j];
    if(output[j] == '.')
      end = true;
  }
  return 0;
}
