class Solution {
public:
vector<vector<string>>res;
int n;
    vector<vector<string>> partition(string s) {
        vector<string> curr;
        n=s.length();
        dfs(s,0,0,curr);
        
        return res;

    }
    void dfs(string s, int i,int j,vector<string>& curr)
    {
        if(i>=n)
        {
            if(i==j)
            res.push_back(curr);
            return;
        }
        if(isPalindrome(s,j,i))
        {
            curr.push_back(s.substr(j,i-j+1));
            dfs(s,i+1,i+1,curr);
            curr.pop_back();
        }
        dfs(s,i+1,j,curr);
    }
    bool isPalindrome(string s, int j, int i)
    {
        string temp=s.substr(j,i-j+1);
        reverse(temp.begin(),temp.end());
        if(s.substr(j,i-j+1)==temp)
        return true;
        else
        return false;
    }
};
