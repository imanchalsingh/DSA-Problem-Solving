#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> selfDividingNumbers(int left, int right)
    {
        vector<int> arr;

        for (int i = left; i <= right; i++)
        {
            int num = i;
            bool isSelfDividing = true;

            while (num > 0)
            {
                int digit = num % 10;
                if (digit == 0 || i % digit != 0)
                {
                    isSelfDividing = false;
                    break;
                }
                num /= 10;
            }

            if (isSelfDividing)
            {
                arr.push_back(i);
            }
        }

        return arr;
    }
};

int main()
{
    Solution obj;

    int left = 1, right = 50; // Example range
    vector<int> result = obj.selfDividingNumbers(left, right);

    cout << "Self-dividing numbers between " << left << " and " << right << ": ";
    for (int num : result)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
