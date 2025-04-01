// Another Approach for solving the palindrome with 0(1) complexity ;

#include <iostream>
using namespace std;

bool isPalindrome(char name[], int n)
{
  int start = 0, end = n - 1;

  while (start <= end)
  {
    if (isalnum(name[start]))
    {
      start++;
      continue;
    }
    else if (isalnum(name[end]))
    {
      end--;
      continue;
    }
    else if (name[start] == name[end])
    {
      start++;
      end--;
    }
    else
    {
      return 0;
    }
  }
  return 1;
}

char toLowerCase(char ch)
{
  if (ch >= 'A' && ch <= 'Z')
  {
    char temp = ch - 'A' + 'a';
    return temp;
  }
  else
  {
    return ch;
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

int main()
{
  char name[20];

  cout << "Enter your name " << endl;

  cin >> name;

  int len = length(name);

  // name[3] = '\0'; // used for puttig a null character in betweeen the character array

  cout << "Your name is : " << name << endl;

  cout << "And you have " << len << " Characters in your name" << endl;

  cout << "Palindrome or not " << isPalindrome(name, len) << endl;

  return 0;
}