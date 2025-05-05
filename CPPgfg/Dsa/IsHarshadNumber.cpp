#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter numbers (0 to exit): " << endl;

    while (true)
    {
        cin >> n;
        if (n == 0)
            break;

        int temp = n;
        int sum = 0;

        while (temp > 0)
        {
            int digit = temp % 10;
            sum += digit;
            temp /= 10;
        }

        cout << "Sum of digits: " << sum << endl;

        if (n % sum == 0)
        {
            cout << "True (Harshad number)" << endl;
        }
        else
        {
            cout << "False (Not a Harshad number)" << endl;
        }

        cout << "----" << endl;
    }

    return 0;
}
