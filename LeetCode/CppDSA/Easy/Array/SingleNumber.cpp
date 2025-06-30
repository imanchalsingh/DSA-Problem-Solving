#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr;
    arr = {1, 1, 4, 4, 6};
    int ans = 0;
    for (int val : arr)
    {
        ans = ans ^ val;
    }
    cout << ans;
    return 0;
}