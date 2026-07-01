class Solution {
public:
int changeways(vector<int>& coins,int i,int amount,vector<vector<int>>&dp)
{
    int n=coins.size();
    if(i>=n)
    return 0;
  
    if(amount==0)
    return 1;
    if(dp[i][amount]!=-1)
    return dp[i][amount];

    int take=0;
    int notTake=0;
    if(coins[i]<=amount)
    {
        take=changeways(coins,i,amount-coins[i],dp);
        notTake=changeways(coins,i+1,amount,dp);
    }

    return dp[i][amount]=take+notTake;
}
    int change(int amount, vector<int>& coins) {
        int n=coins.size();
        sort(coins.begin(),coins.end());
        vector<vector<int>>dp(n,vector<int>(amount+1,-1));

        return changeways(coins,0,amount,dp);
        
    }
};
