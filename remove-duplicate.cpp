#include <bits/stdc++.h>
// https://leetcode.com/problems/remove-duplicates-from-sorted-array/submissions/1199475435/
// Bài tập này thực ra đơn thuần là đếm số lượng phần tử bị duplicated, chứ không hẳn là remove duplicates
// Tại vì chỉ cần return về số lượng phần tử duplicates là đã hoàn thành được bài tập rồi
using namespace std;
class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int j = 1;
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] != nums[i - 1])
            {
                nums[j] = nums[i];
                j++;
            }
        }
        for (auto x : nums)
        {
            cout << x << " ";
        }
        return j;
    }
};

int main()
{
    Solution solution;
    vector<int> nums = {
        0, 0, 1, 2};
    cout << solution.removeDuplicates(nums) << endl;
    return 0;
}