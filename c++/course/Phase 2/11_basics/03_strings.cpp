#include <iostream>
using namespace std;
int main()
{
  char str[] = {"apna college"};

  // cout << "Enter The Character Array :" << endl;

  // cin.getline(str, 100 /*,#*/);
  int length = 0;

  for (int i = 0; i < str[i] != '\0'; i++)
  {
    length++;
  }
  cout << endl;

  cout << "Output : " << length << endl;

  cout << "Output :" << strlen(str) << endl;

  return 0;
}