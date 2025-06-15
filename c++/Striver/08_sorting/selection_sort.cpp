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
int main()
{
  int n;
  cin >> n;

  int arr[100];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  selectionSort(arr, n);
  cout << "Sorted Array using Selection Sort" << endl;
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;
}