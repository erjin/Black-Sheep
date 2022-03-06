// https://leetcode.com/problems/longest-substring-without-repeating-characters/
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int map[256] = {-1};
        int start = -1;
        int m = 0;
        
        for(int i = 0; i< s.size(); i++){
            if(map[s[i]] != -1){
                start = map[s[i]];
            }
            
            map[s[i]] = i;
            
            m = max(m, i-start);
        }
        return m;
    }
};