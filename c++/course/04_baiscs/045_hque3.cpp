#include <iostream>
using namespace std;
int main()
{

  int a = 1;
  int b = 2;

  if (a-- > 0 || ++b > 2)
  {
    cout << "Stage 1 - Inside if" << endl;
  }
  else
  {
    cout << "Stage 2 - Inside else" << endl;
  }
  cout << a << " " << b << endl;
}

//  in or condition if the first condition is true then the second condition wont execute for that, b =2

// output is stage1 - inside if

//  a = 0 and b = 2