class Solution {
public:

    vector<int> nextSmallerElement(vector<int> &heights){
        stack<pair<int,int>>st;
        int n=heights.size();
        vector<int>ans(n,n);
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && st.top().first>=heights[i]){
                st.pop();
            }
            if(!st.empty()) ans[i]=st.top().second;
            st.push({heights[i],i});
        }
        return ans;
    }

     vector<int> previousSmallerElement(vector<int> &heights){
        stack<pair<int,int>>st;
        int n=heights.size();
        vector<int>ans(n,-1);
        for(int i=0;i<n;i++){
            while(!st.empty() && st.top().first>=heights[i]){
                st.pop();
            }
            if(!st.empty()) ans[i]=st.top().second;
            st.push({heights[i],i});
        }
        return ans;
    }

    int largestRectangleArea(vector<int>& heights) {
        vector<int>PSE=previousSmallerElement(heights);
        vector<int>NSE=nextSmallerElement(heights);
        int maxi=0;
        for(int i=0;i<heights.size();i++){
            int current=(NSE[i]-PSE[i]-1)*heights[i];
            maxi=max(current,maxi);
        }
        return maxi;
    }
};