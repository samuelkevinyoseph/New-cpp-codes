#include <iostream>

using namespace std;  

int main()
{
  int count=10;

  cout << count++ << endl; // post-increment: prints 10, then count becomes 11
  cout << ++count << endl;   // pre-increment: count becomes 12, then prints 12
  cout << count-- << endl; // post-decrement: prints 12, then count becomes 11
  cout << --count << endl;   // pre-decrement: count becomes 10, then prints 10
  return 0;   
}