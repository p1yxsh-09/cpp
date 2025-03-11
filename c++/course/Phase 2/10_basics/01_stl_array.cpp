#include <iostream>
#include <array>
using namespace std;
int main()
{
  int basic[3] = {1, 2, 3};

  array<int, 4> a = {1, 2, 3, 4};

  int size = a.size();

  for (int i = 0; i < size; i++)
  {
    cout << a[i] << endl;
  }

  // We can now find the exact element's index by this stl implementation of array

  cout << "Element at second index --> " << a.at(2) << endl; // it will give 3

  // we can also check now that is the array empty or not

  cout << "Empty or not --> " << a.empty() << endl; // it will return the output in 0 or 1

  //  we can also find the first and last elment int stl implementation of an aray

  cout << "First Element --> " << a.front() << endl;

  cout << "Laat Element -->" << a.back() << endl;

  return 0;
}