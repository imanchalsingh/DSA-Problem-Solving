#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {1, 3, 4, 2, 4, 5};
    int m = 2;

    // Reverse from index m+1 to end
    reverse(arr.begin() + m + 1, arr.end());

    // Print result
    for (int num : arr)
    {
        cout << num << " ";
    }
    return 0;
}