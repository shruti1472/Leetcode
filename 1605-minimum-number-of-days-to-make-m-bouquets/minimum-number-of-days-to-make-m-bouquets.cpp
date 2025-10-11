class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        
        int low=*min_element(bloomDay.begin(),bloomDay.end());
        int high=*max_element(bloomDay.begin(),bloomDay.end());
        int ans=-1;
        if ((long long)m * k > bloomDay.size()) return -1;

        while(low<=high){
          int mid=low+(high-low)/2;
          int count=0;
          int bounque=0;
          for(int i=0;i<bloomDay.size();i++){
            if(mid>=bloomDay[i]){
                count++;

                if(count==k){
                    count=0;
                    bounque++;
                }
            }
            else{
                count=0;
            }
          }
          if(bounque>=m){
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