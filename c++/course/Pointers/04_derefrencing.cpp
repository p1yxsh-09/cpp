#include <iostream>
using namespace std;
int main()
{
    // derefrencing

    int a = 10;

    int *pt = &a;

    int **parPt = &pt;

    // returnin the value stored at memmory address of a

    cout << *(&a) << endl; // --> 10

    // returnin the value stored at memmory address of pt

    cout << *(pt) << endl; // --> 10

    // returnin the value stored at memmory address of parPt

    cout << *(parPt) << endl; // --> gives you the address of a

    //  calling pt

    cout << pt << endl; // --> gives you the address of a

    // derefrencing pointer to pointer

    cout << **(parPt) << "\n";

    return 0;
}