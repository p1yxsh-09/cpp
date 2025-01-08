#include <iostream>
#include <math.h>
using namespace std;

//  function signature
void printCounting(int n)
{
  //  functrion body 
  for (int i = 1; i <= n; i++)
  {
    cout << i << endl;
  }
}
// jab ek function sirf print krega aur kuch bhi return nahi karega toh for that we will use void

int main()
{
  int n;

  cin >> n;
  // function call 
  printCounting(n);
  return 0;
}