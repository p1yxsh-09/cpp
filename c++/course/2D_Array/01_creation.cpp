#include <iostream>
using namespace std;
int main()
{
  // creation of 2d array

  int arr[3][4];

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
  }

  return 0;
}