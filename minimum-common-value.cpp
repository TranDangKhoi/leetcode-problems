// https://leetcode.com/problems/minimum-common-value/description/?envType=daily-question&envId=2024-03-09
#include <bits/stdc++.h>
// Step 1: Find the common value in 2 arrays
// Step 2: Compare the common values to identify which one is the smallest
// nums1: {4,5,10,12}
// nums2: {1,2,3,4,5}
using namespace std;

class Solution
{
public:
    int getCommon(vector<int> &nums1, vector<int> &nums2)
    {
        int i = 0;
        int j = 0;
        int common = INT_MAX;
        while (i < nums1.size() && j < nums2.size())
        {
            if (nums1[i] == nums2[j])
            {
                common = nums1[i];
                break;
            }
            else if (nums1[i] < nums2[j])
            {
                i++;
            }
            else
            {
                j++;
            }
        }
        return common != INT_MAX ? common : -1;
    }
};

int main()
{
    Solution solution;
    vector<int> nums1 = {4, 5, 10, 12};
    vector<int> nums2 = {1, 2, 3, 4, 5};
    cout << solution.getCommon(nums1, nums2) << endl;
    return 0;
}