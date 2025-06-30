#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums;
    nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int maxSum = nums[0];
    int currentSum = nums[0];

    for (int i = 1; i < nums.size(); i++)
    {
        currentSum = max(nums[i], currentSum + nums[i]);
        maxSum = max(maxSum, currentSum);
    }

    cout << maxSum;
    return 0;
}