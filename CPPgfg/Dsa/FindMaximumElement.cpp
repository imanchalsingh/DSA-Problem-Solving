#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int sn;
    cout << "Size of array: ";
    cin >> sn;

    vector<int> arr(sn);
    for (int i = 0; i < sn; i++)
    {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }

    // max_element returns an iterator
    auto maxIt = max_element(arr.begin(), arr.end());
    cout << "Maximum Element: " << *maxIt << endl;

    return 0;
}
