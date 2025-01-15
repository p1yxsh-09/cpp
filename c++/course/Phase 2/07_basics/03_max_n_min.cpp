#include <iostream>
#include <climits>
using namespace std;

int getmax(int num[], int size)
{

  int maxi = INT_MIN;

  for (int i = 0; i < size; i++)
  {
    maxi = max(maxi, num[i]);
  }

  return maxi;
}

int getmin(int num[], int size)
{

  int mini = INT_MAX;

  for (int i = 0; i < size; i++)
  {
    mini = min(mini, num[i]);
  }

  return mini;
}
int main()
{
  int size;
  cin >> size;

  int num[100];

  // for taking input
  for (int i = 0; i < size; i++)
  {
    cin >> num[i];
  }

  cout << "Maximum NUumber is :" << getmax(num, size) << endl;
  cout << "Minimum NUumber is :" << getmin(num, size) << endl;
}