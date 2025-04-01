// this approach will take o(n) complexity

#include <iostream>
using namespace std;

void reverse(char name[], int n)
{
  int s = 0;
  int e = n - 1;

  while (s < e)
  {
    swap(name[s], name[e]);
    s++;
    e--;
  }
}

int length(char name[])
{
  int count = 0;
  for (int i = 0; name[i] != '\0'; i++)
  {
    count++;
  }
  return count;
}

bool isPalindrome(char name[])
{
  int len = length(name);

  char temp[20];

  strcpy(temp, name);

  reverse(name, len);

  return strcmp(temp, name) == 1;
}

int main()
{
  char name[20];

  cin >> name;
  cout << "Your name is  :  " << name << endl;

  int len = length(name);

  if (isPalindrome(name))
  {
    cout << "Its not a Palindrome" << endl;
  }
  else
  {
    cout << " Palindorme hai bhai mst code likha " << endl;
  }

  return 0;
}