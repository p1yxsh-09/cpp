#include <iostream>
using namespace std;

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
  bubbleSort(arr, n);
  cout << "Sorted Array using Selection Sort" << endl;
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
  return 0;
}