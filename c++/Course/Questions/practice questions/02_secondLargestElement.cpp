#include <iostream>
#include <algorithm> // for sort()
using namespace std;

// int main() // brute force in array
// {
//   int arr[6] = {1, 2, 7, 4, 1, 3};
//   int n = 6;

//   // Step 1: Sort the array in ascending order
//   sort(arr, arr + n);

//   // Step 2: Get the largest element
//   int largest = arr[n - 1];
//   int secondLargest = -1;

//   // Step 3: Traverse from second last element backward to find second largest
//   for (int i = n - 2; i >= 0; i--)
//   {
//     if (arr[i] != largest)
//     {
//       secondLargest = arr[i];
//       break;
//     }
//   }

//   cout << "Second Largest Element is: " << secondLargest << endl;

//   return 0;
// }

// int main() // brute force in vector
// {
//   // brute force approach
//   // first sorted and then traverse the loop backward then check the
//   // second last condtion it to check if its not same as the largest val
//   // then print and break
//   // T.C --> O(nlogn)
//   vector<int> v = {2, 7, 1, 5, 2}; // {1,2,2,5,7}

//   sort(v.begin(), v.end()); // O(nlogn)

//   int n = v.size();
//   int Largest = v[n - 1];

//   int secondLargest = -1;

//   for (int i = n - 2; i >= 0; i--) // O(n)
//   {
//     if (v[i] != Largest)
//     {
//       secondLargest = v[i];
//       break;
//     }
//   }
//   cout << "The Second Largest Value in Array is : " << secondLargest << endl;
// }

// better approch --> O(n)

int main()
{
  vector<int> v = {1, 4, 11, 12, 2, 5, 7};

  int largest = v[0];
  for (int i = 0; i < v.size(); i++)
  {
    if (v[i] > largest)
    {
      largest = v[i];
    }
  }
  int slargest = -1;

  for (int i = 0; i < v.size(); i++)
  {
    if (v[i] > slargest && v[i] != largest)
    {
      slargest = v[i];
    }
  }

  cout << slargest << endl;
}