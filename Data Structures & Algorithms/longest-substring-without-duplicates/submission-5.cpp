class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s.size() == 0) {
            return 0;
        }
        int l = 0, r = 0, maxLength = INT_MIN;
        unordered_map<char, int> freq;
        while (r < s.size()) {
            freq[s[r]]++;
            if (freq[s[r]] > 1) {
                while (l < s.size() && freq[s[r]] > 1) {
                    freq[s[l]]--;
                    l++;
                }
            }
            maxLength = max(maxLength, r - l + 1);
            r++;
        }
        return maxLength;
    }
};
