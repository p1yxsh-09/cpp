#include <iostream>
#include <math.h>
using namespace std;

void selectionSort(int arr[], int size)
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
  int size;

  cout << "Enter the size : ";

  cin >> size;

  int arr[100];

  cout << "Enter the array Elements :";

  for (int i = 0; i < size; i++)
  {
    cin >> arr[i];
  }
  selectionSort(arr, size);

  printArray(arr, size);

  return 0;
}