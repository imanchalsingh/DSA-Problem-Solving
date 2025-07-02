#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> a;
    a = {1, 2, 3, 4};
    vector<int> b;
    b = {4, 3, 0, 2};
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    for (int valofa : a)
    {
        cout << valofa;
    }
    cout << endl;
    for (int valofb : b)
    {
        cout << valofb;
    }
    cout << endl;
    if (a == b)
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }
    return 0;
}