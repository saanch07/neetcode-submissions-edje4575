class Solution {
public:
    bool isAnagram(string s, string t) {
        // unordered_map<char,int>mp1;
        // unordered_map<char,int>mp2;
        vector<int>v1(26,0);
        vector<int>v2(26,0);
        for(char c:s)
        {
            v1[c-'a']+=1;
        }
        for(char c:t)
        {
            v2[c-'a']+=1;
        }
        return v1==v2;
        
    }
};
