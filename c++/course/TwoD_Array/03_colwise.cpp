#include <iostream>
using namespace std;

void printColSum(int arr[][4], int row, int col)
{
  for (int col = 0; col < 4; col++)
  {
    int sum = 0;

    for (int row = 0; row < 3; row++)
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

  for (int col = 0; col < 4; col++)
  {
    for (int row = 0; row < 3; row++)
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

  printColSum(arr, 3, 4);

  return 0;
}