class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
      int low=0;
      int high=arr.size()-1;
      while(low<=high){
        int mid=low+(high-low)/2;
        if(mid+1<arr[mid]){
            if((arr[mid]-(mid+1))<k){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        else{
            low=mid+1;
        }
      }
      return low+k;
    }
};