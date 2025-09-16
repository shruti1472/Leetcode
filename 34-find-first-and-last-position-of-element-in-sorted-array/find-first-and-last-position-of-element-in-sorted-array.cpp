class Solution {
public:

     int lower(vector<int>& nums, int target){
        int low=0;
        int high=nums.size()-1;
        int ans=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==target){
              ans=mid;
              high=mid-1;
            }
            else if(target<nums[mid]){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
     }

     int upper(vector<int>& nums, int target){
        int low=0;
        int high=nums.size()-1;
        int ans=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==target){
              ans=mid;
              low=mid+1;
            }
            else if(target<nums[mid]){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
     }
    vector<int> searchRange(vector<int>& nums, int target) {
        return{lower(nums,target),upper(nums,target)};
    }
};