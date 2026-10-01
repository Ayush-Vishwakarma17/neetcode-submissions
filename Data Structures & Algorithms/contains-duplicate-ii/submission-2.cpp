class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> pos;
        for (int i = 0; i < nums.size(); i++) {
            if (pos.count(nums[i]) && abs(pos[nums[i]] - i) <= k) {
                return true;
            }
            pos[nums[i]] = i;
        }
        return false;
    }
};