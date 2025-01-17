#include <iostream>
#include <math.h>
using namespace std;

int sqRoot(int value)
{
  int start = 0;
  int end = value;
  int ans = -1;

  int mid = start + (end - start) / 2;

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
  return mid;
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