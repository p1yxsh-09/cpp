#include <iostream>
using namespace std;
int main()
{
  int arr[] = {1, 2, 3, 4, 5}; // the variable arr is a constant pointer variable ka naam kuch bhi rakhle koi tension nahi

  // cout << *(arr) << endl;
  // cout << *(arr + 1) << endl;
  // cout << *(arr + 2) << endl;
  // cout << *(arr + 3) << endl;
  // cout << *(arr + 4) << endl;

  // in pointers we cant add two pointers but what we can do is subtract the pointers

  // subtraction

  int *ptr2;
  // // int *ptr1 = ptr2 + 2;

  // // cout << ptr1 - ptr2 << endl; // 2

  int *ptr1 = ptr2;

  cout << (ptr2 == ptr1) << endl;

  // relation comparison can be done on pointers and its known as pointer arithmetic

  return 0;
}