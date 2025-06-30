#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // array input---
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cout << "Enter elements of array: ";
        cin >> arr[i];
    }
    // insert 2 elements in array---
    arr.push_back(3);
    arr.push_back(6);

    // print array------
    for (int val : arr)
    {
        cout << val << " ";
    }
    cout << endl;
    // size of array--
    cout << "Size of array: " << arr.size() << endl;

    return 0;
}