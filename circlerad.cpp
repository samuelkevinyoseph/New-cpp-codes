#include <iostream>

using namespace std;

int main()
{
  float radius;
  const float PI = 3.14159;

  cout << "Enter the radius of the circle: ";
  cin >> radius;
  if (cin.good()) {
    float area = PI * radius * radius;
    cout << "The area of the circle is: " << area << endl;
  } else {
    cout << "Invalid input. Please enter a valid number for the radius." << endl;
  }
  return 0;
}