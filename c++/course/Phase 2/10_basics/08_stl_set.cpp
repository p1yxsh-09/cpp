#include <iostream>
#include <set>
using namespace std;
int main()
{
  set<int> s;

  s.insert(11);
  s.insert(2);
  s.insert(31);
  s.insert(11);
  s.insert(221);
  s.insert(234);
  s.insert(66);
  s.insert(91);
  s.insert(91);
  s.insert(0);

  for (int i : s)
  {
    cout << i << " ";
  }
  cout << endl;

  set<int>::iterator it = s.begin();
  it++;

  // s.erase(it);
 

  for (int i : s)
  {
    cout << i << " ";
  }
  cout << endl;

  cout << "91 is present or not -> " << s.count(91) << endl;

  set<int>::iterator itr = s.find(2);

  for (auto it = itr; it != s.end(); it++)
  {
    cout << *it << " ";
  }
  cout << endl;

  return 0;
}