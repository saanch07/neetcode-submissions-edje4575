class Solution {
public:
    string longestPalindrome(string s) {
        string ans;
        int maxL=0;
        int n=s.length();
        if(n==1||n==0)
        return s;
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                string t=s.substr(i,j-i+1);
                reverse(t.begin(),t.end());
                if(t==s.substr(i,j-i+1))
                {
                    if(maxL<j-i+1)
                    {
                        maxL=j-i+1;
                        ans=s.substr(i,j-i+1);
                    }
                }

            }
        }
        return ans;
        
    }
};
