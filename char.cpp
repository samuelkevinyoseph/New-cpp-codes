#include <iostream>
#include <cstring>

using namespace std;

int main ()
{
  char lang[10] = {'E','n','g','l','s','h','\0'};
  char secondlang[] = "Spanish";
  char languages[30];
  int length;

  cout << "First language:\t" << lang << endl;
  cout << "Second language:\t" << secondlang << endl;

  strcpy(languages,secondlang);
  cout << "copied language:\t" << languages << endl;

  return 0;
}