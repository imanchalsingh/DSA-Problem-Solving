#include <iostream>
using namespace std;

int main()
{
    int binary = 1011;
    int decimal = 0;
    int base = 1;

    while (binary > 0)
    {
        int lastDigit = binary % 10;
        decimal += lastDigit * base;
        base = base * 2;
        binary = binary / 10;
    }

    cout << "Decimal = " << decimal;
    return 0;
}
