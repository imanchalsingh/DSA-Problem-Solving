#include <iostream>
using namespace std;

int numComp(int n)
{
    int mask = 0;
    int temp = n;

    while (temp != 0)
    {
        mask = (mask << 1) | 1;
        temp >>= 1;
    }
    return (~n) & mask;
}

int main()
{
    cout << numComp(5) << endl;
    return 0;
}