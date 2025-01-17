#include <iostream>
#include <math.h>
using namespace std;
int pivot(int arr[], int size)
{

  int s = 0;
  int e = size - 1;
  int mid = s + (e - s) / 2;

  while (s < e)
  {
    if (arr[mid] >= arr[0])
    {
      s = mid + 1;
    }
    else
    {
      e = mid;
    }
    mid = s + (e - s) / 2;
  }
  return s;
}
int binarySearch(int arr[], int s, int e, int key)
{
  int start = s;
  int end = e;

  int mid = (start + (end - start) / 2);

  while (start <= end)
  {
    if (arr[mid] == key)
    {
      return mid;
    }

    if (key > arr[mid])
    {
      start = mid + 1;
    }
    else
    {
      end = mid - 1;
    }

    mid = (start + (end - start) / 2);
  }
  return -1;
}

int main()
{
  int n;
  cout << " Enter The Size of Array :";
  cin >> n;
  int result;

  int arr[100];

  cout << "Enter The Elements of an Sorted Array :";
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  int piv = pivot(arr, n);

  int key;
  cout << "Enter The Key To Search :";
  cin >> key;

  if (key >= arr[piv] && key <= arr[n - 1])
  {
    // for second line

    result = binarySearch(arr, piv, n - 1, key);
  }
  else
  {
    result = binarySearch(arr, 0, piv - 1, key);
  }

  if (result != -1)
  {
    cout << "The key is present and the index is : " << result << endl;
  }
  else
  {
    cout << "The key is absent , please , put the key that is in sorted-rotated array " << endl;
  }

  cout << result << endl;
  return 0;
}

//   second approach
/*
int search(int* arr, int n, int k) {
    // Write your code here.
    int s = 0 , e = n - 1 , mid;
    while( s <= e ){
        mid = s + (e - s)/2;
        if(k < arr[0]  && arr[mid] < k ) s = mid + 1;
        else if(k < arr[0] && arr[mid] > k) e = mid -1;
        else if(k > arr[0] && arr[mid] < k) s = mid + 1;
        else if(k > arr[0] && arr[mid] > k) e = mid -1;
        else return mid;
    }
    return -1;
}


*/