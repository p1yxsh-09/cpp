#include <iostream>
using namespace std;
int largestRowSum(int arr[][4], int row, int col)
{
  int maxi = INT_MIN;
  int row_Index = -1;
  for (int row = 0; row < 3; row++)
  {
    int sum = 0;

    for (int col = 0; col < 4; col++)
    {
      sum += arr[row][col];
    }
    if (sum > maxi)
    {
      maxi = sum;
      row_Index = row;
    }
  }
  cout << "The Maximum Sum is " << maxi << endl;
  return row_Index;
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

  int n = largestRowSum(arr, 3, 4);

  cout << "The row_index is : " << n << endl;

  return 0;
}