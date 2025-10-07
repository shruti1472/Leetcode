class Solution {

public:
long long count_hour(vector<int>& piles,int k){
            long long total_hour=0;
            for(int i=0;i<piles.size();i++){
                total_hour+=ceil(piles[i]/double(k));
            }
          return total_hour;
    }    
public:
    int minEatingSpeed(vector<int>& piles, int h) {

    int maxval= *max_element(piles.begin(),piles.end());
        int ans=maxval;
       int low=1;
       int high=maxval;
       while(low<=high){
        int mid=low+(high-low)/2;
        if(count_hour(piles,mid)<=h){
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