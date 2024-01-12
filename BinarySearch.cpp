#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int binarySearch(vector<int> &nums, int target)
    {
        int mid = 0, low = 0, high = nums.size() - 1;
        while (low <= high)
        {
            mid = (low + high) / 2;
            if (nums[mid] == target)
            {
                return mid;
            }
            else if (nums[mid] < target)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        return -1;
    }
};

int main()
{
    vector<int> arr{1, 5, 8, 34, 87};
    Solution s;
    cout << s.binarySearch(arr, 34);
    cout << endl;
    return 0;
}