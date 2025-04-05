#include <iostream>
#include <math.h>
using namespace std;

bool isArmstrong(int n)
{
  int copyN = n;
  int cubes = 0;

  while (n != 0)
  {
    int dig = n % 10;

    cubes += (dig * dig * dig);

    n = n / 10;
  }

  return cubes == copyN;
}
int main()
{  
  int n = 153;

  if (isArmstrong(n))
  {
    cout << "This is Armstrong" << endl;
  }
  else
  {
    cout << "This is Not an Armstrong" << endl;
  }

  return 0;
}