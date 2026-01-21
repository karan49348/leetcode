class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        set<int> s;
        vector<int> ans;
        int n = nums.size();

        for (auto x : nums) {
            s.insert(x);
        }

        for (int i = 1; i <= n; i++) {
            if (s.find(i) == s.end()) {
                ans.push_back(i);
            }
        }

        return ans;
    }
};
