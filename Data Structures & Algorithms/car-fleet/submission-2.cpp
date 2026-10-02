class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<float , float>> v;
        for (int i = 0; i < position.size(); i++) {
            v.push_back({(float)(position[i]), (float)(speed[i])});
        }
        sort(v.begin(), v.end(), greater<pair<int, int>>());

        stack <float> st;

        for (auto p: v) {
            float time = ((target - p.first) / p.second);
            if (!st.empty() && st.top() < time) {
                st.push(time);
            } else if (!st.empty() && st.top() > time) {
                continue;
            } else if (st.empty()) {
                st.push(time);
            }
        }

        return st.size();
    }
};
