#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool isPalindrome(int num)
{
    string str = to_string(num);
    string rev = str;
    reverse(rev.begin(), rev.end());
    return str == rev;
}

int main()
{
    int maxPalindrome = 0;

    for (int i = 999; i >= 100; i--)
    {
        for (int j = i; j >= 100; j--)
        {
            int product = i * j;

            if (product <= maxPalindrome)
                break;

            if (isPalindrome(product))
            {
                maxPalindrome = product;
            }
        }
    }

    cout << "Largest palindrome product is: " << maxPalindrome << endl;

    return 0;
}
