#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

struct StudentInfo{
    string firstName;
    string lastName;
    string classLevel;
    double GPA;
};

int main()
{
    ifstream inputFile;
    string tempString1 = "";
    string tempString2 = "";
    string tempString3 = "";
    double tempDouble;
    int numUsed = 0;

    inputFile.open("studentlist1.txt");
    StudentInfo students[100];
    while(inputFile >> tempString1)
    {
      inputFile >> tempString2 >> tempString3 >> tempDouble;
      students[numUsed] = {tempString1, tempString2, tempString3, tempDouble};
      numUsed++;
    }
    inputFile.close();

    for(int i = 0; i < numUsed; i++)
    {
      cout << "Name = " << students[i].firstName << " " << students[i].lastName << " ";
      cout << "Class level = " << students[i].classLevel << endl;
      cout << "GPA = " << students[i].GPA << endl;
    }
    return 0;
}
