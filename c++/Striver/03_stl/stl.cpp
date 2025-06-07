#include <iostream>
using namespace std;

// pair comes in utility library
void explainPair()
{
  pair<int, string> p = {1, "Hello"};
  // p.first = 1;
  // p.second = "Hello";
  // cout << "Pair: " << p.first << ", " << p.second << endl;

  // nested pair
  // pair<pair<int, char>, pair<int, string>> nestedPair = {{1, 'a'}, {2, "World"}};

  // cout << "Nested Pair " << nestedPair.first.first << " " << nestedPair.first.second << endl;
  // cout << "Nested Pair " << nestedPair.second.first << " " << nestedPair.second.second << endl;

  // pairs on array

  pair<int, int> arr[] = {{1, 2}, {2, 3}, {3, 4}};

  cout << arr[2].second << endl;
}


int main()
{
  explainPair();
  return 0;
}