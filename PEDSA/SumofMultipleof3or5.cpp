#include <iostream>
using namespace std;

int main()
{
    int i, sum;
    sum = 0;
    int n = 1000;
    for (i = 0; i < n; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            sum += i;
        }
    }

    // Output the result
    cout << "The sum of multiples of 3 or 5 below " << n << " is: " << sum << endl;

    return 0;
}