#include <iostream>
using namespace std;
int binarySearch(int arr[], int size, int key)
{
  int start = 0;
  int end = size - 1;

  int mid = (start + (end - start / 2));

  while (start <= end)
  {
    if (arr[mid] == key)
    {
      return mid;
    }

    if (key > arr[mid])
    {
      start = mid + 1;
    }
    else
    {
      end = mid - 1;
    }

    mid = (start + (end - start / 2));
  }
  return -1;
}
int main()
{
  int even[8] = {2, 4, 6, 8, 10, 12, 14, 16};
  int odd[5] = {2, 4, 6, 8, 10};

  int evenIndex = binarySearch(even, 8, 12);
  int oddIndex = binarySearch(odd, 5, 10);

  cout << "Index of 12 is :" << evenIndex << endl;
  cout << "Index of 10 is :" << oddIndex << endl;

  return 0;
} 