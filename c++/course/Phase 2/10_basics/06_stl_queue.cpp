#include <iostream>
#include <queue>
using namespace std;
int main()
{
  queue<string> q;

  q.push("Tobi");
  q.push("Aka");
  q.push("Piyush Awasthi");

  cout << "First Element -> " << q.front() << endl;

  q.pop();

  cout << "First Element -> " << q.front() << endl;

  cout << "Size after pop " << q.size() << endl;
  return 0;
}
