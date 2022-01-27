#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>
#include <sstream>
using namespace std;

void fixErrors(ifstream& input, ofstream& output, string lines[], int& numUsed);

int main()
{
  ifstream input;
  ofstream output;
  input.open("inputHW#4.txt");
  output.open("outputHW#4.txt");
  string lines[100];
  int numUsed = 0;

  fixErrors(input, output, lines, numUsed);

  input.close();
  output.close();

  return 0;
}

void fixErrors(ifstream& input, ofstream& output, string lines[], int& numUsed)
{
  string temp, temp2 = "", temp3 = "";
  stringstream ss;
  while(!input.eof())
  {
    temp2 = "";
    temp3 = "";
    getline(input, temp);
    ss.str("");
    ss.clear();
    ss << temp;
    while(ss >> temp2)
    {
      if(temp2 == "cin<<")
      {
        temp2 = "cin >>";
      }
      if(temp2 == "cout>>")
      {
        temp2 = "cout <<";
      }
      temp3 += temp2 + " ";
    }

    int index = temp3.find("cin <<");
    if(index != -1)
    {
      temp3.erase(index, 6);
      temp3.insert(index, "cin >>");
    }
    index = temp3.find("cout >>");
    if(index != -1)
    {
      temp3.erase(index, 7);
      temp3.insert(index, "cout <<");
    }
    lines[numUsed] = temp3;
    numUsed++;
  }
  for(int i = 0; i < numUsed; i++)
  {
    output << lines[i] << endl;
  }
}
