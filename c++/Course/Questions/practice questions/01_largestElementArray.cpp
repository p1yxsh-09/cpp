#include <iostream>
#include <vector>
using namespace std;
int main()
{
  // brute force approach
  // sorting the array and finding the last index
  // T.C -> O(nlogn)
  vector<int> v = {2, 7, 1, 5, 2};

  // sort(v.begin(), v.end());

  // cout << "The Largest Value in Array is : " << v[v.size() - 1] << endl;

  // optimal approach
  // putting a conditon and run the loop to find the largest element
  // T.C --> O(n)
  int largest = v[0];

  for (int i = 0; i < v.size(); i++)
  {
    if (v[i] > largest)
    {
      largest = v[i];
    }
  }
  cout << "The Largest Value in Array is : " << largest << endl;
}