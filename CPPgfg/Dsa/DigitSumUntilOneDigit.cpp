#include <iostream>
using namespace std;

int sumOfDigits(int num)
{
    int sum = 0;
    while (num > 0)
    {
        sum += num % 10;
        num = num / 10;
    }
    return sum;
}

int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;

    cout << n;
    int current = n;

    while (current >= 10)
    {
        current = sumOfDigits(current);
        cout << " > " << current;
    }

    cout << "\nDigital Root: " << current << endl;

    return 0;
}
