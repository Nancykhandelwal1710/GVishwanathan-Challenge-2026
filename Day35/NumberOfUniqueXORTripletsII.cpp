class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {

        vector<unordered_set<int>> dp(4);
        dp[0].insert(0);

        for (int x : nums) {

            vector<unordered_set<int>> cur = dp;

            for (int k = 0; k < 3; k++) {
                for (int val : cur[k])
                    cur[k + 1].insert(val ^ x);
            }

            dp = move(cur);
        }

        return dp[3].size();
    }
};
