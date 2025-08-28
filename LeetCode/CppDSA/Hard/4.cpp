#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> nums1, nums2;
    nums1 = {1, 2, 3};
    nums2 = {4};
    // step 1: merge

    vector<int> nums3 = nums1;
    nums3.insert(nums3.end(), nums2.begin(), nums2.end());

    // step 2: sort
    sort(nums3.begin(), nums3.end());

    int n = nums3.size();

    // step 3:find median
    if (n % 2 == 1)
    {
        cout << nums3[n / 2]; // odd length -> middle element
    }
    else
    {
        cout << (nums3[n / 2 - 1] + nums3[n / 2]) / 2.0; // even length -> average of two middle
    }
}