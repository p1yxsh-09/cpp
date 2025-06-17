#include <iostream>
using namespace std;

void twoPointer(int l, int r, int arr[])
{
  if (l >= r)
  {
    return;
  }
  swap(arr[l], arr[r]);
  twoPointer(l + 1, r - 1, arr);
}

void onePointer(int i, int n, int arr[])
{
  if (i >= n / 2)
  {
    return;
  }
  swap(arr[i], arr[n - i - 1]);
  onePointer(i + 1, n, arr);
}
int main()
{
  int arr[5] = {1, 2, 3, 4, 5};
  int n = sizeof(arr) / sizeof(arr[0]);
  cout << "Normal arry " << endl;
  for (int i = 0; i < 5; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;

  twoPointer(0, n - 1, arr);

  cout << "Reverse array using recursion and two pointer approach" << endl;

  for (int i = 0; i < 5; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;

  onePointer(0, n, arr);

  cout << "Reverse array using recursion and single pointer approach" << endl;

  for (int i = 0; i < 5; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;
}