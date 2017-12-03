#include <iostream>

string Display (string word);

int main ()
{
  string sentence = "Test";
  
  Display (sentence);
  
  std:cout << "Hello world!\n" << sentence;
  cin.ignore();
  

}

string Display (string word)
{
  using namespace std;
  
  cout << "Enter a sentence and press enter to continue.\n";
  cin >> word;
  return word;

}
