class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.length();
        int resLen=INT_MIN;
        int resI=0;
        vector<vector<bool>>dp(n,vector<bool>(n,false));
        for(int i=n-1;i>=0;i--)
        {
            for(int j=1;j<n;j++)
            {
                if(s[i]==s[j]&& ((j-i<=2 || dp[i+1][j-1])))
                {
                    dp[i][j]=true;
                    if(resLen<j-i+1)
                    {
                        resLen=j-i+1;
                        resI=i;
                    }

                }
            }
        }return s.substr(resI,resLen);
        
    }
};
