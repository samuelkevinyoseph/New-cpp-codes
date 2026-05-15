#include <iostream>
#define PI 3.14159

using namespace std;

main()
{
  cout.precision(5);
  cout.width(8);
  cout.fill('*');
  cout << PI;
}