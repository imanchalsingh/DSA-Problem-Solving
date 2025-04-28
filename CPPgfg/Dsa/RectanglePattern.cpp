#include <iostream>
using namespace std;

int main()
{
    int rn, cn;
    cout << "Enter Row number: ";
    cin >> rn;
    cout << "Enter Column number: ";
    cin >> cn;
    for (int i = 1; i <= rn; i++)
    {
        for (int j = 1; j <= cn; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}