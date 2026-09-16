class Solution {
public:
    vector<vector<int>> ans;
    vector<int> temp;

    void solve(int start, int k, int n) {

        // If we selected k numbers
        if (temp.size() == k) {
            if (n == 0)
                ans.push_back(temp);

            return;
        }

        // Try numbers from start to 9
        for (int i = start; i <= 9; i++) {

            // If number is greater than remaining sum
            if (i > n)
                break;

            temp.push_back(i);

            solve(i + 1, k, n - i);

            temp.pop_back();
        }
    }

    vector<vector<int>> combinationSum3(int k, int n) {

        solve(1, k, n);

        return ans;
    }
};