#include <iostream>
using namespace std;

bool isarr(int num[], int size, int key)
{

  for (int i = 0; i < size; i++)
  {
    if (num[i] == key)
    {
      return 1;
    }
  }
  return 0;
}

int main()
{
  int n;
  cin >> n;

  int arr[10] = {1, 2, 3, 4, 56, 7, 8, 9, 10};

  // is there 10 present or not

  bool found = isarr(arr, 10, n);

  if (found)
  {
    cout << "Key is Present " << endl;
  }
  else
  {
    cout << "Key is Absent" << endl;
  }
}