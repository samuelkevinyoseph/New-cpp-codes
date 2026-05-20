#include <iostream>

using namespace std;

int main()
{
  int x;

  while(true) {
    cout << "\nEnter a number :";
    cin >> x;
    if(cin.good()){
      cin.ignore(1000, '\n'); // clear the input buffer
      break;
    }
    cin.clear(); // clear the error state
    cout << "Invalid input. Please enter a valid number." << endl;
    cin.ignore(1000, '\n'); // clear the input buffer
  }
  cout << "You entered: " << x << endl;
  return 0;
}