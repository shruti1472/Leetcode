class Solution {
public:

    int days_count(vector<int>& weights,int mid){
        long load=0;
        int count=1;
        int i=0;
        while(i<weights.size()){ 
            if(load+weights[i]>mid){
                count++;
                load=0;
            }
        load+=weights[i];
        i++;
        }
        return count;
    }


    int shipWithinDays(vector<int>& weights, int days) {
        int ans=-1;
        int low=*max_element(weights.begin(), weights.end());
        int high=accumulate(weights.begin(),weights.end(),0);
        while(low<=high){
            int mid=low+(high-low)/2;   
            if(days_count(weights,mid)<=days){
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