#include <iostream>

std::string DisplayUserInput (std::string word);

int main ()
{
  std::string sentence = "Test";

  sentence = DisplayUserInput (sentence);

  std::cout << "Hello world!\ " << sentence;
  std::cin.ignore();

  return 0;
}

std::string DisplayUserInput (std::string word)
{
  using namespace std;

  cout << "Enter a sentence and press enter to continue.\n";
  getline(cin, word); // gets multiple words instead of one word. I.e accounts for space.
  return word;

}

