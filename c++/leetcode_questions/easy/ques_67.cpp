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

int main()
{
  int value;
  cout << "Enter the value to find its square root: ";
  cin >> value;

  int squareRoot = sqRoot(value);
  cout << "The square root of " << value << " is approximately: " << squareRoot << endl;
  return 0;
}