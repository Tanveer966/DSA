class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();

        int j = 0;

        while (j < n && nums[j] < 0) {
            j++;
        }

        int i = j - 1;

        vector<int> ans(n);

        int k = 0;   // FIX: initialize k

        while (i >= 0 && j < n) {
            if (nums[i] * nums[i] < nums[j] * nums[j]) {
                ans[k] = nums[i] * nums[i];
                i--;
            }
            else {
                ans[k] = nums[j] * nums[j];
                j++;
            }
            k++;
        }

        while (i >= 0) {
            ans[k] = nums[i] * nums[i];
            k++;
            i--;
        }

        while (j < n) {
            ans[k] = nums[j] * nums[j];
            j++;
            k++;
        }

        return ans;
    }
};