#include <iostream>
using namespace std;

int main()
{
    int a = 1, b = 2, sum = 0;
    while (b <= 4000000)
    {
        if (b % 2 == 0)
            sum += b;
        a, b = b, b = a + b;
    }
    cout << "The sum of even Fibonacci numbers less than 4 million is: " << sum << endl;

    return 0;
}