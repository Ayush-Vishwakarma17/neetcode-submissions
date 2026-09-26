class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s.size() == 0) {
            return 0;
        }
        int l = 0, r = 0, maxLength = INT_MIN;
        unordered_map<int, int> freq;
        while (r < s.size()) {
            freq[s[r] - 'a']++;
            if (freq[s[r] - 'a'] > 1) {
                while (l < s.size() && freq[s[r] - 'a'] > 1) {
                    freq[s[l] - 'a']--;
                    l++;
                }
            }
            maxLength = max(maxLength, r - l + 1);
            r++;
        }
        return maxLength;
    }
};
