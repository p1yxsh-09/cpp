#include <iostream>
using namespace std;

int pivot(int arr[], int n)
{
  int s = 0;
  int e = n - 1;

  int mid = s + (e - s) / 2;

  while (s < e)
  {
    if (arr[mid] > arr[0])
    {
      s = mid;
    }
    else
    {
      e = mid - 1;
    }
    mid = s + (e - s) / 2;
  }
  return e;
}
int main()
{
  int arr[6] = {7, 9, 10, 1, 2, 3};

  cout << "The Pivot is at index : " << pivot(arr, 6) << endl;
  return 0;
}