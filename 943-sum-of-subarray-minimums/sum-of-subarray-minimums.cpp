class Solution {
public:
    
    vector<int> NextSmallestElement(vector<int>arr){
        int n=arr.size();
        stack<pair<int,int>>st;
        vector<int>ans(n,n);
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && st.top().first>=arr[i]){
                st.pop();
            }
            if(!st.empty()) ans[i]=st.top().second;
            st.push({arr[i],i});
        } 
        return ans; 
    }

    vector<int> PreviousSmallestElement(vector<int>arr){
        int n=arr.size();
        stack<pair<int,int>>st;
        vector<int>ans(n,-1);
        for(int i=0;i<n;i++){
            while(!st.empty() && st.top().first>arr[i]){
                st.pop();
            }
            if(!st.empty()) ans[i]=st.top().second;
            st.push({arr[i],i});
        }
        return ans;
    }

   
    int sumSubarrayMins(vector<int>& arr) {
       vector<int>PSE=PreviousSmallestElement(arr);
       vector<int>NSE=NextSmallestElement(arr);
       long long total=0;
       int MOD=1e9 + 7;
       for(int i=0;i<arr.size();i++){
          int left=i-PSE[i];
          int right=NSE[i]-i;
          total = (total + (1LL * left * right % MOD) * arr[i]) % MOD;       }
    return total;
    }
};