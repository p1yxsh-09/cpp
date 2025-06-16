#include <iostream>
using namespace std;

void selectionSort(int arr[], int n)
{
  for (int i = 0; i <= n - 2; i++)
  {
    int mini = i;
    for (int j = i; j <= n - 1; j++)
    {
      if (arr[j] < arr[mini])
      {
        mini = j;
      }
    }
    int temp = arr[mini];
    arr[mini] = arr[i];
    arr[i] = temp;
  }
}
void bubbleSort(int arr[], int n)
{
  for (int i = 0; i < n - 1; i++)
  {
    int didSwap = 0;
    for (int j = 0; j < n - i - 1; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        swap(arr[j], arr[j + 1]);
        didSwap = 1;
      }
    }
    if (didSwap == 0)
    {
      break;
    }
    cout << "runs\n";
  }
}
void insertionSort(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    int j = i;
    while (j > 0 && arr[j - 1] > arr[j])
    {
      swap(arr[j], arr[j - 1]);
      j--;
    }
  }
}
int main()
{
  int n;
  cin >> n;

  int arr[100];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  insertionSort(arr, n);
  cout << "Sorted Array using Selection Sort" << endl;
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;
}