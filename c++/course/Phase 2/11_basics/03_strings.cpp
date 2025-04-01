#include <iostream>
#include <string>
using namespace std;
int main()
{
  // +++++++++++++++++++++++++++++++++++++++++++++++++++Character Array+++++++++++++++++++++++++++++++++++++++++++++++++
  // char str[] = {"apna college"};

  // // cout << "Enter The Character Array :" << endl;

  // // cin.getline(str, 100 /*,#*/);
  // int length = 0;

  // for (int i = 0; i < str[i] != '\0'; i++)
  // {
  //   length++;
  // }
  // cout << endl;

  // cout << "Output : " << length << endl;

  // cout << "Output :" << strlen(str) << endl;

  // ++++++++++++++++++++++++++++++++++++++++++++++Strings++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

  // strings are dynamic in nature as it can modify the value in the runtime similar to vector

  string str = "Apna College";
  // cout << str << endl;

  str = "Piyush bhai ka college";
  // cout << str << endl;

  //  string also support normal operator

  string s1 = "Apna";
  string s2 = "College";

  string str3 = s1 + s2;

  // cout << (s1 == s2) << endl;

  // cout << (s1 < s2) << endl;

  // cout << s1.length() << endl;

  // cout << s2.length() << endl;

  // cout << str3.length() << endl;

  // +++++++++++++++++++++++++++++++++++++++++++++++++++Input for a string ++++++++++++++++++++++++++++++++++++++++++
  string str1;

  cout << "Enter the String : ";

  /*input for a string -->*/ getline(cin, str1);

  // cout << "Output : " << str1 << endl;

  // +++++++++++++++++++++++++++++++++++++++++++++++++++++looop in string ++++++++++++++++++++++++++++++++++++++++++++++++

  for (int i = 0; i < str1.length(); i++)
  {
    cout << str1[i] << " ";
  }
  cout << endl;

  return 0;
}