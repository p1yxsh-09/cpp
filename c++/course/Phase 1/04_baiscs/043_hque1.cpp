#include <iostream>
using namespace std;
int main()
{
  int a, b = 1;

  a = 10;

  if (++a) /*if the statement in if block without any condition then it is considered as true */
  {
    cout << b << endl;
  }
  else
  {
    cout << ++b << endl;
  }
}

//  output result is 1