#include <iostream>
#include <vector>
using namespace std;
// brute force approach

vector<vector<int>> findTriplets(vector<int> arr, int n, int K)
{
  n = arr.size();
  vector<vector<int>> ans;

  for (int x = 0; x < n; x++)
  {
    for (int y = x + 1; y < n; y++)
    {
      for (int z = x + 2; z < n; z++)
      {
        if (arr[x] + arr[y] + arr[z] == K)
        {
          vector<int> temp = {arr[x], arr[y], arr[z]};
          sort(temp.begin(), temp.end());
          ans.push_back(temp);
        }
      }
    }
  }
  // sort
  sort(ans.begin(), ans.end());
  // find unique adn remove the duplicate
  ans.erase(unique(ans.begin(), ans.end()), ans.end());
  // return
  return ans;
}
int main()
{
  int n, K;
  cin >> n >> K;

  vector<int> arr(n);
  for (int i = 0; i < n; ++i)
  {
    cin >> arr[i];
  }

  vector<vector<int>> result = findTriplets(arr, n, K);

  for (const auto &triplet : result)
  {
    for (int num : triplet)
    {
      cout << num << " ";
    }
    cout << endl;
  }

  return 0;
}