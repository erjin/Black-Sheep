// https://leetcode.com/problems/rotate-array/

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if(k  ==0 || nums.size()==1)
            return;
        int size = nums.size();
        int n = size;
        int cur = 0;
        int next;
        int value = nums[cur];
        int start=0;
        for(int i = 0; i < size; i++){
            next =  (cur + k)% size;
            int tmp = nums[next];
            nums[next] = value;
            value = tmp;
            cur = next;
            if (cur == start) {
                if(++cur >= size)
                    return;
			    value = nums[cur];
			    ++start;
		    }
        }
    }
};

