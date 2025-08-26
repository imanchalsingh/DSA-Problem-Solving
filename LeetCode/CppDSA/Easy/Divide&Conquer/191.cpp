#include <iostream>
using namespace std;

int NumOfOneBit(int n)
{
    int count = 0;
    while (n != 0)
    {
        if (n & 1)
        {
            count++;
        }
        n = n >> 1;
    }

    return count;
}

int main()
{
    int numofonebit = NumOfOneBit(11);
    cout << numofonebit << endl;
    return 0;
}