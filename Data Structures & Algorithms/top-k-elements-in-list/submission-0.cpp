class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> result;
        unordered_map<int, int> freq;
        for (auto &v: nums) {
            freq[v]++;
        }

        priority_queue<pair<int,int>, vector<pair<int,int>>, less<pair<int,int>>> picks;
        for (auto &v : freq) {
            picks.push({v.second, v.first});
        }

        while (k--) {
            auto v = picks.top();picks.pop();
            result.push_back(v.second);
        }
        return result;
    }
};
