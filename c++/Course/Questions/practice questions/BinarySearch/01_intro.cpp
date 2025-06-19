#include <iostream>
using namespace std;

int bs(int arr[], int n, int key)
{
  int s = 0;
  int e = n - 1;
  int mid = s + (e - s) / 2;
  while (s <= e)
  {
    if (arr[mid] == key)
    {
      return mid;
    }
    else if (key > arr[mid])
    {
      s = mid + 1;
    }
    else
    { // key < arr[mid]
      e = mid - 1;
    }

    mid = s + (e - s) / 2;
  }
  return -1;
}
int main()
{
  int n = 10;
  int arr[10] = {1, 2, 3, 4, 11, 14, 15, 16};

  int res = bs(arr, n, 14);

  cout << "index of 14 is  " << res << endl;

  return 0;
}