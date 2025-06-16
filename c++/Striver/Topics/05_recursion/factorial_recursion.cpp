#include <iostream>
using namespace std;

void pfact(int n, int result) // parameter recursion
{
  if (n == 0 || n == 1) // base condition
  {
    cout << result << endl;
    return;
  }
  pfact(n - 1, result * n);
}


int ffact(int n) // functional recursion
{
  if (n == 0 || n == 1) // base condition
  {
    return 1;
  }
  return n * ffact(n - 1); 
}
int main()
{
  int n;
  cin >> n;

  // pfact(n, 1);

  int result = ffact(n);
  cout << "The Result is : " << result << endl;

  return 0;
}