class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>mp;
        for(int n:nums){
            mp.insert(n);
        }
        int ans=0;
        for(int n:nums){
            if(mp.count(n-1))
            continue;

            int cur=n;
            int l=1;
            while(mp.count(cur+1)){
                cur++;
                l++;

            }
            ans=max(ans,l);
        }
        return ans;
    }
};
