#include <iostream>
using namespace std;

int main()
{
    int n = 2446;
    int count = 0;
    int original = n;

    while (n > 0)
    {
        int digit = n % 10;

        if (digit != 0 && original % digit == 0)
        {
            count++;
        }

        n = n / 10;
    }

    cout << count;
    return 0;
}