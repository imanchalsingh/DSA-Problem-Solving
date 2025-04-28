#include <iostream>
using namespace std;

int main()
{
    // in = increment number.
    // n is row number
    int n, in = 1;
    cout << "Enter number: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << in << " ";
            in++;
        }
        cout << endl;
    }

    return 0;
}
