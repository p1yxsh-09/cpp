#include <iostream>
using namespace std;

void sort123(int *arr, int n)
{
  int i = 0;
  int j = n - 1;
  while (i <= j)
  {
    if (arr[i] == 0)
    {
      i++;
    }
    else if (arr[i] == 1 && arr[j] == 0)
    {
      swap(arr[i], arr[j]);
      i++;
      j--;
      /* code */
    }
    else
    {
      j--;
    }
  }
}
int main()
{
  int n;
  cin >> n;

  int arr[10];

  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  cout << endl;

  cout << "normal" << endl;

  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << ' ';
  }
  cout << endl;

  sort123(arr, n);
  cout << "shorting krenege veeree " << endl;

  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;
}