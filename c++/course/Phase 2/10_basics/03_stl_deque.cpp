#include <iostream>
#include <deque>
using namespace std;
int main()
{
  // we can initialize a deque by this
  deque<int> d;

  // we can add element from back by this

  d.push_back(1);

  // or adding the element by this

  d.push_front(2);

  for (int i : d)
  {
    cout << i << " ";
  }
  cout << endl;

  // we can also delete the element from back by this

  // d.pop_back(); // it will remove 1 and output will be 2

  // for (int i : d)
  // {
  //   cout << i << " ";
  // }
  // cout << endl;

  // d.pop_front(); // it will remove 2 and output will be 1

  // for (int i : d)
  // {
  //   cout << i << " ";
  // }
  // cout << endl;

  //  we can easily access the random element in deque by this

  cout << "Print First Element -> " << d.at(0) << endl; // it will print the value of 1

  // we can easily find the first and last element by this

  cout << "First Element -> " << d.front() << endl;
  cout << "last Element -> " << d.back() << endl;

  //  we can also check if the deque is empty or not

  cout << "Empty or not -> " << d.empty() << endl;

  return 0;
}