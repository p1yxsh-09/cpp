#include <iostream>
using namespace std;

void reverse(int arr[], int n)
{
  int i = 0;
  int j = n - 1;
  while (i <= j)
  {
    int temp = arr[j];
    arr[j] = arr[i];
    arr[i] = temp;

    i++;
    j--;
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

  reverse(arr, n);

  cout << "reverse array " << endl;

  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;
}