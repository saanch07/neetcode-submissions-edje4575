class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int max_len=1;
        int left=0;
        if(s=="")
        return 0;
        unordered_map<char,int>mp;
        mp[s[left]]++;
        for(int right=1;right<s.length();right++)
        {
            mp[s[right]]++;
            while(mp[s[right]]>1)
            {
                mp[s[left]]--;
                if(mp[s[left]]==0)
                mp.erase(s[left]);
                left++;
            }
            max_len=max(max_len,right-left+1);

        }
        return max_len;
        
    }
};
