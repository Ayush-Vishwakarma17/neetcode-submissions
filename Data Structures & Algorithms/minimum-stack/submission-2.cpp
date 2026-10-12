class MinStack {
public:
stack<pair<int, int>> st;
    
    MinStack() {
        
    }
    
    void push(int val) {
        if (st.empty()) {
            st.push({val, val});
        } else {
            int mini = min(st.top().second, val);
            st.push({val, mini});
        }
    }
    
    void pop() {
        st.pop();
    }
    
    int top() {
        return st.top().first;
    }
    
    int getMin() {
        if (!st.empty()) {
            return st.top().second;
        }
    }
};
