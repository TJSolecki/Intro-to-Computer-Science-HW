#include <iostream>
#include <string>
using namespace std;

int main()
{
  string input;
  char letters[26];
  int numLetters[26];
  int count = 0;
  int numUsed = 0;
  int words = 0;
  cout<<"Enter a sentance:\n";
  getline(cin, input);
  cout<<input<<endl;
  for(int i = 0; i < input.length(); i++)
  {
    input[i] = tolower(input[i]);
    if((input[i] >= 'a' && input[i] <= 'z') && (ispunct(input[i+1]) || input[i+1] == ' '))
    {
      words++;
    }
  }

  char curChar;
  for(int i = 0; i < input.length() ; i++)
  {
    if(input[i] >= 'a' && input[i] <= 'z')
    {
      curChar = input[i];
      letters[count] = curChar;
      numLetters[count] = 1;
      for(int j = i + 1; j < input.length(); j++)
      {
        if(input[j] == curChar)
        {
          numLetters[count]++;
          input[j] = ' ';
        }
      }
      count++;
      numUsed++;
    }
  }

  cout<<words<<" words\n";
  for(int i = 0; i < numUsed; i++)
  {
    cout<<numLetters[i]<<" "<<letters[i]<<endl;
  }
  return 0;
}
