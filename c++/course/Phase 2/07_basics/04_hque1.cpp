#include <iostream>
using namespace std;

int sumarr(int num[], int size)
{
  int total = 0;

  for (int i = 0; i < size; i++)
  {
    total = total + num[i];
  }

  return total;
}

int main()
{
  int size;
  cin >> size;

  int num[5];

  for (int i = 0; i < size; i++)
  {
    cin >> num[i];
  }
  cout << "The Total Value of Array is : " << sumarr(num, size) << endl;
  return 0;
}