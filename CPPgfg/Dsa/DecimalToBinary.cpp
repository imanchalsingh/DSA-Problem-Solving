#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;
    int ans = 0;
    int pow = 1;

    while (n > 0)
    {
        int rem = n % 2;
        ans += rem * pow;
        pow *= 10;
        n /= 2;
    }

    cout << ans;
    return 0;
}
