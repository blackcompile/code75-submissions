class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(int n:nums){
            mp[n]++;
        }
        vector<vector<int>>bucket(nums.size()+1);
        for(auto it:mp){
            bucket[it.second].push_back(it.first);
        }
        vector<int>ans;
        for(int f=bucket.size()-1;f>=0;f--){
            for(int n:bucket[f]){
                ans.push_back(n);
                if(ans.size()==k){
                    return ans;
                }
            }
        }
        return ans;
    }
};
