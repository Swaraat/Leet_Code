

class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();
        string k = "";
        for (int i = 0; i < n; i++) {
            if (isalnum(s[i])) {
                k += tolower(s[i]);
            }
        }
        string m = k;
        reverse(m.begin(), m.end()); // Correct way to reverse a string
        if (m == k) {
            return true;
        } else {
            return false;
        }
    }
};
