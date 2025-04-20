#include <iostream>
#include <unordered_set>
#include <string>
using namespace std;

string reverse_unique_string(string s)
{
    unordered_set<char> seen;
    string result = "";

    for (int i = s.size() - 1; i >= 0; i--)
    {
        char ch = s[i];

        if (ch != ' ' && seen.find(ch) == seen.end())
        {
            result += ch;
            seen.insert(ch);
        }
    }

    return result;
}

int main()
{
    string s1 = "BE YOUR BEST VERSION";
    string s2 = "IMANCHALSINGH";

    cout << reverse_unique_string(s1) << endl;
    cout << reverse_unique_string(s2) << endl;

    return 0;
}
