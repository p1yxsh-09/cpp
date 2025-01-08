#include <iostream>
#include <math.h>
using namespace std;
int main()
{
  int num = 2;
  char ch = '1';

  cout << endl;
  switch (ch)
  {

  case '0':
    cout << "FIRST" << endl;
    break;

  case '1':
    switch (num)
    {
    case 2:
      cout << "Value of num is " << num << endl;
    }
    cout << "Second" << endl;
    break;

  default:
    cout << "It Is Default Case" << endl;
  }
}