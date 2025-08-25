// Increase Alphabatical Sqaure Pattern.
#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    char ch = 'A';
    for (int i = 0; i < n; i++)
    {
        for (int i = 0; i < n; i++)
        {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }

    return 0;
}