class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int r=0,l=0;
        int maxlen=0;
        int map[256]={0};
        while(r<s.size()){
            if(map[s[r]]==0){
                map[s[r]]++;
                r++;
            }
            else{
                map[s[l]]--;
                l++;
            }
            if(r-l>maxlen){
                maxlen=r-l;
            }
        }
            return maxlen;
        }
        
    
};