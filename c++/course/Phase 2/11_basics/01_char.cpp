#include <iostream>
using namespace std;

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

  // name[3] = '\0'; // used for puttig a null character in betweeen the character array

  cout << "Your name is : " << name << endl;

  cout << "And you have " << length(name) << " Characters in your name" << endl;

  return 0;
}