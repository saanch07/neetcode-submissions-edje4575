class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxLen=0;
        unordered_map<char,int>mp;
        int left=0;
        int n=s.length();
        
        for(int right=0;right<n;right++)
        {
            mp[s[right]]++;
            while(mp[s[right]]>1)
            {
                mp[s[left]]--;
                left++;
                if(mp[s[left]]==0)
                mp.erase(s[left]);
            }
            maxLen=max(maxLen,right-left+1);

        }
        return maxLen;
        
    }
};
