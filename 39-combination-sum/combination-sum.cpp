class Solution {
public:
    vector<vector<int>> ans;
    vector<int> temp;

    void solve(vector<int>& candidates, int target, int start) {

        // Target reached
        if (target == 0) {
            ans.push_back(temp);
            return;
        }

        for (int i = start; i < candidates.size(); i++) {

            // If current number is greater than target
            if (candidates[i] > target)
                break;

            // Choose
            temp.push_back(candidates[i]);

            // Use i again because numbers can be reused
            solve(candidates, target - candidates[i], i);

            // Backtrack
            temp.pop_back();
        }
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {

        sort(candidates.begin(), candidates.end());

        solve(candidates, target, 0);

        return ans;
    }
};