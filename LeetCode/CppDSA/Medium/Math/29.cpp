#include <iostream>
#include <climits>
using namespace std;

int divide(int dividend, int divisor)
{
    if (dividend == INT_MIN && divisor == -1)
    {
        return INT_MAX;
    }
    return dividend / divisor;
}
int main()
{
    cout << divide(24, 4) << endl;
    return 0;
}