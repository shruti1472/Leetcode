class Solution {
public:
    int characterReplacement(string s, int k) {
        int i=0,j=0;
        vector<int>freq(256,0);
        int maxfreq=0;
        int length=0;
        int maxlen = 0;           
        while(j<s.size()){
            freq[s[j]-'A']++;
            maxfreq=max(maxfreq,freq[s[j]-'A']);
            length=j-i+1;
            if(length-maxfreq>k) {
                freq[s[i]-'A']--;
                i++;
            }
            if(length-maxfreq<=k) maxlen=max(maxlen,length);
            j++;
        }
        return maxlen;
    }
};