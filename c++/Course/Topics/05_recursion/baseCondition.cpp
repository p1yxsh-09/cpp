#include <iostream>
using namespace std;

int cnt = 0;
void f()
{
  // base condition
  if (cnt == 3)
  {
    return;
  }
  cout << cnt << endl;
  cnt++;
  f(); // recursive Function
}

int main()
{
  f();
  return 0;
}