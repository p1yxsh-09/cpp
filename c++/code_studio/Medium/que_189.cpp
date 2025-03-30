#include <iostream>
#include <math.h>
using namespace std;

void rotate(vector<int> &nums, int k)
{
  vector<int> temp(nums.size());

  for (int i = 0; i < nums.size(); i++)
  {
    temp[(i + k) % nums.size()] = nums[i];
  }

  nums = temp;
}
void print(vector<int> v)
{
  for (int i = 0; i < v.size(); i++)
  {
    cout << v[i] << " ";
  }
  cout << endl;
}
int main()
{
  vector<int> v;

  v.push_back(1);
  v.push_back(12);
  v.push_back(9);
  v.push_back(11);
  v.push_back(45);
  v.push_back(13);

  rotate(v, 2);

  print(v);

  return 0;
}