https://leetcode.com/problems/permutation-in-string/

class Solution {
public:
    bool allzero(unordered_map<char, int> &m){
        for(auto &pair: m){
            if(pair.second != 0)
                return false;
        }
        return true;
    }
    
    bool checkInclusion(string s1, string s2) {
        unordered_map<char, int> m;
        
        int len1 = s1.size();
        int len2 = s2.size();
        if(len1 > len2)
            return false;
        
        for(int i = 0; i < len1; i++){
            m[s1[i]]++;
            m[s2[i]]--;
        }
        
        if(allzero(m)) return true;
        
        for(int i = len1; i<len2; i++){
            m[s2[i]]--;
            m[s2[i-len1]]++;
            if(allzero(m)) return true;
        }
        return false;
    }
};