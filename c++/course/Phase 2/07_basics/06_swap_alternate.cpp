#include <iostream>
#include <math.h>
using namespace std;

void alternate(int arr[] , int size) {

  for (int i = 0; i <size; i+=2)      
  {
    if (i+1 < size)
    {
      swap(arr[i],arr[i+1]);
    }
    
  }
}
void printArray(int arr[] , int size) {

  for (int i = 0; i <size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
  
}
  

int main(){
  int even[10] = {1,2,3,4,5,6,7,8,9,10};
  int odd[7] = {1,2,3,4,5,6,7};

  alternate(even,10);
  printArray(even,10);

  alternate(odd,7);
  printArray(odd,7);

    return 0;
} 