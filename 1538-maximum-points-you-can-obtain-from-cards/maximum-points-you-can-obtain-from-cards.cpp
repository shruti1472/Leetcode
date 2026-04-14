class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int sum=0;
        int maxsum=0;
        for(int i=0;i<k;i++){
            sum+=cardPoints[i];
        }
        maxsum=sum;
       int r=cardPoints.size()-1;
        for(int i=k-1;i>=0;i--){
            sum=sum-cardPoints[i]+cardPoints[r];
            maxsum=max(sum,maxsum);
            r--;
        }
        return maxsum;

    }
};