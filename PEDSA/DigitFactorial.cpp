#include <iostream>
#include <vector>

using namespace std;

// Precompute factorials of digits 0 to 9
int factorial(int n)
{
    int fact = 1;
    for (int i = 2; i <= n; ++i)
    {
        fact *= i;
    }
    return fact;
}

int main()
{
    vector<int> fact(10);
    for (int i = 0; i < 10; ++i)
    {
        fact[i] = factorial(i);
    }

    int sum = 0;

    // Check from 10 to upper bound
    for (int i = 10; i <= 2540160; ++i)
    {
        int temp = i, digitSum = 0;
        while (temp > 0)
        {
            digitSum += fact[temp % 10];
            temp /= 10;
        }

        if (digitSum == i)
        {
            cout << "Found: " << i << endl;
            sum += i;
        }
    }

    cout << "\nSum of all such numbers: " << sum << endl;

    return 0;
}
