class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int size=INT_MAX;
        int sum=0;
        int high,low=0;
        int n=nums.size();
        for(high=0;high<n;high++){
            sum=sum+nums[high];
            while(sum>=target){
                sum-=nums[low];
                size=min(size,high-low+1);
                low++;
            }
            
        }
        if(size==INT_MAX){
            size=0;
        }
        return size;
    }
};