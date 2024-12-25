#include <iostream>
using namespace std;
int main()
{
  int n;

  cin >> n;

  int i = 1;

  while (i <= n)
  {
    // first triangle
    int j = 1;
    while (j <= n - i + 1)
    {
      cout << j;
      j++;
    }
    // Second Triangle
    int stars = 2 * (i - 1);
    while (stars)
    {
      cout << "*";
      stars--;
    }
    // Third triangle
    int value = n - i + 1;
    while (value)
    {
      cout << value;
      value--;
    }

    cout << endl;
    i++;
  }
}