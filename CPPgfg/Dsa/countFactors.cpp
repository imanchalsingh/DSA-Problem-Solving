#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;
    int fact = 1;
    for (int i = 0; i < n; i++)
    {
        if (n % fact == 0)
        {
            fact++;
        }
    }
    cout << fact;

    return 0;
}