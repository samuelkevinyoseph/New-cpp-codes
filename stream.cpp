#include <iostream>
#include <string> 
#include <sstream>

using namespace std;  

int main () 
{
  string strval;
  float price=0.0;
  int quantity=0;
  cout << "Enter the price :";
  getline(cin, strval);
  stringstream ss(strval);
  ss >> price;
  cout << "Enter the quantity :";
  getline(cin, strval);
  stringstream ss2(strval);
  ss2 >> quantity;
  cout << "Total price is : " << price*quantity << endl;
  return 0;
}