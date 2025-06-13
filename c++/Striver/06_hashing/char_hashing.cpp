#include <iostream>
using namespace std;
int main()
{
  string s;
  cin >> s;

  // pre computation
  int hash[26] = {0};
  for (int i = 0; i < s.size(); i++)
  {
    hash[s[i] - 'a']++;
  }
  // query
  int q;
  cin >> q;
  while (q--)
  {
    char c;
    cin >> c;
    cout << hash[c - 'a'] << endl;
  }

  return 0;
}