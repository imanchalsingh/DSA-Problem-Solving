#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> arr = {2, 3};
    int multi = 1;
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        multi *= arr[i];
    }
    cout << multi << " ";

    return 0;
}