// Alphbatical version of Inverted Triangle Pattern.
#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    char ch = 'A';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }

        for (int j = 0; j < n - i; j++)
        {
            cout << ch;
        }
        cout << endl;
        ch++;
    }

    return 0;
}

// Output
// AAAA
//  BBB
//   CC
//    D