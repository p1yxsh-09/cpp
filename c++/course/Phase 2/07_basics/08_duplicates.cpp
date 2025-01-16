#include <iostream>
#include <math.h>
using namespace std;

int findduplicate(int arr[], int size)
{
  int ans = 0;
  for (int i = 0; i < size; i++)
  {
    ans = ans ^ arr[i];
  }

  for (int i = 1; i < size; i++)
  {
    ans = ans ^ i;
  }

  return ans;
}
int main()
{
  int a[5] = {4, 2, 4, 3, 1};
  int b[7] = {6, 3, 1, 5, 4, 3, 2};

  cout << "Duplicate Number in array is : " << findduplicate(a, 5) << endl;
  cout << endl;
  cout << "Duplicate Number in array is : " << findduplicate(b, 7) << endl;
  return 0;
}