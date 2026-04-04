class Solution {
public:
    bool isPalindrome(string s) {
        string t="";
        for(char c:s)
        {
            if(isalnum(c))
            {
                t+=tolower(c);
            }
        }
        string t2=t;
        reverse(t2.begin(),t2.end());
        if(t2==t)
        return true;

        return false;
        
    }
};
