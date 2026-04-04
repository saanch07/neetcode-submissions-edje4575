class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int>s1_f(26,0);
        vector<int>window_f(26,0);
      
        for(char c:s1)
        {
            s1_f[c-'a']++;
        }
        int k=s1.length();
        int l=0;
   
        int n=s2.length();
        for(int r=0;r<n;r++)
        {
            window_f[s2[r]-'a']++;
            if(r-l+1>k)
            {
                window_f[s2[l]-'a']--;
                l++;
            }
            if(r-l+1==k)
            {
                if(s1_f==window_f)
                return true;

            }
            
        }
        return false;

        
    }
};
