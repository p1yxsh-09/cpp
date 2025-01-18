#include <iostream>
#include <math.h>
using namespace std;

bool isPossibleSol(vector<int> &arr, int n, int m, int mid)
{
  int studentCount = 1;

  int pageSum = 0;

  for (int i = 0; i < n; i++)
  {
    if ((pageSum + arr[i]) <= mid)
    {
      pageSum += arr[i];
    }
    else
    {
      studentCount++;

      if (studentCount > m || arr[i] > mid)
      {
        return false;
      }
      pageSum = 0;

      pageSum = arr[i];
    }
  }
  return true;
}
int allocateBooks(vector<int> &arr, int n, int m)
{
  int s = 0;

  int sum = 0;

  for (int i = 0; i < n; i++)
  {
    sum += arr[i];
  }

  int e = sum;

  int ans = -1;

  int mid = s + (e - s) / 2;

  while (s <= e)
  {
    /* code */
    if (isPossibleSol(arr, n, m, mid))
    {
      ans = mid;

      e = mid - 1;
    }
    else
    {
      s = mid + 1;
    }

    mid = s + (e - s) / 2;
  }
  return ans;
}

int main()
{
  int size;

  cout << "Enter The size of books : ";

  cin >> size;

  int students;

  cout << "Enter The no. of Students: ";

  cin >> students;

  vector<int> arr(size);

  cout << "Enter The no of Pages in each book : ";

  for (int i = 0; i < size; i++)
  {
    cin >> arr[i];
  }

  int result = allocateBooks(arr, size, students);
  if (result != -1)
  {
    cout << "The Minimun Value of Maximum Pages is :" << result << endl;
  }
  else
  {
    cout << "Books cannot be allocated to students under these conditions." << endl;
  }

  return 0;
}
