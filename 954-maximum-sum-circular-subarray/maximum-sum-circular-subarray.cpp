class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int best=nums[0];
        int worst=nums[0];
        int ans=nums[0];
        int n=nums.size();
        int sum=nums[0];
        int minans=nums[0];
        for(int i=1;i<n;i++){
            int a=nums[i]+best;
            int b=nums[i];
            int c=nums[i]+worst;
            best=max(a,max(b,c));
            worst=min(a,min(b,c));
            
            ans=max(ans,best);
            minans=min(minans,worst);
            sum += nums[i];
        }
        if(ans<0){
            return ans;
        }

        return ans=max(ans,sum-minans);
            
    }
};