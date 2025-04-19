#include <iostream>
using namespace std;

int main()
{
    int n = 100;

    long long sum = n * (n + 1) / 2;
    long long squareOfSum = sum * sum;

    long long sumOfSquares = n * (n + 1) * (2 * n + 1) / 6;

    long long difference = squareOfSum - sumOfSquares;

    cout << "Sum square difference for first " << n << " numbers is: " << difference << endl;

    return 0;
}
