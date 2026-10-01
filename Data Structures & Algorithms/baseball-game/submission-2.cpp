class Solution {
public:
    int calPoints(vector<string>& operations) {
        int result = 0;
        stack <int> st;

        for (auto &s : operations) {
            if (s == "D") {
                int val = st.top();
                st.push(val*2); 
            } else if (s == "C") {
                st.pop();
            } else if (s == "+") {
                int n1 = st.top(); st.pop(); 
                int n2 = st.top(); st.pop();
                int sum = n1+n2;
                st.push(n2); st.push(n1); st.push(sum);
            } else {
                st.push(stoi(s));
            }
        }

        while (!st.empty()) {
            result += st.top(); st.pop();
        }
        return result;
    }
};