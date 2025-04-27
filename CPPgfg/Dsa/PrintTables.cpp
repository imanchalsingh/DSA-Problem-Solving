#include <iostream>
using namespace std;

int main()
{
    int tn;
    cout << "Enter table number: ";
    cin >> tn;
    for (int i = 1; i <= 10; i++)
    {
        cout << i * tn << " ";
    }

    return 0;
}