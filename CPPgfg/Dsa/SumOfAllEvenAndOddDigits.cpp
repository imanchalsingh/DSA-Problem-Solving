#include <iostream>
using namespace std;

int main()
{
    int n, evenSum = 0, oddSum = 0;
    cout << "Enter a number: ";
    cin >> n;

    while (n > 0)
    {
        int digit = n % 10; // last digit
        if (digit % 2 == 0)
        {
            evenSum += digit; //  even sum
        }
        else
        {
            oddSum += digit; //  odd sum
        }
        n /= 10; // Remove the last digit
    }

    cout << "Sum of even digits: " << evenSum << endl;
    cout << "Sum of odd digits: " << oddSum << endl;

    return 0;
}