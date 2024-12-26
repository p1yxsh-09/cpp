#include <iostream>
using namespace std;
int main()
// {
//   int n;

//   cin >> n;

//   int i = 1;

//   while (i <= n)
//   {

//     int j = 1;

//     while (j <= n)
//     {
//       char ch = 'A' + i + j - 2;
//       cout << ch;
//       j++;
//     }
//     cout << endl;
//     i++;
//   }
// }

// Alternate Method
{
  int n;

  cin >> n;

  int i = 1;

  while (i <= n)
  {

    int j = 1;
    char start = 'A' + i - 1;

    while (j <= n)
    {
      cout << start;
      start++;
      j++;
    }
    cout << endl;
    i++;
  }
}