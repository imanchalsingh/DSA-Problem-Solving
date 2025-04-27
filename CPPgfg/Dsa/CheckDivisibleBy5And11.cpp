#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter number: ";
    cin >> number;
    if (number % 5 == 0)
    {
        cout << "Divisable by 5.";
    }
    else if (number % 11 == 0)
    {
        cout << "Divisable by 11.";
    }
    else
    {
        cout << number << " " << "is not divisable  by 5 and 11.";
    }

    return 0;
}