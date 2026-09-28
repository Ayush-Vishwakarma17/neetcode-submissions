class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack <string> st;
        for (auto it: tokens) {
            st.push(it);
            if (st.top() == "/") {
                st.pop(); int val1 = stoi(st.top()); st.pop();
                int val2 = stoi(st.top()); st.pop();
                 val2 = val2 / val1;
                string n = to_string(val2);
                st.push(n);
            } else if (st.top() == "+") {
                st.pop(); int val1 = stoi(st.top()); st.pop();
                int val2 = stoi(st.top()); st.pop();
                 val2 = val2 + val1;
                string n = to_string(val2);
                st.push(n);
            } else if (st.top() == "-") {
                st.pop(); int val1 = stoi(st.top()); st.pop();
                int val2 = stoi(st.top()); st.pop();
                 val2 = val2 - val1;
                string n = to_string(val2);
                st.push(n);
            } else if (st.top() == "*") {
                st.pop(); int val1 = stoi(st.top()); st.pop();
                int val2 = stoi(st.top()); st.pop();
                 val2 = val2 * val1;
                string n = to_string(val2);
                st.push(n);
            }
        }
        int ans = stoi(st.top());
        return ans;
    }
};
