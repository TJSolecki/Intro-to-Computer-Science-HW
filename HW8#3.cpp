#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
using namespace std;

void getInput(istream& input, string words[], int& numUsed);

int main()
{
  ifstream input;
  string words[1000];
  int numUsed = 0;
  input.open("inputHW#3.txt");
  if(input.fail())
  {
    cout << "The file failed to open\n";
    exit(1);
  }
  getInput(input, words, numUsed);
  input.close();
  double total = 0;
  for(int i = 0; i < numUsed; i++)
  {
    total += words[i].length();
  }
  double avg = total / numUsed;
  cout << "The average number of characters per word is " << avg << ".\n";
  return 0;
}

void getInput(istream& input, string words[], int& numUsed)
{
  string temp;
  while(input >> temp)
  {
    if(ispunct(temp[temp.length() - 1]))
    {
      temp.erase(temp.length() - 1, 1);
    }
    words[numUsed] = temp;
    numUsed++;
  }
}
