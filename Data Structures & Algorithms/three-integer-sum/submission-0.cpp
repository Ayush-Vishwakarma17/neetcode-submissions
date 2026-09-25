class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        set<vector<int>> st;
        vector<vector<int>> result;
        for (int i = 0; i < nums.size()-2; i++) {
            if (i > 0 && nums[i] == nums[i-1]) {
                continue;
            }
            unordered_map<int, int> mp;
            for (int j = i + 1; j < nums.size(); j++) {
                int sum = nums[i] + nums[j];
                int need = 0 - sum;

                if (mp.count(need)) {
                    st.insert({nums[i], need, nums[j]});
                }
                mp[nums[j]] = j;
            }
        }
        for (auto &it: st) {
            result.push_back(it);
        }
        return result;
    }
};
