#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    for (int i = 0; i < n; i++)
    {
        // SPACES
        for (int k = n - i; k > 0; k--)
        {
            cout << " ";
        }
        // FIRST PART OF PYRAMID TRIANGLE
        // ASCENDING NUMBERS
        for (int s = 1; s < i + 1; s++)
        {
            cout << s;
        }

        // SECOND PART OF PYRAMID TRIANGLE
        // DESCENDING NUMBERS
        for (int j = i + 1; j > 0; j--)
        {
            cout << j;
        }
        cout << endl;
    }

    return 0;
}

// OUTPUT

//        1
//      1 2 1
//    1 2 3 2 1
//  1 2 3 4 3 2 1