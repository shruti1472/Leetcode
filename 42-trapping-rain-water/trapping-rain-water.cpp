class Solution {
public:
    int trap(vector<int>& h) {
        int sum=0;
        int n=h.size();
        vector<int>prefix(n);

        prefix[0]=h[0];
        for(int i=1;i<n;i++){
            prefix[i]=max(prefix[i-1],h[i]);
        }

        int rightmax=0;
        for(int i=n-1;i>=0;i--){
           rightmax=max(rightmax,h[i]);
           sum+=min(prefix[i],rightmax)-h[i];
        }
        return sum;
    }
};