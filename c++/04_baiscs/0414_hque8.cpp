#include <iostream>
using namespace std;
int main()
{
  for (int i = 0; i <= 15; i += 2)
  {
    cout << i << " ";

    if (i & 1) /*bitwise and with 1 is used to check the odd number and if the bitwise and is used with 0 then it is used to check the even number*/
    {
      continue;
    }

    i++;
  }
}