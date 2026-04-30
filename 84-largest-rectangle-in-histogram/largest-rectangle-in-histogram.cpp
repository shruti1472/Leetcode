class Solution {
public:

    
    int largestRectangleArea(vector<int>& heights) {
       stack<int>st;
       int n=heights.size();
       int maxi=0;
       for(int i=0;i<=n;i++){
        int current= (i==n) ? 0 : heights[i];
            while(!st.empty() && heights[st.top()]>current){
                int h=heights[st.top()];
                st.pop();

                int right=i;
                int left= st.empty() ?  -1 : st.top();
                int width=right-left-1;
                int area=h*width;
                maxi=max(maxi,area);
            }
            st.push(i);
       }
       return maxi;
    }
};