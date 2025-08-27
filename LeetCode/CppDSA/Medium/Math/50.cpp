#include <iostream>
#include <math.h>
using namespace std;

int myPow(int x, int n)
{

    int ans = 1;
    for (int i = 0; i < n; i++)
    {
        ans *= x;
    }
    return ans;
}

int main()
{
    cout << myPow(5, 3) << endl;

    return 0;
}