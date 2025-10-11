class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int sum=0;
        int ans=-1;
        for(int i=0;i<weights.size();i++){
                sum+=weights[i];
        }

    int low=*max_element(weights.begin(), weights.end());
    int high=sum;
    while(low<=high){
        int mid=low+(high-low)/2;
        long sum2=0;
        int count=1;
        int i=0;
        while(i<weights.size()){ 
          if(sum2+weights[i]>mid){
            count++;
            sum2=0;
          }
          
        sum2+=weights[i];
          
          i++;
        }
        if(count<=days){
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