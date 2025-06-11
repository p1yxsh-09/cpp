#include <iostream>
using namespace std;

int fiboRecursion(int n)
{
    if (n <= 1)
    {
        return n;
    }
    int last = fiboRecursion(n - 1);
    int slast = fiboRecursion(n - 2);
    int result = last + slast;

    return result;
}

int main()
{
    int n;
    cin >> n;

    int res = fiboRecursion(n);

    cout << "The nth Fibonacci for : " << n << " is : " << res << endl;

    return 0;
}