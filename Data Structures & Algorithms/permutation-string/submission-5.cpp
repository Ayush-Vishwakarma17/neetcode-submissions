class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s2.size() < s1.size()) {
            return false;
        }
        vector<int> f1(26, 0);
        vector<int> f2(26, 0);
        for (auto &c : s1) {
            f1[c-'a']++;
        }
        int k = s1.size();
        int l = 0, r = 0;

        while (r < k) {
            f2[s2[r] - 'a']++;
            r++;
        }
        r--;
        while (r < s2.size()) {
            if (f1 == f2) {
                return true;
            } 
            f2[s2[l] - 'a']--;
            l++;
            r++;
            if (r < s2.size()) {
                f2[s2[r] - 'a']++;
            }
            
            
            
        }
        return false;
    }
};
