// https://leetcode.com/problems/find-minimum-in-rotated-sorted-array
class Solution
{
public:
    int findMin(vector<int> &nums)
    {
        if (nums.size() == 1)
            return nums[0];
        int start = 0;
        int end = nums.size() - 1;

        while (start + 1 < end)
        {
            if (nums[start] < nums[end])
                return nums[start];

            int mid = start + (end - start) / 2;
            if (nums[mid] > nums[start])
                start = mid;
            else
                end = mid;
        }

        return (nums[start] < nums[end]) ? nums[start] : nums[end];
    }
};