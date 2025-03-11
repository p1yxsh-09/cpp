#include <iostream>
#include <vector>
using namespace std;
int main()
{
  vector<int> v;

  // by a function we can check that how much memory is located to this vector

  // cout << "Size -> " << v.capacity() << endl;

  // if we want to  add a elemnt in vector we can do by this

  v.push_back(1);

  // cout << "Update Size -> " << v.capacity() << endl;

  v.push_back(2);

  // cout << "Update Size -> " << v.capacity() << endl;

  v.push_back(3);

  // cout << "Update Size -> " << v.capacity() << endl;

  v.push_back(4);

  // cout << "Update Size -> " << v.capacity() << endl;

  v.push_back(5);

  // cout << "Update Size -> " << v.capacity() << endl;

  // as u can see in tthe result that the size is getting doubled after every addition of element

  // now if we want tocheck the size we can do this by this

  // cout << "Total Elements -> " << v.size() << endl;

  // we can also find the elemnt by calling the index which is done in array it is same

  // cout << "Element at second index -> " << v.at(2) << endl;

  //  we can call the smae funbctions for calling the first and last elemnt as we did in array

  // cout << "First Element ->" << v.front() << endl;
  // cout << "last Element ->" << v.back() << endl;

  // we can also remove the elemets form vector

  // cout << "Before Pop" << endl;

  for (int i : v)
  {
    // cout << i << " ";
  }
  // cout << endl;

  v.pop_back();

  // cout << "After Pop" << endl;

  for (int i : v)
  {
    // cout << i << " ";
  }
  // cout << endl;

  // now we can clear the whole elemtnt , but in clear function only the elemnts will be cleared but the assigned memory wiil be same as it was given

  v.clear();

  // cout << "Updated Elements -> " << v.size() << endl;

  // cout << "Memory sizev -> " << v.capacity() << endl;

  //  we can also initialsize the vecor is some other ways like if we already know the size the we can do this

  vector<int> a(5, 1);

  cout << "Print A" << endl;
  for (int i : a)
  {
    cout << i << " ";
  }
  cout << endl;

  //  now if we want to copy all the elements of an vector into another arraay then we can do thisd

  vector<int> last(a);

  cout << "Print last" << endl;

  for (int i : last)
  {
    cout << i << " ";
  }
  cout << endl;

  return 0;
}