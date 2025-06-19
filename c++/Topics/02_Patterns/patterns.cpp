#include <iostream>
using namespace std;

void pattern1(int n)
{
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n; j++)
    {
      cout << "* ";
    }
    cout << endl;
  }
}
void pattern2(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      cout << "* ";
    }
    cout << endl;
  }
}
void pattern3(int n)
{
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << j << " ";
    }
    cout << endl;
  }
}
void pattern4(int n)
{
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << i << " ";
    }
    cout << endl;
  }
}
void pattern5(int n)
{
  for (int i = 0; i <= n; i++)
  {
    for (int j = 0; j < n - i; j++)
    {
      cout << "*";
    }
    cout << endl;
  }
}
void pattern6(int n)
{
  for (int i = 0; i <= n; i++)
  {
    for (int j = 1; j <= n - i; j++)
    {
      cout << j << " ";
    }
    cout << endl;
  }
}
void pattern7(int n)
{
  for (int i = 0; i < n; i++)
  {
    // space
    for (int j = 0; j < n - i - 1; j++)
    {
      cout << " ";
    }

    // stars

    for (int j = 0; j < 2 * i + 1; j++)
    {
      cout << "*";
    }

    // space
    for (int j = 0; j < n - i - 1; j++)
    {
      cout << " ";
    }
    cout << endl;
  }
}
void pattern8(int n)
{
  for (int i = 0; i < n; i++)
  {
    // space
    for (int j = 0; j < i; j++)
    {
      cout << " ";
    }

    // stars

    for (int j = 0; j < 2 * n - 2 * i - 1; j++)
    {
      cout << "*";
    }

    // space
    for (int j = 0; j < i; j++)
    {
      cout << " ";
    }
    cout << endl;
  }
}
// patter 9 is a combination of pattern 7 and pattern 8
void pattern10(int n)
{
  // for (int i = 1; i <= 2 * n - 1; i++)
  // {
  //   for (int j = 1; j <= i; j++)
  //   {
  //     {
  //       cout << "*";
  //     }
  //   }
  //   cout << endl;
  // }
  // this loopd is a right triangle pattern

  for (int i = 1; i < 2 * n; i++)
  {
    int stars = i;
    if (i > n)
    {
      // for the second half of the pattern
      stars = 2 * n - i;
    }

    for (int j = 1; j <= stars; j++)
    {
      cout << "*";
    }
    cout << endl;
  }
}
void pattern11(int n)
{
  for (int i = 0; i < n; i++)
  {
    int start = 1;
    if (i % 2 == 0)
    {
      start = 1;
    }
    else
    {
      start = 0;
    }

    for (int j = 0; j <= i; j++)
    {
      cout << start;
      start = 1 - start; // flipping
    }
    cout << endl;
  }
}

void pattern12(int n)
{
  for (int i = 1; i <= n; i++)
  {
    // numbers
    for (int j = 1; j <= i; j++)
    {
      cout << j;
    }
    // space

    for (int j = 0; j < 2 * (n - i); j++)
    {
      cout << " ";
    }

    // numbers in decreasing order
    for (int j = i; j >= 1; j--)
    {
      cout << j;
    }

    cout << endl;
  }
}
void pattern13(int n)
{
  int count = 1;
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << count << " ";
      count++;
    }
    cout << endl;
  }
}
void pattern14(int n)
{
  for (int i = 1; i <= n; i++)
  {
    char count = 'A';
    for (int j = 1; j <= i; j++)
    {
      cout << count;
      count = 'A' + j; // Incrementing the character by j
    }
    cout << endl;
  }
}
void pattern15(int n)
{
  for (int i = 1; i <= n; i++)
  {
    char ch = 'A';
    for (int j = 1; j <= n - i + 1; j++)
    {
      cout << ch;
      ch = 'A' + j;
    }
    cout << endl;
  }
}
void pattern16(int n)
{
  for (int i = 1; i <= n; i++)
  {
    char ch = 'A' + i - 1;
    for (int j = 1; j <= i; j++)
    {
      cout << ch;
    }
    cout << endl;
  }
}
void pattern17(int n)
{
  for (int i = 1; i <= n; i++)
  {
    char ch = 'A';
    // spaces
    for (int j = 1; j <= n - i; j++)
    {
      cout << " ";
    }
    // characters
    int breakpoint = (2 * i - 1) / 2;

    for (int j = 1; j <= 2 * i - 1; j++)
    {
      cout << ch;
      if (j <= breakpoint)
      {
        ch++;
      }
      else
      {
        ch--;
      }
    }

    // spaces
    for (int j = 1; j <= n - i; j++)
    {
      cout << " ";
    }
    cout << endl;
  }
}
void pattern18(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (char j = 'E' - i; j <= 'E'; j++)
    {
      cout << j << " ";
    }
    cout << endl;
  }
}
void pattern19(int n)
{
  for (int i = 0; i < n; i++)
  {
    // starts

    for (int j = 0; j < n - i; j++)
    {
      cout << "* ";
    }

    // spaces
    for (int j = 0; j < 2 * i; j++)
    {
      cout << "  ";
    }

    // stars
    for (int j = 0; j < n - i; j++)
    {
      cout << "* ";
    }
    cout << endl;
  }
}
void pattern20(int n)
{
  for (int i = 0; i < n; i++)
  {
    // starts

    for (int j = 0; j < i + 1; j++)
    {
      cout << "* ";
    }

    // spaces
    for (int j = 0; j < 2 * (n - i - 1); j++)
    {
      cout << "  ";
    }

    // stars
    for (int j = 0; j < i + 1; j++)
    {
      cout << "* ";
    }
    cout << endl;
  }
}
void pattern21(int n)
{
  for (int i = 1; i <= 2 * n - 1; i++)
  {
    int stars = i;
    if (i > n)
    {
      // for the second half of the pattern
      stars = 2 * n - i;
    }

    for (int j = 1; j <= stars; j++)
    {
      cout << "*";
    }
    // spaces
    int spaces = (i <= n) ? 2 * (n - i) : 2 * (i - n);

    for (int j = 1; j <= spaces; j++)
    {
      cout << " ";
    }

    // stars
    for (int j = 1; j <= stars; j++)
    {
      cout << "*";
    }
    cout << endl;
    if (i > n)
    {
      spaces += 2;
    }
  }
}
void pattern22(int n)
{
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n; j++)
    {
      if (i == 1 || i == n || j == 1 || j == n)
      {
        cout << "* ";
      }
      else
      {
        cout << "  ";
      }
    }
    cout << endl;
  }
}
void pattern23(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
      {
        cout << "4";
      }
      else if (i == 1 || j == 1 || i == n - 2 || j == n - 2)
      {
        cout << "3";
      }
      else if (i == 2 || j == 2 || i == n - 3 || j == n - 3)
      {
        cout << "2";
      }
      else
      {
        cout << "1";
      }
    }
    cout << endl;
  }
}
int main()
{
  int test_cases;
  cin >> test_cases;
  for (int i = 0; i < test_cases; i++)
  {
    int n;
    cin >> n;
    pattern1(n);
  }

  return 0;
}