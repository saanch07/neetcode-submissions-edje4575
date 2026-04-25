class Solution {
public:
vector<string>res;
    vector<string> generateParenthesis(int n) {
        string s;
        backtrack(0,0,n,s);
        return res;
    }
    void backtrack(int open, int close, int n, string& curr)
    {
        if(open==close && open ==n)
        {
            res.push_back(curr);
            return;
        }
        if(open<n)
        {
            curr+="(";
            backtrack(open+1,close,n,curr);
            curr.pop_back();
        }
        if(close<open)
        {
            curr+=")";
            backtrack(open,close+1,n,curr);
            curr.pop_back();
        }
    }
};
