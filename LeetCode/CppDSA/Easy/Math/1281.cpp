#include <iostream>
using namespace std;

int prodAndSum(int n)
{
    int sum = 0;
    int product = 1;
    while (n != 0)
    {
        // To pick last digit.
        int digit = n % 10;
        // Calculate Production
        product *= digit;
        // Calcuulation of Sum.
        sum += digit;
        // To short that number after pick last digit.
        n /= 10;
    }
    int result = (product - sum);
    return result;
}

int main()
{
    int prodMSum = prodAndSum(234);
    cout << "Subtact of product and sum of a number: " << prodMSum << endl;
    return 0;
}