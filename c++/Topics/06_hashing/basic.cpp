#include <iostream>
using namespace std;
// globally hash will be 10 to the power 7 for intergers and 10 to the power 8 for boolean
int main()
{
  // inside int main hash can be of 10 to the power 6 in integer format
  // and bool will be 10 to the power 7

  // taking input of the array
  int n;
  cin >> n;
  int arr[100];
  for (int i = 0; i < n; i++)
  { 
    cin >> arr[i];
  }

  // declaring hash and its normal computation;
  int hash[100] = {0};
  for (int i = 0; i < n; i++)
  {
    hash[arr[i]] += 1;
  }

  // taking query
  int q;
  cin >> q;
  while (q--)
  {
    int number;
    cin >> number;
    cout << hash[number] << endl;
  }

  return 0;
}
