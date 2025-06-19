#include <iostream>
using namespace std;

void swapAlternate(int arr[], int n)
{
  for (int i = 0; i < n; i += 2)
  {
    if (i + 1 < n)
    {
      int temp = arr[i + 1];
      arr[i + 1] = arr[i];
      arr[i] = temp;
    }
  }
}
int main()
{
  int arr[6] = {1, 2, 3, 4, 5, 6};
  int n = 6;
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;

  swapAlternate(arr, n);
  cout << "Swapped" << endl;
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;
}