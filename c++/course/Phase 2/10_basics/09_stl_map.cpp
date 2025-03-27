#include <iostream>
#include <map>
using namespace std;
int main()
{
  map<int, string> m;

  m[1] = "Tobi";
  m[13] = "loves";
  m[22] = "codm";

  // another way of inserting an element in map

  m.insert({111, "and pepsiuuuuuuuuu"});

  cout << "before earse " << endl;

  for (auto i : m)
  {
    cout << i.first << " = " << i.second << endl;
  }

  cout << "Finding 13 " << m.count(13) << endl;

  m.erase(13);

  cout << "after erase" << endl;

  for (auto i : m)
  {
    cout << i.first << " = " << i.second << endl;
  }

  auto it = m.find(1);

  for (auto i = it; i != m.end(); i++)
  {
    cout << (*i).first << endl;
  }
  return 0;
}