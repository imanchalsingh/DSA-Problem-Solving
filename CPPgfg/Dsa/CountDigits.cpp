#include <iostream>
using namespace std;

int main()
{
    long long n;
    cout << "Enter number: ";
    cin >> n;

    int lenDigit = 0;

    if (n == 0)
    {
        lenDigit = 1;
    }
    else
    {
        while (n != 0)
        {
            n = n / 10;
            lenDigit++;
        }
    }

    cout << "Length of digit: " << lenDigit << endl;
    return 0;
}
