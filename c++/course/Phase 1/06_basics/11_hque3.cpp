#include <iostream>
using namespace std;

// Function to calculate the total number of set bits in the result of a & b

int count_set_bit(int num)
{
  int count = 0;

  while (num > 0)
  {
    count += num & 1;
    num = num >> 1;
  }
  return count;
}

int total_set_bit(int a, int b)
{
  return count_set_bit(a) + count_set_bit(b);
}

int main()
{
  int a, b;
  cout << "Enter two numbers: ";
  cin >> a >> b;

  int ans = total_set_bit(a, b);

  cout << "Total Set Bits in a & b is " << ans << endl;
  return 0;
}
