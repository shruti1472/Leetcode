class Solution {

// public:
// long long count_hour(vector<int>& piles,int k){
//             long long total_hour=0;
//             for(int i=0;i<piles.size();i++){
//                 total_hour+=(piles[i]+k-1/double(k));
//             }
//           return total_hour;
//     }    
public:
    int minEatingSpeed(vector<int>& piles, int h) {

    int high= *max_element(piles.begin(),piles.end());
        int ans=high;
       int low=1;
       
       while(low<=high){
        long long total_hour=0;
        int mid=low+(high-low)/2;
         for(int i=0;i<piles.size();i++){
                total_hour+=(piles[i]+mid-1)/mid;
            }
        if(total_hour<=h){
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