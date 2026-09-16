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

            // Skip duplicate numbers at the same level
            if (i > start && candidates[i] == candidates[i - 1])
                continue;

            // Since array is sorted
            if (candidates[i] > target)
                break;

            // Choose
            temp.push_back(candidates[i]);

            // Move to i + 1 because each element
            // can be used only once
            solve(candidates, target - candidates[i], i + 1);

            // Backtrack
            temp.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {

        sort(candidates.begin(), candidates.end());

        solve(candidates, target, 0);

        return ans;
    }
};