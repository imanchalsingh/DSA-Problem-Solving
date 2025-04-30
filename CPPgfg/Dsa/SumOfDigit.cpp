#include <iostream>
using namespace std;

int main()
{
    long long n;
    cout << "Enter number: ";
    cin >> n;

    long long temp = n;
    int sum = 0;
    int lenDigit = 0;

    if (n == 0)
    {
        lenDigit = 1;
        sum = 0;
    }
    else
    {
        while (n != 0)
        {
            n = n / 10;
            lenDigit++;
        }

        while (temp != 0)
        {
            sum += temp % 10;
            temp = temp / 10;
        }
    }

    cout << "Length of digit: " << lenDigit << endl;
    cout << "Sum of digit: " << sum << endl;
    return 0;
}
