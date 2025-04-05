#include <iostream>
using namespace std;

// void changeA(int *ptr) // pass by refrence using pointer
// {
//   *(ptr) = 20; // derefrencing the pointer and changing the value
// }

void changeA(int &b) // pass by refrence using alias
{
  b = 20;
}

int main()
{
  int a = 10;

  // changeA(&a);

  changeA(a);

  cout << a << endl;

  return 0;
}