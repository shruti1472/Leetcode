class Solution {
public:

    vector<int> getRow(int rowIndex) {
        vector<int>ans(rowIndex+1);
        long long value=1;
        ans[0]=1;
        for(int j=1;j<=rowIndex;j++){
           value=value*(rowIndex-j+1)/j;
           ans[j]=value;
        }
        return ans;
    }

    vector<vector<int>> generate(int numRows) {
       vector<vector<int>>ans(numRows);
       for(int i=0;i<numRows;i++){
            ans[i]=getRow(i);
        }
        return ans;
  
    }
};