#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        for (int i = 0; i <= nums.size() - 1; i++)
        {
            if (nums[i] == target)
            {
                return i;
            }
        }
        return -1;
    }
};

int main()
{
    Solution obj;

    vector<int> nums = {4, 2, 7, 1, 9, 3}; // example array
    int target = 9;                        // element to search

    int result = obj.search(nums, target);

    if (result != -1)
        cout << "Element found at index: " << result << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}
