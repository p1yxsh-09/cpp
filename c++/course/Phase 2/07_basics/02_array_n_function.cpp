#include <iostream>
#include <math.h>
using namespace std;

void printArray(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << "Printing Done " << endl;
}
int main()
{

  int first[15] = {2, 7};
  printArray(first, 15);

  int first_size = sizeof(first) / sizeof(int);

  cout << first_size << endl;

  int second[14] = {1, 22, 43, 12, 2423, 22, 34};
  printArray(second, 14);

  int second_size = sizeof(second) / sizeof(int);

  cout << second_size << endl;

  return 0;
}