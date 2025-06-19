#include <iostream>
#include <utility>
#include <vector>
#include <list>
#include <string>
#include <deque>
#include <stack>
#include <queue>
#include <set>
#include <map>
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
  vector<int> v11(2, 100); // {100, 100}

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

  // v3.empty(); // if its empty return ture if not retrurn false;
}
void explainList()
{
  list<int> ls;

  ls.push_back(2);    // {2}
  ls.emplace_back(4); // {2,4}

  // btter than insert in vector
  ls.push_front(5); // {5,2,4}

  ls.emplace_front(); // {2,4}

  // rest functions same as vector
  // begin , end , rebegin , rend , clear , insert ,size, swap
}
void explainDeque()
{
  deque<int> dq;
  dq.push_back(1);     // {1}
  dq.emplace_back(2);  // {1,2}
  dq.push_front(3);    // {3,1,2}
  dq.emplace_front(4); // {4,3,1,2}

  dq.pop_back();  //{3,4,1}
  dq.pop_front(); // {4,1}

  dq.back();  // {1}
  dq.front(); // {4}

  // rest functions as vector
  // begin , end , rend , rbegin , clear , insert , size ,swap
}
void explainStack()
{
  // follows LIFO - LAST IN FIRST OUT
  stack<int> st;
  st.push(1);
  st.push(2);
  st.push(3);
  st.push(4);
  st.push(5);

  cout << st.top() << endl; //  5  "ST[2] is invalid here"

  st.pop(); // {4,3,2,1}

  cout << st.size() << endl; // 4

  cout << st.top() << endl; // 4

  cout << st.empty() << endl; // false

  // swap items
  stack<int> st1, st2;
  st1.swap(st2);
}
void explainQueue()
{
  queue<int> q;
  q.push(1);
  q.push(2);
  q.push(3);
  q.push(4);
  q.push(5);

  q.back() += 5;

  cout << q.back() << endl;

  cout << q.front() << endl;

  q.pop();

  cout << q.front() << endl;
}
void explainPQ()
{
  priority_queue<int> pq;

  pq.push(5);
  pq.push(8);
  pq.push(2);
  pq.push(9);
  pq.push(10);

  cout << pq.top() << endl; // 10

  pq.pop();

  cout << pq.top() << endl; // 9

  // same size swap as others

  // Minimum Heap

  priority_queue<int, vector<int>, greater<int>> pq1;
  pq1.push(5);
  pq1.push(2);
  pq1.push(8);
  pq1.push(1);

  cout << pq1.top() << endl; // 1
}
void expalinSet()
{
  set<int> st;

  st.insert(1);
  st.insert(1);
  st.insert(2);
  st.insert(3);
  st.insert(4);
  st.insert(56);
  st.insert(5);

  // functionality of insert in vector can be used also,that only increases efficiency
  // begin() , end() , empty() ,swap() are same

  // {1,2,3,4,5,56}
  auto it = st.find(3);

  auto it = st.find(6); // will return the st.end() which means address of right after the last val

  st.erase(5); // erase 5 in logarithmic time

  int cnt = st.count(1);

  auto it = st.find(3);

  st.erase(it); // it takes constant line

  auto it1 = st.find(2);
  auto it2 = st.find(4);
  st.erase(it1, it2); // after erase{1,4,5} [first, last)

  // LOWER BOUMD AND UPPER BOUND

  auto it = st.lower_bound(2);

  auto it = st.upper_bound(3);
}
void explainMS()
{
  // obeys sorted but not uniqueness
  // can store mutiple occurances of the same element
  multiset<int> ms;
  ms.insert(1); //{1}
  ms.insert(1); //{1,1}
  ms.insert(1); //{1,1,1}
  ms.insert(1); //{1,1,1,1}

  ms.erase(1); // remove all the occcurnaces of 1

  // counting all the similar multiple occurances

  int cnt = ms.count(1);
  // need to rmeove some occurances then

  ms.erase(ms.find(1), next(ms.find(1), 2));
  // erase single element
  ms.erase(ms.find(1));
}
void explainUS()
{

  // obeys uniqueness but not sorted order
  // upper and lower boumd doesnt work here rest all same as set
  // has a better tc than set in most cases
}
void explainMap()
{

  // ways to initialize the map

  // stored as a key value pair

  // map<int, int> mpp;

  // a nested pair in map

  // map<int, pair<int, int>> mpp;

  // another order

  map<pair<int, int>, int> mpp;

  // list of way in insert into a map at line 329
  // mpp[1] = 3;
  // mpp.emplace(std::make_pair(std::make_pair(3, 1), 4));
  // mpp.insert(std::make_pair(std::make_pair(2, 4), 5));

  // the way to add value int he map initialize at  line 337
  mpp[{2, 3}] = 10;

  // {
  //   {1, 2},
  //       {2, 4},
  //       {3, 1}
  // }

  // for (auto it : mpp)
  // {
  //   cout << it.first << " " << it.second;
  // }
  // cout << mpp[1];
  // cout << mpp[5];
}

// my way compare

bool comp(pair<int, int> p1, pair<int, int> p2)
{
  // in these times when u have to compare paris in an array dont think baout array
  // think about pairs to solve and u can write a my way function
  if (p1.second < p2.second)
    return true;
  if (p1.second > p2.second)
    return false;
  // they are same sort in descendinf
  if (p1.first > p2.first)
    return true;
  else
    return false;
}
void extra()
{
  // sorting
  // sort(a, a + n);

  // hehe a is the first element and a+n refers to the next of last element

  // in vector

  // sort(v.begin() , v.end())

  // sort in descendig order

  // sort(a,a+n , greater<int>)

  // sorting in pair

  pair<int, int> a[] = {{1, 2}, {2, 1}, {4, 1}};

  // sort it according to secnd element
  // and if second element are same
  // sort according to the first element in descending

  // sort(a, a + n, comp; //->{4, 1} {2, 1} {1, 2}

  int num1 = 7;
  int cnt = __builtin_popcount(num1);

  long long num = 1221373211267;

  int cnt1 = __builtin_popcountll(num);

  string s = "123";

  do
  {
    cout << s << endl;
  } while (next_permutation(s.begin(), s.end()));
}
int main()
{
  explainPQ();
  return 0;
}