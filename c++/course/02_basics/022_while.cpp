#include <iostream>
using namespace std;
int main()
// {
//   int n;

//   cin >> n;

//   int i = 1;

//   while (i <= n)
//   {
//     cout << i << endl;
//     i++;
//   }
// }

// {
//   int n;

//   cin >> n;

//   int i = 1;

//   int sum = 0;

//   while (i <= n)
//   {
//     sum = sum + i;
//     i++;
//   }

//   cout << "value of sum is :" << " " << sum << endl;
// }

//  sum of all even numbers

// {
//   int n;

//   cin >> n;

//   int i = 2;

//   int sum = 0;

//   while (i <= n)
//   {
//     sum = sum + i;
//     i = i + 2;
//   }

//   cout << "value of sum of all even numbers is :" << " " << sum << endl;
// }

// given number is  prime number or not

{
  int n;

  cin >> n;

  int i = 2;

  while (i < n)
  {

    if (n % i == 0)
    {
      cout << "not prime for " << i << endl;
    }
    else
    {
      cout << "prime for " << i << endl;
    }
    i = i + 1;
  }
}