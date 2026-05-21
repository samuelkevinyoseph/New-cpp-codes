#include <iostream>

using namespace std;

int main() {
  int x;
  cout << "Enter an integer: ";
  cin >> x;
  if (cin.good()) {
    if(x > 0) {
      cout << x << " is a positive integer." << endl;
    }
    else if(x < 0) {
      cout << x << " is a negative integer." << endl;
    }
    else {
      cout << "The number is zero." << endl;
    }
  }
  else {
    cout << "Invalid input. Please enter an integer." << endl;
  }
  return 0;
}