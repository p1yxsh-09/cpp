#include <iostream>
#include <map>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int arr[100];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  map<int, int> mpp;
  for (int i = 0; i < n; i++)
  {
    mpp[arr[i]]++;
  }

  // max value

  return 0;
}