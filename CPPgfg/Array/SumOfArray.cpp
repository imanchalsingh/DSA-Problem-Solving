#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    int sum = 0;
    int n = arr.size();

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    cout << sum << endl;
    return 0;
}
