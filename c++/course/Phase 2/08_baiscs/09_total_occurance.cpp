#include <iostream>
#include <math.h>
using namespace std;

int firstOcc(int arr[], int size, int key)
{
  int s = 0;
  int e = size - 1;
  int ans = -1;

  int mid = s + (e - s) / 2;

  while (s <= e)
  {
    if (arr[mid] == key)
    {
      ans = mid;
      e = mid - 1;
    }
    else if (arr[mid] > key)
    {
      e = mid - 1;
    }
    else if (arr[mid] < key)
    {
      s = mid + 1;
    }

    mid = s + (e - s) / 2;
  }
  return ans;
}
int lastOcc(int arr[], int size, int key)
{
  int s = 0;
  int e = size - 1;
  int ans = -1;

  int mid = s + (e - s) / 2;

  while (s <= e)
  {
    if (arr[mid] == key)
    {
      ans = mid;
      s = mid + 1;
    }
    else if (arr[mid] > key)
    {
      e = mid - 1;
    }
    else if (arr[mid] < key)
    {
      s = mid + 1;
    }

    mid = s + (e - s) / 2;
  }
  return ans;
}
int main()
{
  int even[10] = {1, 2, 3, 3, 3, 3, 3, 4, 5, 6};
  int target = 3;
  int totalocc = lastOcc(even, 10, 3) - firstOcc(even, 10, 3) + 1;

  cout << "The total occurance of :" << target << " is :" << totalocc << endl;
  cout << "The first occurance of :" << target << " is :" << firstOcc(even, 10, 3) << endl;
  cout << "The last occurance of :" << target << " is :" << lastOcc(even, 10, 3) << endl;
  return 0;
}