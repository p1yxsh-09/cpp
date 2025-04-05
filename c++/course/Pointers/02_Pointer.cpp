#include <iostream>
using namespace std;
int main()
{
  int a = 10;
  int *pt = &a;

  float price = 10.25;
  float *pt2 = &price;

  cout << pt << endl;
  cout << &a << endl;

  //  we can also print the value of the pointer

  cout << &pt << endl;

  cout << "Pointer of Float" << endl;

  cout << pt2 << endl;
  cout << &price << endl;
  cout << &pt2 << endl;  // address of pointer 
 
  return 0;
}