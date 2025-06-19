#include <iostream>
#include <vector>
using namespace std;

bool uniqueOccurances(vector<int> &nums)
{
  // sorting
  sort(nums.begin(), nums.end());
  // create a new vector to store the occurances
  vector<int> v;
  // storing the values
  for (int i = 0; i < v.size(); i++)
  {
    int cnt = 1; // initializing the count for occurnaces starts at 1 because one time its already occured

    // run a loop to check the 2 condition
    // first if the i+1 value is is in the loop
    // second to check if i == i + 1;
    while (i + 1 < nums.size() && nums[i] == nums[i + 1])
    {
      cnt++;
      i++;
    }

    // add the value of cnt in another vector to store the occurances
    v.push_back(cnt);

    // sorting the vector which stores the occurance

    sort(v.begin(), v.end());

    // now run the loop and check if the occcurances arent same and unique

    for (int i = 0; i < v.size(); i++)
    {
      if (v[i] != v[i + 1])
      {
        return false;
      }
    }
  }
  return true;
}

int main()
{

  return 0;
}