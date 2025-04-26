#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[] = {12, 45, 2, 67, 33, 89, 23};
    int n = sizeof(arr) / sizeof(arr[0]);

    int maxVal = *max_element(arr, arr + n);

    cout << "Maximum element: " << maxVal << endl;
    return 0;
}
