class MinStack {
public:
stack<int>st;
stack<int>minSt;
    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
        if(minSt.empty()||val<=minSt.top())
        minSt.push(val);
        
    }
    
    void pop() {
        if(st.top()==minSt.top())
        minSt.pop();

        st.pop();
    }
    //minst-1
    //st-2,1
    int top() {
        return st.top();
        
    }
    
    int getMin() {
        return minSt.top();
        
    }
};
