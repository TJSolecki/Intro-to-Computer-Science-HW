#include <iostream>
#include <fstream>
#include <sstream>
#include <cstdlib>
using namespace std;

struct Student
{
  string firstName;
  string lastName;
  int quizScores[10] = {0,0,0,0,0,0,0,0,0,0};
  int total = 0;
  double avg;
};

void outputToFile(ofstream& output, Student students[], int numUsed);
void copyOutputToInput(ofstream& output, ifstream& input);

int main()
{
  ifstream input;
  ofstream output;
  stringstream ss;
  Student students[100];
  int numUsed = 0;
  input.open("input.txt");
  string temp;
  int scoreTemp;
  while(input >> students[numUsed].firstName)
  {
    input >> students[numUsed].lastName;
    ss.str("");
    ss.clear();
    getline(input, temp);
    ss << temp;
    int count = 0;
    while(ss >> scoreTemp)
    {
      students[numUsed].quizScores[count] = scoreTemp;
      students[numUsed].total += scoreTemp;
      count++;
    }
    students[numUsed].avg = students[numUsed].total / 10.0;
    numUsed++;
  }
  input.close();
  output.open("output.txt");
  outputToFile(output, students, numUsed);
  output.close();

  output.open("input.txt");
  input.open("output.txt");
  copyOutputToInput(output, input);
  input.close();
  output.close();
  return 0;
}

void copyOutputToInput(ofstream& output, ifstream& input)
{
  string temp;
  while(!input.eof())
  {
    getline(input, temp);
    output << temp << endl;
  }
}

void outputToFile(ofstream& output, Student students[], int numUsed)
{
  output << "Format Info : This file is formatted by first listing the first name of the student on the start of a line followed by a space and then the students last name.\n";
  output << "The last name is then followed by the students 10 quiz socres each sperated by one space. Finally, the last number on each line is the student's average quiz score.\n\n";
  for(int i = 0; i < numUsed; i++)
  {
    output << students[i].firstName << " " << students[i].lastName << " ";
    for(int j = 0; j < 10; j++)
    {
      output << students[i].quizScores[j] << " ";
    }
    output << students[i].avg << endl;
  }
}
