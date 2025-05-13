// Problem-----
// Number Given from 0 to N.
// 1. Find Even number.
// 2. Find Odd number.
// 3. Find Prime number.
//*  Calculate that number which is odd but not prime. (9)
#include <iostream>
using namespace std;

void evenNum(int num)
{
    for (int i = 1; i <= num; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << " ";
        }
    }
    cout << endl;
}

void oddNum(int num)
{
    for (int i = 1; i <= num; i++)
    {
        if (i % 2 != 0)
        {
            cout << i << " ";
        }
    }
    cout << endl;
}

void primeNum(int num)
{
    for (int i = 2; i <= num; i++)
    {
        bool isPrime = true;

        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                isPrime = false;
                break;
            }
        }

        if (isPrime)
        {
            cout << i << " ";
        }
    }
    cout << endl;
}

void oddButNotPrime(int num)
{
    for (int i = 1; i <= num; i++)
    {
        if (i % 2 != 0) // Check if it's odd
        {
            bool isPrime = true;

            // Check if the number is prime
            for (int j = 2; j * j <= i; j++)
            {
                if (i % j == 0)
                {
                    isPrime = false;
                    break;
                }
            }

            if (!isPrime && i != 1) // Exclude prime numbers and 1
            {
                cout << i << " ";
            }
        }
    }
    cout << endl;
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Even numbers: ";
    evenNum(num);

    cout << "Odd numbers: ";
    oddNum(num);

    cout << "Prime numbers: ";
    primeNum(num);

    cout << "Odd but not prime numbers: ";
    oddButNotPrime(num);

    return 0;
}
