class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        if(s.size()==1)
        return false;
        for(char c:s)
        {
           if(st.empty())
           st.push(c);

           else if(c==')' && st.top()=='(')
                st.pop();
            else if(c=='}' && st.top()=='{')
                st.pop();
        else if(c==']' && st.top()=='[')
                st.pop();
                else
                st.push(c);
            
        }
        if(st.empty())
        return true;
        else 
        return false;
        
    }
};
