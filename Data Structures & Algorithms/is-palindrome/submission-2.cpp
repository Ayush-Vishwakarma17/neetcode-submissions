class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0;
        int j = s.size()-1;
        while (!isalnum(s[i])) {
            i++;
        }
        while (!isalnum(s[j])) {
            j--;
        }

        while (i < j) {
            
            if (tolower(s[i]) != tolower(s[j])) {
                return false;
            } else {
                i++;
                j--;
                    while (!isalnum(s[i]) && i < j) {
                        i++;
                    }
                    while (!isalnum(s[j]) && i < j) {
                        j--;
                    }
                }
            }
            return true;
        }
};
