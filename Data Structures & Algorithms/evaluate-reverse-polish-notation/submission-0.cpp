class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(string c:tokens)
        {
            if(c=="+")
                {
                    int n1=st.top();
                    st.pop();
                    int n2=st.top();
                    st.pop();
                    st.push(n1+n2);
                }
                 else if(c=="-")
                {
                    int n1=st.top();
                    st.pop();
                    int n2=st.top();
                    st.pop();
                    st.push(n2-n1);
                }
                 else if(c=="*")
                {
                    int n1=st.top();
                    st.pop();
                    int n2=st.top();
                    st.pop();
                    st.push(n1*n2);
                }
                 else if(c=="/")
                {
                    int n1=st.top();
                    st.pop();
                    int n2=st.top();
                    st.pop();
                    st.push(n2/n1);
                }
            else
            {
                int i=stoi(c);
                st.push(i);

            }
            
        }
        return st.top();        
    }
};
