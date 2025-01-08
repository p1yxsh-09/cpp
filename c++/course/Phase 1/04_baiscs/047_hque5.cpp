#include <iostream>
using namespace std;
int main()
{
  int a = 1;
  int b = a++;
  int c = ++a;

  cout << b << endl;
  cout << c << endl;
}

/*
  output
  b= 1;
  c= 3
*/