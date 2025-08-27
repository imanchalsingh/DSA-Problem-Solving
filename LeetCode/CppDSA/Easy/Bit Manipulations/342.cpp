#include <iostream>
using namespace std;

int main()
{
    int n = 16;
    if (n <= 0)
        return false;
    while (n % 4 == 0)
    {
        n /= 4;
    }
    n == 1;
    cout << n << endl;
    return 0;
}