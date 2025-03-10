#include <iostream>
#include <math.h>
using namespace std;

void sortedArray(int arr[], int size)
{

  for (int i = 0; i < size - 1; i++)
  {
    int minIndex = i;

    for (int j = i + 1; j < size; j++)
    {
      if (arr[minIndex] > arr[j])
      {
        minIndex = j;
      }
    }
    swap(arr[minIndex], arr[i]);
  }
}

void printArray(int arr[], int size)
{

  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }

  cout << endl;
}
int main()
{

  int arr[5] = {13, 14, 18, 9, 2};

  sortedArray(arr, 5);

  printArray(arr, 5);

  return 0;
}

// 21:16