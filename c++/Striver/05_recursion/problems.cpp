#include <iostream>
using namespace std;

void f(int i, int sum) // Parameterize Fucntion
{
  if (i < 1)
  {
    cout << sum << endl;
    return;
  }
  f(i - 1, sum + i);
}

int s(int n) // Functional Recursion
{
  if (n < 1)
  {
    return 0;
  }
  return n + s(n - 1);
}
int main()
{
  int n;
  cin >> n;
  // f(n, 0);

  int res = s(n);
  cout << "The Sum is : " << res << endl;
  return 0;
}