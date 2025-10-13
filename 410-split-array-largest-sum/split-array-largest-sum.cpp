class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int low=*max_element(nums.begin(),nums.end());
        int high=accumulate(nums.begin(),nums.end(),0);
        int ans=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            int sum=0;
            int count=1;
            for(int i=0;i<nums.size();i++){
                  sum+=nums[i];
                  if(sum>mid){
                    sum=nums[i];
                    count++;
                  }  
            }
            if(count<=k){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};