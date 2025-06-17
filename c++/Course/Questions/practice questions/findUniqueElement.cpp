#include <iostream>
using namespace std;
int findUnique(int *arr, int size)
{
  int unique = 0;
  for (int i = 0; i < size; i++)
  {
    unique ^= arr[i];
  }
  return unique;
}
int main()
{
  int arr[7] = {2, 3, 1, 6, 3, 6, 2};
  int n = 7;

  int res = findUnique(arr, n);

  cout << "UNique NUmber is : " << res << endl;
}