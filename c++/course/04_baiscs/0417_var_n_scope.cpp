#include <iostream>
using namespace std;
int main()
{
  //  here a represent the value in main block and it can be acessed in the if lock also but the value of a stored in if blocl can be only acessed in the if block or in scope of if block only
  int a = 3;

  cout << a << endl;

  if (true)
  {
    // here a is a another variable which is defined only in this scope or block which means it can be only called in this  if  block
    int a = 5;
    cout << a << endl;
  }

  int b = 1;
  cout << b << endl;

  // here you cant make another b variable in the same block because first it cant be made and it will give an error of redifinition at the time of compilation.
  // int b = 3;
  int i = 3;
  //  here i is explicitly taking the for block value.
  for (int i = 1; i <= 8; i++)
  {
    cout << "Hi" << endl;
  }
}

// agar koi variable kisi block me store hota hai toh suki presence usi block me hogi