#include <iostream>
#include <math.h>
using namespace std;
int main()
{

  /*pow(a,b)*/
  int a, b;

  cin >> a >> b;

  int ans = 1;

  for (int i = 1; i <= b; i++)
  {
    ans = ans * a;
  }
  cout << "Answer is :" << ans << endl;

  //  now we have to do it again so we copy the whole code to execute
  int c, d;

  cin >> c >> d;

  int answer = 1;

  for (int i = 1; i <= d; i++)
  {
    answer = answer * c;
  }
  cout << "Answer is :" << answer << endl;
  //  now if we have to make this code again and again so this code will become bulky and it will not be readable as well so for that we will use functions.
  return 0;
}