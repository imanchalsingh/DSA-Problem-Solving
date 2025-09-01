#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findMin(vector<int> &nums)
    {
        return *min_element(nums.begin(), nums.end());
    }
};

int main()
{
    Solution obj;

    vector<int> nums = {3, 4, 5, 1, 2}; // example rotated sorted array

    int result = obj.findMin(nums);

    cout << "Minimum element is: " << result << endl;

    return 0;
}
