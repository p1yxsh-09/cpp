#include <iostream>
using namespace std;

void printRowSum(int arr[][4], int row, int col)
{
  for (int row = 0; row < 3; row++)
  {
    int sum = 0;

    for (int col = 0; col < 4; col++)
    {
      sum += arr[row][col];
    }

    cout << sum << " ";
  }
  cout << endl;
}
int main()
{
  int arr[3][4];

  for (int row = 0; row < 3; row++)
  {
    for (int col = 0; col < 4; col++)
    {
      cin >> arr[row][col];
    }
  }

  for (int row = 0; row < 3; row++)
  {
    for (int col = 0; col < 4; col++)
    {
      cout << arr[row][col] << " ";
    }
    cout << endl;
  }
  cout << "Sum of rows are : ";

  printRowSum(arr, 3, 4);

  return 0;
}