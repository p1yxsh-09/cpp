#include <iostream>
using namespace std;
int main()
{
  int n;

  cout << "Enter the Number : ";

  cin >> n;

  int count = 0;

  for (int i = 1; i <= n; i++)
  {
    count = count + i;
  }

  cout << count << endl;
}