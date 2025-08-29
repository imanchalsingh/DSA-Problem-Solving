#include <iostream>
using namespace std;

bool checkDivisibility(int n)
{
    int sum = 0;
    int prod = 1;
    int totalSum = 0;
    int temp = n;
    while (temp != 0)
    {
        int digits = temp % 10;
        sum = sum + digits;
        prod = prod * digits;
        temp = temp / 10;
    }
    totalSum = sum + prod;
    if (n % totalSum == 0)
    {
        return true;
    }
    return false;
}

int main()
{
    cout << checkDivisibility(99) << endl;

    return 0;
}