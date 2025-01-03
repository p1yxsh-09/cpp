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
      return 0;
    }
  }
  return 1;
}

int main()
{

  int n;

  cin >> n;

  if (isprime(n))
  {
    cout << "Is a Prime Number" << endl;
  }
  else
  {
    cout << "Not a Prime Number " << endl;
  }

  return 0;
}