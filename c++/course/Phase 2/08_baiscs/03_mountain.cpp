#include <iostream>
#include <math.h>
using namespace std;

int peakIndex(int arr[], int size)
{
  int s = 0;
  int e = size - 1;

  int mid = s + (e - s) / 2;

  while (s < e)
  {
    if (arr[mid] < arr[mid + 1])
    {
      s = mid + 1;
    }
    else if (arr[mid] > arr[mid + 1])
    {
      e = mid;
    }
    mid = s + (e - s) / 2;
  }
  return s;
}
int main()
{
  int mountain[5] = {3, 4, 5, 6, 1};

  int peakValue = peakIndex(mountain, 5);

  cout << "The Peak Index Value of Mountain is  : " << peakValue << endl;
  return 0;
}
