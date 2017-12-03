#include <iostream>

string DisplayUserInput (string word);

int main ()
{
  string sentence = "Test";
  
  DisplayUserInput (sentence);
  
  std:cout << "Hello world!\n" << sentence;
  cin.ignore();
  

}

string DisplayUserInput (string word)
{
  using namespace std;
  
  cout << "Enter a sentence and press enter to continue.\n";
  cin >> word;
  return word;

}
