#include <iostream>
using namespace std;

int main()
{
    int arr[] = {12, 13, 4, 5, 7};
    int sum = 0;
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    cout << sum << " ";
    return 0;
}
