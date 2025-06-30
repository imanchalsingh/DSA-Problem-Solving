#include <iostream>
#include <vector>
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

    int maxVal = arr[0];
    for (int val : arr)
    {
        if (val > maxVal)
            maxVal = val;
    }

    cout << "Maximum Element: " << maxVal << endl;

    return 0;
}
