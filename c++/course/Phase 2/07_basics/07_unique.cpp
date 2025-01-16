#include <iostream>
using namespace std;

int findunique(int arr[], int size)
{
  int ans = 0;

  for (int i = 0; i < size; i++)
  {
    ans = ans ^ arr[i];
  }
  return ans;
}
void printarr(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}
int main()
{
  int output1[7] = {2, 3, 1, 6, 3, 6, 2};
  int output2[5] = {2, 4, 7, 2, 7};
  int output3[9] = {1, 3, 1, 3, 6, 6, 7, 7, 10};

  int ans = findunique(output1, 7);
  printarr(output1, 7);
  cout << "the ouput is :" << ans << endl;

  int ans1 = findunique(output2, 5);
  printarr(output2, 5);

  cout << "the ouput is :" << ans1 << endl;
  int ans2 = findunique(output3, 9);
  printarr(output3, 9);

  cout << "the ouput is :" << ans2 << endl;
  return 0;
}