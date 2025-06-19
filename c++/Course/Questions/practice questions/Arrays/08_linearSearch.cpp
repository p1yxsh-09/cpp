#include <iostream>
using namespace std;

int linearSerach(int arr[], int n, int target)
{

  for (int i = 0; i < n; i++)
  {
    if (arr[i] == target)
    {
      return target;
      break;
    }
  }
  return target;
}

int main()
{
  int n, k;
  cin >> n >> k;

  int arr[100];

  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  int res = linearSerach(arr, n, k);

  cout << res << endl;

  return 0;
}