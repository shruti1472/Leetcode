class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        bool ans=false;
        int low1=0;
        int high1=mat.size()-1;
        while(low1<=high1){
            int mid1=low1+(high1-low1)/2;
            int low2=0;
            int high2=mat[mid1].size()-1;
            while(low2<=high2){
                int mid2=low2+(high2-low2)/2;
                if(mat[mid1][mid2]==target){
                    return true;
                }
                else if(mat[mid1][mid2]<target){
                    low2=mid2+1;
                }
                else{
                    high2=mid2-1;
                }
            }
            if(mat[mid1].back()<target){
                low1=mid1+1;
            }
            else{
                high1=mid1-1;
            }

        }
        return ans;
    }
};