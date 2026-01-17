class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> mp;
        for (char c : s) mp[c]++;

        int len = 0;
        bool odd = false;

        for (auto x : mp) {
            if (x.second % 2 == 0)
                len += x.second;
            else {
                len += x.second - 1;
                odd = true;
            }
        }

        if (odd) len += 1;
        return len;
    }
};
