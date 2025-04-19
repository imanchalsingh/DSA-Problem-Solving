#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string str = "HELLO WORLD!";
    sort(str.begin(), str.end());
    cout << "Sorted string: " << str << endl;

    return 0;
}
