#include <iostream>
using namespace std;

int main()
{
    int rn;
    string ps;
    cout << "Enter Row number: ";
    cin >> rn;
    cout << "What you wanna print(String): ";
    cin >> ps;
    for (int i = 1; i <= rn; i++)
    {
        for (int j = 1; j <= rn - i; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << ps << " ";
        }
        cout << endl;
    }

    return 0;
}