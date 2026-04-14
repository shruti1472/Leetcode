class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int r=0,l=0;
        int maxlen=0;
        unordered_map<char,int>mp;
        while(r<s.size()){
            if(mp[s[r]]==1){
                while(mp[s[r]]==1){
                    mp[s[l]]=0;
                    l++;
                }
            }
            mp[s[r]]=1;
            maxlen=max(maxlen,r-l+1);
            r++;
        }
            return maxlen;
        }
        
    
};