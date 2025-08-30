#include <iostream>
using namespace std;

int main()
{
    int n = 13;
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        int num = i;
        while (num > 0)
        {
            if (num % 10 == 1)
            {
                count++;
            }
            num /= 10;
        }
    }
    cout << "Total 1's from 1 to 15: " << count << endl;

    return 0;
}