// we will solve this  by optimised euclid approach

#include <iostream>
#include <math.h>
using namespace std;

int gcd(int a, int b)
{

  while (a > 0 && b > 0)
  {
    if (a > b)
    {
      a = a % b;
    }
    else
    {
      b = b % a;
    }
  }

  if (a == 0)
    return b;

  return a;
}
int lcm(int a, int b)
{
  int g = gcd(a, b);

  int l = (a * b) / g;

  return l;
}
int main()
{
  cout << gcd(20, 28) << endl;

  cout << lcm(20, 28) << endl;

  return 0;
}