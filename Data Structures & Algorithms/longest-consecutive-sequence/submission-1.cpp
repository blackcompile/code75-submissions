class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>st;
        for(int n:nums){
            st.insert(n);
        }
        int ans=0;
        for(int n:nums){
            if(st.count(n-1))
            continue;

            int cur=n;
            int l=1;
            while(st.count(cur+1)){
                cur++;
                l++;
            }
              ans=max(ans,l);  
        }
        return ans;
    }
};
