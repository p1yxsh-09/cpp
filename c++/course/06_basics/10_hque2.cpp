#include <iostream>
#include <math.h>
using namespace std;

int ap(int n)
{
  int a = ((3 * n) + 7);

  return a;
}

int main()
{

  int n;
  cin >> n;

  int ans = ap(n);

  cout << "nth term is " << ans << endl;

  return 0;
}