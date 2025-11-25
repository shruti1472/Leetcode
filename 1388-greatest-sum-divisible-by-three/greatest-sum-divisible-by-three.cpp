class Solution {
public:
    int maxSumDivThree(vector<int>& nums) {
        vector<int>r1;
        vector<int>r2;
        int sum=0;
        for(int i :nums){
            sum+=i;
            if(i%3==1) r1.push_back(i);
            else if(i%3==2) r2.push_back(i);
        }
        
        sort(r1.begin(),r1.end());
        sort(r2.begin(),r2.end());
        
        int remove=INT_MAX;
        if(sum%3==0) return sum;
       
        if(sum%3==1){
            if(!r1.empty()) remove=min(remove,r1[0]);
            if(r2.size()>=2) remove=min(remove,r2[0]+r2[1]);
        }
        else {
            if(!r2.empty()) remove=min(remove,r2[0]);
            if(r1.size()>=2) remove=min(remove,r1[0]+r1[1]);
        }
        return sum-remove;
    }
};
  
    