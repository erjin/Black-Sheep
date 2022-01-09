// https://leetcode.com/problems/search-in-rotated-sorted-array/
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size()-1;
        
        while(start+1<end){
            int mid = start + (end-start)/2;
            
            if(nums[mid]==target){
                return mid;
            }
            // Determine if the pivot point is on the left or the right
            // Here the pivot point is on the right
            if(nums[start] < nums[mid]){
                // target is between start and mid, all good end = mid
                if(nums[start] <= target && target <= nums[mid])
                    end = mid;
                else // give up the first half
                    start = mid;
            }else{
            // Here the pivot point is on the left
                if(nums[end] >= target && target >= nums[mid])
                    start = mid;
                else
                    end = mid;
            }
        }
        if(nums[start]== target)
            return start;
        if(nums[end]== target)
            return end;
        return -1;
        
    }
};