#include <iostream>
#include <math.h>
using namespace std;

void bubbleSort(int arr[], int size)
{

  for (int i = 1; i < size; i++)
  {
    bool swapped = false;
    for (int j = 0; j < size - i; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        swap(arr[j], arr[j + 1]);
        swapped = true;
      }
    }
    if (swapped == false)
    {
      break;
    }
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

  int arr[6] = {13, 14, 10, 15, 11, 9};

  bubbleSort(arr, 6);
  printArray(arr, 6);
}
