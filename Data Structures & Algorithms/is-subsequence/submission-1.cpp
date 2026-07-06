class Solution {
public:
    bool isSubsequence(string s, string t) {
        bool isFound=true;
        int i=0;
        int j=0;
        if(s=="")
        return true;
        for(int i=0;i<t.length();i++)
        {
            if(t[i]==s[j])
            {
                if(j==s.length()-1)
                {
                    return true;
                }
                j++;
            }
        }
        return false;
        
        
    }
};