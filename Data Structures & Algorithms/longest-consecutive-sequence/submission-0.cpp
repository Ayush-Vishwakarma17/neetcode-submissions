class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(), nums.end());
        int maxL = 0;
        for (auto & val: nums) {
            if (!st.count(val-1)) {
                int num = val;
                int len = 1;
                while (st.count(num)) {
                    maxL = max(len, maxL);
                    num++;
                    len++;
                }
            }
        }
        return maxL;
    }
};
