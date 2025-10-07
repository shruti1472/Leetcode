class Solution {

public:
double count_hour(vector<int> piles,int k){
            double total_hour=0;
            for(int i=0;i<piles.size();i++){
                total_hour+=ceil(piles[i]/double(k));
            }
          return total_hour;
    }    
public:
    int minEatingSpeed(vector<int>& piles, int h) {

     int maxval=piles[0];
    for(int i=1;i<piles.size();i++){
        if(piles[i]>maxval){
            maxval=piles[i];
        }
    }
        int ans=maxval;
       int low=1;
       int high=maxval;
       while(low<=high){
        double mid=low+(high-low)/2;
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