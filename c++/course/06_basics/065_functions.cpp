#include <iostream>
#include <math.h>
using namespace std;

int power(/*here u can put any name for the arguments and in the main scope u can put any variable to your desire as your input */)
{
  int a, b;

  cin >> a >> b;

  int ans = 1;

  for (int i = 1; i <= b; i++)
  {
    ans = ans * a;
  }

  return ans;
}
int main()
{

  // int a, b;

  // cin >> a >> b;

  // int answer = power(a, b);

  // cout << "Answer  is :" << answer << endl;

  // int c, d;

  // cin >> c >> d;

  // int answer1 = power();

  // cout << "Answer  is :" << answer1 << endl;

  //   here   now we can make endless inputs without creating the operations everytime here we made a function which can be called by any input user we create .

  //  but .. but  ... but can this code be more efficient  ? --> answer is yes , how ? lets see

  //  now we will remove the input we gave in the function and give the input parametre inside the function and also taking the input inside the function, what will happen ?

  //  now only storing the power value in  answer and printing it will it work  ?

  int answer = power(); /*here are not giving any argument because we simply gave the arguments inside the function block and here are only calling the function*/

  //  printing the code

  cout << "Answer is :" << answer << endl;

  //  can we call the function again  ? --> yes you can bitch enjoy !

  int ans = power();
  cout << "Answer is :" << ans << endl;

  int ans1 = power();
  cout << "Answer is :" << ans1 << endl;

  //  now the variable of a in main scope, can it be called in the power function scope ? --> Answer is no currently , why i am saying currently here because it can be chnaged but i have not studied yet when i study that my answer will be chnage .
  return 0;
}