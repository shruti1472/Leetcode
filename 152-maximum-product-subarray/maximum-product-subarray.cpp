class Solution {
public:
    int maxProduct(vector<int>& nums) {
       int maxP=nums[0];
       int minP=nums[0];
       int ans=nums[0];
       int i=1;
       while(i<nums.size()){
         int x=nums[i];
         if(x<0){
            swap(maxP,minP);
         }
         maxP=max(x,maxP*x);
         minP=min(x,minP*x);
         ans=max(maxP,ans);
         i++;
       }
       return ans;
    }
};