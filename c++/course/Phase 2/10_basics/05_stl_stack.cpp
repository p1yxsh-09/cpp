#include <iostream>
#include <stack>
using namespace std;
int main()
{
  stack<string> s;

  s.push("Tobi");
  s.push("Aka");
  s.push("Piyush Awasthi");

  //  in this first elemnt which will be printed is the last elementa

  cout << "First Element -> " << s.top() << endl;

  s.pop();

  cout << "Updated First Element -> " << s.top() << endl;

  cout << "Size of Stack " << s.size() << endl;

  cout << "Empty or not " << s.empty() << endl;
  return 0;
}