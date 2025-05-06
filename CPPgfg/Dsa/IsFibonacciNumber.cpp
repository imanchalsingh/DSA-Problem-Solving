#include <iostream>
using namespace std;

bool isPerfectSquare(int num)
{
    int i = 1;
    while (i * i <= num)
    {
        if (i * i == num)
            return true;
        i++;
    }
    return false;
}

bool isFibonacci(int n)
{
    int x1 = 5 * n * n + 4;
    int x2 = 5 * n * n - 4;

    return isPerfectSquare(x1) || isPerfectSquare(x2);
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isFibonacci(num))
    {
        cout << num << " is a Fibonacci number." << endl;
    }
    else
    {
        cout << num << " is NOT a Fibonacci number." << endl;
    }

    return 0;
}
