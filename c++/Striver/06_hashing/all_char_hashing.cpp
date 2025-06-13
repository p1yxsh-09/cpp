#include <iostream>
using namespace std;
int main()
{
  string s;
  cin >> s;

  // precomputation
  int hash[256] = {0};
  for (int i = 0; i < s.size(); i++)
  {
    hash[s[i]]++;
  }

  // query
  int q;
  cin >> q;
  while (q--)
  {
    char num;
    cin >> num;
    cout << hash[num] << endl;
  }

  return 0;
}