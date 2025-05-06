#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;

    int temp = n, sum = 0;

    while (temp > 0)
    {
        int digit = temp % 10;
        int fact = 1;

        for (int i = 1; i <= digit; i++)
        {
            fact *= i;
        }

        sum += fact;
        temp /= 10;
    }

    cout << "Sum of factorials of digits: " << sum << endl;

    if (sum == n)
        cout << n << " is a Strong Number!" << endl;
    else
        cout << n << " is NOT a Strong Number!" << endl;

    return 0;
}
