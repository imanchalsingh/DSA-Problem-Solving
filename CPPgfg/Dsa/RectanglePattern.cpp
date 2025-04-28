#include <iostream>
using namespace std;

int main()
{
    int rn, cn;
    string ps;
    cout << "Enter Row number: ";
    cin >> rn;
    cout << "Enter Column number: ";
    cin >> cn;
    cout << "What you wanna print(String): ";
    cin >> ps;
    for (int i = 1; i <= rn; i++)
    {
        for (int j = 1; j <= cn; j++)
        {
            cout << ps << " ";
        }
        cout << endl;
    }

    return 0;
}