class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int bestmax = nums[0];
        int bestmin = nums[0];
        int ans = abs(nums[0]);

        for (int i = 1; i < nums.size(); i++) {

            bestmax = max(nums[i], bestmax + nums[i]);

            bestmin = min(nums[i], bestmin + nums[i]);

            ans = max(ans, max(abs(bestmax), abs(bestmin)));
        }

        return ans;
    }
};