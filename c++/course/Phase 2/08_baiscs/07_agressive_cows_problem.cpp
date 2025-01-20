#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;
bool isPossibleSol(vector<int> &stalls, int k, int mid)
{
  int cowCount = 1;

  int lastPos = stalls[0];

  for (int i = 0; i < stalls.size(); i++)
  {
    if (stalls[i] - lastPos >= mid)
    {
      cowCount++;

      if (cowCount == k)
      {
        return true;
      }
      lastPos = stalls[i];
    }
  }
  return false;
}
int agressiveCows(vector<int> &stalls, int k)
{
  sort(stalls.begin(), stalls.end());

  int s = 0;

  int maxi = -1;

  for (int i = 0; i < stalls.size(); i++)
  {
    maxi = max(maxi, stalls[i]);
  }

  int e = maxi;

  int ans = -1;

  int mid = s + (e - s) / 2;

  while (s <= e)
  {

    if (isPossibleSol(stalls, k, mid))
    {
      ans = mid;
      s = mid + 1;
    }
    else
    {
      e = mid - 1;
    }
    mid = s + (e - s) / 2;
  }
  return ans;
}
int main()
{

  int size;

  cout << "Enter The Distance(in units) as Stalls :";

  cin >> size;

  int cows;

  cout << "Enter The Number of cows :";

  cin >> cows;

  vector<int> arr(size);

  cout << "Enter the Distance placed in stalls :";

  for (int i = 0; i < size; i++)
  {
    cin >> arr[i];
  }

  int result = agressiveCows(arr, cows);

  if (result != -1)
  {
    cout << "The Largest Minimum Distance is :" << result << endl;
  }
  else
  {
    cout << "Input parameters are not valid " << endl;
  }

  return 0;
}
