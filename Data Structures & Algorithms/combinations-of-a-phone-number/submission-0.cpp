class Solution {
public:
vector<string>res;
vector<string>digToChar={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    vector<string> letterCombinations(string digits) {
        if(digits.empty())
        return res;

        
        backtrack(0,digits,"");
        return res;
        
    }
    void backtrack(int i, string& digits, string curr)
    {
        if(curr.size()==digits.size())
        {
            res.push_back(curr);
            return;
        }
        string characters=digToChar[digits[i]-'0'];
        for(char c:characters)
        {
            backtrack(i+1,digits,curr+c);
        }
    }
};
