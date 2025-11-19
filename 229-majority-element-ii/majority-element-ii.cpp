class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
       unordered_map<int,int>map;
       vector<int>ans;
       int n= nums.size();
       for(int i=0;i<n;i++){
        if(map.find(nums[i])!=map.end()){
            map[nums[i]]++;
        }
        else{
            map[nums[i]]=1;
        }
       } 
       for(auto &p : map){
           if(p.second>n/3){
            ans.push_back(p.first);
           }
       }
       return ans;
    }
};