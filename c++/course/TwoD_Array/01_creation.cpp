#include <iostream>
using namespace std;

bool isPresent(int arr[][4], int key, int row, int col)
{
  for (int col = 0; col < 4; col++)
  {
    for (int row = 0; row < 3; row++)
    {
      if (arr[row][col] == key)
      {
        return true;
      }
    }
  }
  return false;
}
int main()
{
  // creation of 2d array
  int arr[3][4];

  // int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12}; // row wise print hota

  // you can even tell this stupid array where to put the elements row wise

  // int arr[3][4] = {{1, 11, 111, 1111}, {2, 22, 222, 2222}, {3, 33, 333, 3333}};

  // if we add input manually then it will run in row wise

  // takin input as row wise
  for (int row = 0; row < 3; row++)
  {
    for (int col = 0; col < 4; col++)
    {
      cin >> arr[row][col];
    }
  }

  // taking input as col wise

  // for (int col = 0; col < 4; col++)
  // {
  //   for (int row = 0; row < 3; row++)
  //   {
  //     cin >> arr[row][col];
  //   }
  // }

  // print the array either in row wise or col wise first loop will always run for row in printing

  for (int row = 0; row < 3; row++)
  {
    for (int col = 0; col < 4; col++)
    {
      cout << arr[row][col] << " ";
    }
    cout << endl;
    cout << endl;
  }

  cout << "Enter the Elemet to search  " << endl;

  int target;
  cout << "Check target : ";
  cin >> target;

  if (isPresent(arr, target, 3, 4))
  {
    cout << "Element Exisit " << endl;
  }
  else
  {
    cout << "Element doesnt Exist" << endl;
  }

  return 0;
}