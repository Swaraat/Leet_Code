class Solution {
public:
    int ans = 1;

    bool isPalindrome(string& str) {
        int left = 0;
        int right = str.size() - 1;
        while (left < right) {
            if (str[left] != str[right]) {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }

    void solve(string& s, string& s1, string& s2, int i) {
        if (i == s.size()) {
            if (isPalindrome(s1) && isPalindrome(s2)) {
                int x = s1.size() * s2.size();
                ans = max(ans, x);
            }
            return;
        }

        // Include the current character in s1
        s1.push_back(s[i]);
        solve(s, s1, s2, i + 1);
        s1.pop_back();

        // Include the current character in s2
        s2.push_back(s[i]);
        solve(s, s1, s2, i + 1);
        s2.pop_back();

        // Skip the current character
        solve(s, s1, s2, i + 1);
    }

    int maxProduct(string s) {
        string s1 = "", s2 = "";
        solve(s, s1, s2, 0);
        return ans;
    }
};
