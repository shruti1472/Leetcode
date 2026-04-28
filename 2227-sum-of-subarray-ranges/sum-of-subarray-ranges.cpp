class Solution {
public:

   vector<int>nextSmallestElement(vector<int>nums){
        stack<pair<int,int>>st;
        int n=nums.size();
        vector<int>ans(n,n);
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && st.top().first > nums[i] ){
                st.pop();
            }
            if(!st.empty()) ans[i]=st.top().second;
            st.push({nums[i],i});
        }
        return ans;
   }

    vector<int>previousSmallestElement(vector<int>nums){
        stack<pair<int,int>>st;
        int n=nums.size();
        vector<int>ans(n,-1);
        for(int i=0;i<n;i++){
            while(!st.empty() && st.top().first >= nums[i] ){
                st.pop();
            }
            if(!st.empty()) ans[i]=st.top().second;
            st.push({nums[i],i});
        }
        return ans;
    }
 
   long long sumSubarrayMins(vector<int>nums){
        int n=nums.size();
        long long total=0;
        vector<int>PSE=previousSmallestElement(nums);
        vector<int>NSE=nextSmallestElement(nums);
        for(int i=0;i<n;i++){
            int left=i-PSE[i];
            int right=NSE[i]-i;
            total= total + (1LL * left * right * nums[i]);
        }
        return total;
   }


   vector<int>nextLargestElement(vector<int>nums){
        int n=nums.size();
        stack<pair<int,int>>st;
        vector<int>ans(n,n);
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && st.top().first<=nums[i]){
                st.pop();
            }
            if(!st.empty()) ans[i]=st.top().second;
            st.push({nums[i],i});
        }
        return ans;
   }

   vector<int>previousLargestElement(vector<int>nums){
        int n=nums.size();
        stack<pair<int,int>>st;
        vector<int>ans(n,-1);
        for(int i=0;i<n;i++){
            while(!st.empty() && st.top().first<nums[i]){
                st.pop();
            }
            if(!st.empty()) ans[i]=st.top().second;
            st.push({nums[i],i});
        }
        return ans;
   }

   long long sumSubarrayMaxs(vector<int>nums){
        int n=nums.size();
        long long total=0;
       
        vector<int>PLE=previousLargestElement(nums);
        vector<int>NLE=nextLargestElement(nums);
        for(int i=0;i<n;i++){
            int left=i-PLE[i];
            int right=NLE[i]-i;
            total=  total + (1LL * left * right * nums[i]);
        }
        return total;
   }

    
    long long subArrayRanges(vector<int>& nums) {
        return sumSubarrayMaxs(nums) - sumSubarrayMins(nums) ;
    }
};