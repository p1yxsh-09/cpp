#include <iostream>
using namespace std;

void f()
{
  cout << 1;
  f();
}

/**
 * @brief Entry point of the program.
 *
 * This function calls the function `f()`, which is expected to demonstrate recursion.
 *
 * @note Recursion is a programming technique where a function calls itself, either directly or indirectly,
 *       to solve a problem by breaking it down into smaller, more manageable subproblems.
 *       In this example, calling `f()` without a base case leads to infinite recursion.
 *
 * @return int Returns 0 upon successful execution.
 */
int main()
{
  f();
  // here we are calling the function and it calls the function again n again creating a infinte recursion

  // it also creates segmentation fault which comes in the case of stack overflow

  return 0;
}