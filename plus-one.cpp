// https://leetcode.com/problems/plus-one/description/
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<int> plusOne(vector<int> &nums)
    {
        for (int i = nums.size() - 1; i >= 0; i--)
        {
            if (nums[i] != 9)
            {
                nums[i]++;
                return nums;
            }
            nums[i] = 0;
        }

        // If all nums were 9, we need to add an additional digit at the beginning
        nums.insert(nums.begin(), 1);

        return nums;
    }
};

int main()
{
    Solution solution;
    vector<int> nums = {1, 2, 3};
    std::vector<int> returnedVector = solution.plusOne(nums);
    std::cout << "Returned Vector: ";
    for (int element : returnedVector)
    {
        std::cout << element << " ";
    }
    return 0;
}