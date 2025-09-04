#include <iostream>
using namespace std;
bool divisorGame(int n)
{
    if (n % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int DG = divisorGame(2);
    cout << DG;
    return 0;
}