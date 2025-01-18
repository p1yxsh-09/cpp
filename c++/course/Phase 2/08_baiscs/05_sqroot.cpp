#include <iostream>
#include <math.h>
using namespace std;
long long int sqRoot(int value)
{
  int start = 0;
  int end = value;
  long long int ans = -1;

  long long int mid = start + (end - start) / 2;

  while (start <= end)
  {
    if ((mid * mid) > value)
    {
      end = mid - 1;
    }
    else if ((mid * mid) < value)
    {
      ans = mid;
      start = mid + 1;
    }
    else if ((mid * mid) == value)
    {
      return mid;
    }
    mid = start + (end - start) / 2;
  }
  return ans;
}

double morePrecision(int n, int precision, int tempSol)
{
  double factor = 1;
  double ans = tempSol;

  for (int i = 0; i < precision; i++)
  {
    factor = factor / 10;
    for (double j = ans; j * j < n; j = j + factor)
    {
      ans = j;
    }
  }
  return ans;
}

int main()
{
  int n;
  cout << "Enter the Value :";
  cin >> n;

  int tempSol = sqRoot(n);

  cout << "Answer is :" << morePrecision(n, 3, tempSol) << endl;
  return 0;
}