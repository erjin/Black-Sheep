// https://leetcode.com/problems/search-in-rotated-sorted-array/
class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        if (nums.size() == 0)
            return -1;

        int start = 0;
        int end = nums.size() - 1;
        int mid = 0;
        while (start + 1 < end)
        {
            int mid = start + (end - start) / 2;
            if (nums[mid] == target)
                return mid;

            if (nums[start] < nums[mid])
            {
                if (nums[start] <= target && nums[mid] >= target)
                    end = mid;
                else
                    start = mid;
            }
            else
            {
                if (nums[end] >= target && nums[mid] <= target)
                    start = mid;
                else
                    end = mid;
            }
        }

        if (nums[start] == target)
            return start;
        else if (nums[end] == target)
            return end;
        else
            return -1;
    }
};