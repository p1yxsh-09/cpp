#include <iostream>
using namespace std;
int main()
{
  int a = 10; // initializin a as 10

  int *pt = &a; // initializing of a pointer to address of a ;

  // calling address of a

  cout << "Address of a --> " << &a << endl;

  // calling the pointer

  cout << "Pointer pt --> " << pt << endl;

  //  the thing you see is that the value of both will be same because it the pomter is storing the address of a thats why it will show the address of a as well.

  // we call also call the address of the pointer

  cout << "Address of pt --> " << &pt << endl;

  //  now we initialize ponter to pointer

  //  as we know we have a pointer pt and in c++ we can assign a pointer with another pointer know as pointer to pointer.

  int **parPt = &pt; // initializng a pointer on a another pointer to store the address of the pointer we initialize earlier;

  // calling the parent pointer

  cout << "Parent Pointer --> " << parPt << endl;

  //  you will see one thing now parPt and pt will have same address because the parent have the previous pointer address , but the parent ponmiter address will be diffrent

  // calling the address of parent pointer

  cout << "Address of Parent Pointer --> " << &parPt << endl;

  return 0;
}