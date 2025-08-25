// Number version of Inverted Triangle Pattern.
#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        // Spaces..
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        // Nums..
        for (int j = 0; j < n - i; j++)
        {
            cout << (i + 1);
        }
        cout << endl;
    }

    return 0;
}