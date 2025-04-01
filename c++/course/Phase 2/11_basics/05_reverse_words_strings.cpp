#include <iostream>
#include <string>
using namespace std;
class Solution
{
public:
  void reverse(char ch[], int s, int e)
  {
    while (s < e)
    {
      swap(ch[s], ch[e]);
      s++;
      e--;
    }
  }
  string reverseWords(string s)
  {
    int n = s.length();
    int i = 0;
    while (i < n)
    {
      while (i < n && s[i] == ' ')
      {
        i++;
      }
      if (i == n)
        break;

      int j = i;
      while (j < n && s[j] != ' ')
      {
        j++;
      }

      reverse(&s[0], i, j - 1);
      i = j;
    }

    return s;
  }
};