#include <iostream>
using namespace std;

void name(int i, int n)
{
  if (i > n)
  {
    return;
  }

  cout << "Piyush" << endl;
  name(i + 1, n);
}
void print(int i, int n)
{
  if (i > n)
  {
    return;
  }
  cout << i << endl;
  print(i + 1, n);
}
void reverse(int i, int n)
{
  if (i < 1)
  {
    return;
  }
  cout << i << endl;
  reverse(i - 1, n);
}
void backtrack(int i, int n)
{
  if (i < 1)
  {
    return;
  }
  backtrack(i - 1, n);
  cout << i << endl;
}
void backtrackReverse(int i, int n)
{
  if (i > n)
  {
    return;
  }
  backtrackReverse(i + 1, n);
  cout << i << endl;
}
int main()
{
  int n;
  cin >> n;
  // name(1, n);  // Pronblem 1
  // print(1, n); // Problem 2
  // reverse(n, n); // problem 3

  // backtrack(n, n); //problem 4
  backtrackReverse(1, n); // problem 5

  return 0;
}