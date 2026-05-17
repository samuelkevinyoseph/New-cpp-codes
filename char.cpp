#include <iostream>
#include <cstring>

using namespace std;

int main ()
{
  char lang[10] = {'E','n','g','l','e','s','h','\0'};
  char secondlang[] = "Spanish";
  char languages[30];
  int length;

  //print
  cout << "First language:\t" << lang << endl;
  cout << "Second language:\t" << secondlang << endl;

  //copy
  strcpy(languages,secondlang);
  cout << "copied language:\t" << languages << endl;

  //concat
  strcat(lang,secondlang);
  cout << "Combined language:\t" << lang << endl;

  //length
  length = strlen(lang);
  cout << "Length:\t" << length << endl;

  return 0;
}