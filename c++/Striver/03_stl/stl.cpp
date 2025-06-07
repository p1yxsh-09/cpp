#include <iostream>
#include <utility>
#include <string>
#include <vector>
using namespace std;

void explainPair()
{
  // pair comes in utility library
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
void explainVector()
{
  // vector is dynamic in nature

  vector<int> v; // creating  a empty container of vector

  v.push_back(1);
  v.push_back(1);
  v.push_back(1);
  v.push_back(1);
  v.push_back(1);
  v.push_back(1);
  v.push_back(1);
  v.push_back(1);
  v.push_back(1);
  v.push_back(1);
  v.push_back(1);
  v.push_back(1);
  v.push_back(1);
  v.push_back(1);

  // cout << v.size() << endl;     // actual number of elements stord in the vector
  // cout << v.capacity() << endl; // toatal space allocated to vector

  // pairs in vector

  vector<pair<int, int>> vec;

  vec.push_back({1, 2});

  // storing same value multiple times
  vector<int> v1(5, 100);

  // for (int i : v1)
  // {
  //   cout << i << " ";
  // }

  // copying the vector

  vector<int> v2(v1);

  // for (auto in : v2)
  // {
  //   cout << in << " ";
  // }

  // accesing the element
  cout << v2[1] << endl;

  vector<int> v3 = {1, 24, 13, 4, 7, 89, 11, 12};

  // cout << v3.back() << endl;

  // cout << v3.front() << endl;

  // another way is iterator

  vector<int>::iterator it = v3.begin();
  it++;
  // cout << *(it) << " ";

  vector<int>::iterator it1 = v3.end();
  it1--;
  // cout << *(it1) << " ";

  // traaversing in vector with the iterators

  // for (auto it = v3.begin(); it != v3.end(); it++)
  // {
  //   cout << *(it) << " ";
  // }

  // easier way

  for (auto it : v3)
  {
    cout << it << " "; // here in foreach loop it is working as an element not like pointer
  }
  cout << endl;

  // deletion in a vector --> single elemet

  // v3.erase(v3.begin());

  // for (int i : v3)
  // {
  //   cout << i << " ";
  // }

  // deletion in a vector --> multiple elentts

  v3.erase(v3.begin() + 2, v3.begin() + 5);
  for (int i : v3)
  {
    cout << i << " ";
  }

  // inserting an element
  vector<int> v(2, 100); // {100, 100}

  // way 2
  v.insert(v.begin(), 300); // {300,100,100}

  // way 3
  v.insert(v.begin() + 1, 2, 10); //{300, 10, 10, 100, 100};

  // we add first value through insert but it's very costly

  v3.pop_back(); // deletes the last element

  /*
  v1 --> {1,2}
  v2 --> {3,4}

  v1.swap(v2) --> v1 = {3,4} and v2 = {1,2}
  */

  v3.empty()  ;// if its empty return ture if not retrurn false;
}

int main()
{
  explainVector();
  return 0;
}