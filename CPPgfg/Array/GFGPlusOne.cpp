#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> increment(vector<int> arr, int n) {
        int carry = 1;
        for (int i = n - 1; i >= 0; --i) {
            int sum = arr[i] + carry;
            arr[i] = sum % 10;
            carry = sum / 10;
        }
        if (carry) {
            arr.insert(arr.begin(), carry);
        }
        return arr;
    }
};

int main()
{
    Solution obj;
    vector<int> arr = {1, 2, 3};
    vector<int> result = obj.increment(arr, arr.size());

    for (int digit : result)
    {
        cout << digit << " ";
    }
    return 0;
}
