#include <iostream>
#include <fstream>
using namespace std;

struct Student
{
  string firstName;
  string lastName;
  int quizScores[10];
  int total = 0;
  double avg;
};

void outputToFile(ofstream& output, Student students[], int numUsed);

int main()
{
  ifstream input;
  ofstream output;
  Student students[100];
  int numUsed = 0;
  input.open("input.txt");
  while(input >> students[numUsed].firstName)
  {
    input >> students[numUsed].lastName;
    for(int i = 0; i < 10; i++)
    {
      input >> students[numUsed].quizScores[i];
      students[numUsed].total += students[numUsed].quizScores[i];
    }
    students[numUsed].avg = students[numUsed].total / 10.0;
    numUsed++;
  }
  input.close();
  output.open("output.txt");
  outputToFile(output, students, numUsed);
  output.close();
  return 0;
}

void outputToFile(ofstream& output, Student students[], int numUsed)
{
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
