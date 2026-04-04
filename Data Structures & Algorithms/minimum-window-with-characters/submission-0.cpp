class Solution {
public:
    string minWindow(string s, string t) {
        if(t.empty())
        return "";
        if(s==t)
        return s;
        unordered_map<char,int> mp;
        unordered_map<char,int> mp2;
        for(char c:t)
        {
            mp[c]++;
        }
        int resLen=INT_MAX;
        int have=0;int need=mp.size();
        pair<int,int> res={-1,-1};
        int left=0;
        for(int right=0;right<s.length();right++)
        {
            char c=s[right];
            mp2[c]++;
            if( mp.count(c) && mp2[s[right]]==mp[s[right]])
            have++;
        
        while(have==need)
        {
            if(right-left+1<resLen)
            {
                resLen=right-left+1;
                res={left,right};
            }
            mp2[s[left]]--;
            if(mp.count(s[left]) && mp2[s[left]]<mp[s[left]])
            have--;

            left++;
        }
        }
        return resLen==INT_MAX?"":s.substr(res.first,resLen);
    }
};
