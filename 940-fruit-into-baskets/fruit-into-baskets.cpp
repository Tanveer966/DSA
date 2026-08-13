class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map <int,int> count;
        int high,low=0;
        int n=fruits.size();
        int ans=0;
        for(high=0;high<n;high++){
            count[fruits[high]]++;
            while(count.size()>2){
                count[fruits[low]]--;
                if(count[fruits[low]]==0){
                    count.erase(fruits[low]);
                }
                low++;
            }
            ans=max(ans,high-low+1);
        }
        return ans;
    }
};