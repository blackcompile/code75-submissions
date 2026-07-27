class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int>p;
        for(int n:nums){
            if(p.count(n)){
                return true;
            }
            p.insert(n);
        }
        return false;    
    }
};