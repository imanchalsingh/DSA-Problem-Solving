#include <iostream>
using namespace std;

int main()
{
    int n = 5;

    if (n <= 0)
    {
        cout << false;
    }
    else if ((n & (n - 1)) == 0)
    {
        cout << true;
    }
    else
    {
        cout << false;
    }

    return 0;
}
