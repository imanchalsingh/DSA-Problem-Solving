#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;
    int rev = 0;
    int orgN = n;
    // Reverse numbers;..
    while (n > 0)
    {
        rev = rev * 10 + n % 10;
        n = n / 10;
    }
    // Check if palindrome?--
    if (rev == orgN)
    {
        cout << orgN << " " << "Palindrome number.";
    }
    else
    {
        cout << orgN << " " << "not a Palindrome number.";
    }

    return 0;
}