class Solution {
public:
    int maxSubArray(vector<int>& nums) {
     int best,ans;
     best=nums[0];
     ans=nums[0];
     int n=nums.size();
     for(int i=1;i<n;i++){
        int a=nums[i]+best;
        int b=nums[i];
        best=max(a,b);
        ans=max(best,ans);
     }
     return ans;
    }
};