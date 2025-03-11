#include <iostream>
#include <list>
using namespace std;
int main()
{
  //  creation of list

  list<int> l;

  // here all the function are similar like deque or vector so we just perform some of it

  l.push_back(1);
  l.push_front(2);

  //  other waay to create a list with similar multiple elemnts

  list<int> a(5, 100);

  cout << "100 ki gaddi" << endl;

  for (int i : a)
  {
    cout << i << " ";
  }
  cout << endl;

  cout << "Before Erase " << endl;

  for (int i : l)
  {
    cout << i << " ";
  }
  cout << endl;

  l.erase(l.begin());

  cout << "After Erase " << endl;

  for (int i : l)
  {
    cout << i << endl;
  }

  cout << "Size of List " << l.size() << endl;

  return 0;
}