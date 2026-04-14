class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxlen=0;
        for(int i=0;i<s.size();i++){
            unordered_map<int,int>mp{0};
            int length=0;
            for(int j=i;j<s.size();j++){
                if(mp[s[j]]==1) break;

                length=j-i+1;
               maxlen=max(maxlen,length);
               mp[s[j]]=1;
            }
               
            }
            return maxlen;
        }
        
    
};