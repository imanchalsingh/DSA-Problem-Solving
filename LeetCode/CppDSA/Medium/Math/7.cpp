#include <iostream>
using namespace std;

int revInt(int n)
{
    int rev = 0;
    while (n != 0)
    {
        // To Pick lastDigit
        int lastDig = n % 10;
        // Storing in rev variable
        rev = rev * 10 + lastDig;
        // Shorting digits.
        n /= 10;
    }

    return rev;
}

int main()
{
    int revint = revInt(123);
    cout << revint << endl;
    return 0;
}