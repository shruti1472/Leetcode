class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        long long total = 0;
        for (int x : nums) total += x;
        
        int rem = total % p;
        if (rem == 0) return 0;

        unordered_map<int, int> mp;
        mp[0] = -1;  // prefix before start
        
        long long prefix = 0;
        int ans = nums.size();

        for (int j = 0; j < nums.size(); j++) {
            prefix = (prefix + nums[j]) % p;
            
            int need = (prefix - rem + p) % p;
            
            if (mp.count(need)) {
                ans = min(ans, j - mp[need]);
            }
            
            mp[prefix] = j;
        }

        return ans == nums.size() ? -1 : ans;
    }
};
