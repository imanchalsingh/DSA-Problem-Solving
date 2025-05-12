#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<int> num;
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter " << n << " numbers:\n";
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        num.push_back(x);
    }

    reverse(num.begin(), num.end());

    cout << "Reversed array: ";
    for (int i = 0; i < n; ++i)
    {
        cout << num[i] << " ";
    }

    return 0;
}
