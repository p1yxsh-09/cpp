#include <iostream>
using namespace std;

void reverse(int num[], int size)
{

  int start = 0;
  int end = size - 1;

  while (start <= end)
  {
    swap(num[start], num[end]);
    start++;
    end--;
  }
}

void printarr(int num[], int size)
{

  for (int i = 0; i < size; i++)
  {
    cout << num[i] << " ";
  }
  cout << endl;
}

int main()
{
  int arr[6] = {1, 2, 3, 4, 5, 6};
  int brr[5] = {1, 2, 3, 4, 5};

  reverse(arr, 6);
  reverse(brr, 5);

  printarr(arr, 6);
  printarr(brr, 5);
  return 0;
}