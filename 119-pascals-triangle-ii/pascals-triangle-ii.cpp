class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int>ans(rowIndex+1);
        ans[0]=1;
        long long value=1;
        for(int j=1;j<=rowIndex;j++){
           
           value=value*(rowIndex-j+1)/j;
           ans[j]=value;
        }
        return ans;
    }
};