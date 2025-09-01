#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        int start = 0;
        int end = nums.size() - 1;
        int mid = start + (end - start) / 2;
        while (start <= end)
        {
            if (nums[mid] == target)
            {
                return mid;
            }
            else if (nums[mid] < target)
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
            mid = start + (end - start) / 2;
        }
        return -1;
    }
};

int main()
{
    Solution obj;

    vector<int> nums = {-1, 0, 3, 5, 9, 12}; // sorted array
    int target = 9;                          // element to search

    int result = obj.search(nums, target);

    if (result != -1)
        cout << "Element found at index: " << result << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}
