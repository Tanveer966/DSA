class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        int n=nums.size();
        int i;
        for(i=0;i<n-2;i++){
            int target=-nums[i];
            int j=i+1;
            int k=n-1;
            if(i>0&&nums[i]==nums[i-1]){
                continue;
            }
            while(j<k){
                int twosum=nums[j]+nums[k];

                if(twosum==target){
                    ans.push_back({nums[i],nums[j],nums[k]}); 
                    j++;
                    k--;

                    while(j<k&&nums[j]==nums[j-1]){
                        j++;
                    }
                    while(j<k&&nums[k]==nums[k+1]){
                        k--;
                    }
                }
                else if(twosum<target){
                    j++;
                }
                else{
                    k--;
                }

            }
        }
    return ans;
    }
};