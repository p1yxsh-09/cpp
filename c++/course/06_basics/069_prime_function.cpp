#include <iostream>
#include <math.h>
using namespace std;

bool isprime(int n)
{
  bool isPrime = 1;
  for (int i = 2; i < n; i++)
  {
    if (n % i == 0)
    {
      isPrime = 0;
      break;
    }
  }
}
int main()
{

  int n;

  cin >> n;

  return 0;
}