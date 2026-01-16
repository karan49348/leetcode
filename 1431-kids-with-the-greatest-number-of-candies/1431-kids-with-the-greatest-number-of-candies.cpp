class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans;
        int maxcandy = 0;
        for (auto x : candies) {
            maxcandy = max(maxcandy, x);
        }
        for (auto x : candies) {
            if (x + extraCandies >= maxcandy) {
                ans.push_back(true);

            } else {
                ans.push_back(false);
            }
        }
        return ans;
    }
};