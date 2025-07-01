#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr;
    arr = {
        2,
        2,
        1,
        1,
        4,
    };
    int ans = 0;
    for (int val : arr)
    {
        ans = ans ^ val;
    }
    cout << ans;
    return 0;
}