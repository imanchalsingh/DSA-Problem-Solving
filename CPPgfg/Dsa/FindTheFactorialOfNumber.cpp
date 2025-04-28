#include <iostream>
using namespace std;

int main()
{
    int n;
    int fn = 1;
    cout << "Enter number: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        fn *= i;
    }
    cout << fn << endl;

    return 0;
}