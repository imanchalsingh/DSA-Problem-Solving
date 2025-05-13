#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4};
    int lenArr = sizeof(arr) / sizeof(arr[0]);
    arr[lenArr - 1] += 1;
    // Print the updated array
    for (int i = 0; i < lenArr; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}