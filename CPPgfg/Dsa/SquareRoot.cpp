#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;
    int i = 1;
    while (i * i <= num)
    {
        if (i * i == num)
        {
            cout << "Square root is: " << i << endl;
            return 0;
        }
        i++;
    }

    cout << num << " is not a perfect square." << endl;
    return 0;
}
