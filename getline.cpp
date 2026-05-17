#include <iostream>
#include <string>

using namespace std;

int main ()
{ 
  string name, game;
  cout << "What is your name? ";
  getline(cin, name);
  cout << "Hello " << name << endl;
  cout << "Welcome to C++ programming!" << endl;
  cout << "What is your favorite game to play? " ;
  getline(cin, game);
  cout << game << " is a great game!" << endl;
  return 0;
}