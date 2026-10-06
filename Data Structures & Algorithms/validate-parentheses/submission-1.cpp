class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (auto &ch : s) {
            if (!st.empty()) {
                if (st.top() == '{' && ch == '}') {
                    st.pop();
                    continue;
                } else if (st.top() == '(' && ch == ')') {
                    st.pop();
                    continue;
                } else if (st.top() == '[' && ch == ']') {
                    st.pop();
                    continue;
                }
            }
            st.push(ch);
        }
        return st.empty();
    }
};
