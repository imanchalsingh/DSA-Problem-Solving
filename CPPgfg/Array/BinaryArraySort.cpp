#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {0, 1, 1, 0, 1, 0, 1, 1, 0};
    int count0 = 0;

    for (int num : arr)
    {
        if (num == 0)
            count0++;
    }

    for (int i = 0; i < arr.size(); i++)
    {
        arr[i] = (i < count0) ? 0 : 1;
    }

    for (int num : arr)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
