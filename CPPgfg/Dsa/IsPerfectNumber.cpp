#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;
    int sum = 0;
    int temp = num;
    for (int i = 1; i < temp; i++)
    {
        if (temp % i == 0)
        {
            cout << i << " ";
            sum += i;
        }
    }
    cout << "\nSum is: " << sum << endl;
    if (sum == num)
    {
        cout << num << " " << "is perfect number." << endl;
    }
    else
    {
        cout << "Is not a perfect number." << endl;
    }

    return 0;
}