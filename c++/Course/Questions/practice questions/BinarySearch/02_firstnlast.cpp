#include <iostream>
using namespace std;

int firstOcc(int arr[], int n, int key)
{
  int s = 0;
  int e = n - 1;
  int mid = s + (e - s) / 2;
  int ans = -1;

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
    else
    {
      s = mid + 1;
    }
    mid = s + (e - s) / 2;
  }
  return ans;
}
int lastOcc(int arr[], int n, int key)
{
  int s = 0;
  int e = n - 1;
  int mid = s + (e - s) / 2;
  int ans = -1;

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
    else
    {
      s = mid + 1;
    }
    mid = s + (e - s) / 2;
  }
  return ans;
}
int main()
{
  int key = 3;
  int n = 5;
  int arr[5] = {1, 2, 3, 3, 3};

  cout << "The First Occ of 3 is : " << firstOcc(arr, 5, 3) << endl;
  cout << "The last Occ  of 3 is : " << lastOcc(arr, 5, 3) << endl;
  return 0;
}