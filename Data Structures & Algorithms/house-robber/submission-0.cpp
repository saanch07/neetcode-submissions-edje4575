class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n+1,0);
        return dfs(dp,nums,0);
        
    }
    int dfs(vector<int>&dp,vector<int>&nums, int i)
    {
        if(i>nums.size()-1)
        return 0;

        if(dp[i]!=0)
        return dp[i];

        dp[i]=max(dfs(dp,nums,i+1),nums[i]+dfs(dp,nums,i+2));
        return dp[i];
    }
};
