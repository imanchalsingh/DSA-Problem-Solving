#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        bool ok = true;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == 'Y' && s[i + 1] == 'Y')
            {
                ok = false;
                break;
            }
        }
        cout << (ok ? "YES" : "NO") << endl;
    }
    return 0;
}