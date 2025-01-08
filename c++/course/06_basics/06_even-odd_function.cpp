#include <iostream>
#include <math.h>
using namespace std;

bool iseven(int a)
{
  if (a & 1)
  {
    return 0;
  }
  return 1;
  //  either u can put an else block and write the return command in that or you can simply write the reurn command because if , if block wont excecuted then simply it means that it will come out and return that 1  ;
}
int main()
{
  int nums;
  cin >> nums;

  int answer = iseven(nums);

  cout << "Answer is : " << answer << endl;
  return 0;
}