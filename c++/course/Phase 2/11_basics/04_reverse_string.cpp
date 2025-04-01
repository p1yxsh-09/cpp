// reverse a string  using cahr array

#include <iostream>
#include <string>
using namespace std;

void reverse(char ch[], int n)
{
  int start = 0;
  int end = n - 1;
  while (start < end)
  {
    swap(ch[start++], ch[end--]);
  }
}
int main()
{
  char str[] = {"HelloWorld"};

  int len = strlen(str);

  reverse(str, len);

  cout << "Reversed String is :" << str << endl;

  return 0;
}
