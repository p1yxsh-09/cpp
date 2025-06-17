#include <iostream>
using namespace std;

// int sum(int x, int y)
// {
//   return x + y;
// }

// pass by value

void doSomething(int &x)
{
  cout << x << endl;
  x += 5;
  cout << x << endl;
  x += 5;
  cout << x << endl;
}

// int main()
// {
//   int x = 10;
//   // int y;
//   // cin >> x >> y;
//   // int res = sum(x, y);
//   // cout << res << endl;

//   // before funtion

//   doSomething(x);

//   cout << x << endl; // here uski sirf copy gayi
//   return 0;
// }

//  if we want to change in the original self for that we need to send the address

// for array and we know that array is always passed by refernce

void doSomethingForArray(int arr[], int size)
{
  arr[0] += 100;
  cout << "Value inside Fucntion : " << arr[0] << endl;
}

void printArr(int arr[], int size)

{
  cout << "Printing The Array" << endl;
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}
int main()
{
  int n;
  cin >> n;

  int arr[1000];

  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  cout << "Before fuinction called " << arr[0] << endl;

  doSomethingForArray(arr, 5);
  printArr(arr, 5);

  cout << "after function called " << arr[0] << endl;
}