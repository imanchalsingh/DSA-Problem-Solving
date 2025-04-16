#include <iostream>
using namespace std;

int main()
{
    int n, t1 = 1, t2 = 2, nT = 0;
    cout << "Enter numbers: ";
    cin >> n;

    while (t1 < n)
    {
        cout << t1 << " ";
        nT = t1 + t2;
        t1 = t2;
        t2 = nT;
    }

    return 0;
}