class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans;
        int largest = 0;
        for (auto x : candies) {
         largest= max(largest, x);
        }
        for (auto x : candies) {
            if (x + extraCandies >= largest) {
                ans.push_back(true);

            } else {
                ans.push_back(false);
            }
        }
        return ans;
    }
};