class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            int nd=target-nums[i];
            if(mp.find(nd)!=mp.end()){
                return {mp[nd],i};
            }
            mp[nums[i]]=i;
        }
        return {};
    }
};
