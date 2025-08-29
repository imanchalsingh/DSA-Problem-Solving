#include <iostream>
using namespace std;
bool isHappy(int n)
{
    while (n != 1 && n != 4)
    {
        int sum = 0;
        int temp = n;
        while (temp)
        {
            int d = temp % 10;
            sum += d * d;
            temp /= 10;
        }
        n = sum;
    }
    return n == 1;
}

int main()
{
    cout << isHappy(23) << endl;
    return 0;
}