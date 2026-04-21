class Solution {
public:
    string minWindow(string s, string t) {
        vector<int> hash(256,0);
         for(char c:t){
            hash[c]++;
        }

        int minlen=INT_MAX;
        int sIndex=-1;
        int i=0,j=0;
        int count=0;
    
        while(j<s.size()){
            if(hash[s[j]]>0) count++;
            hash[s[j]]--;
            while(count==t.size()){
               
                if(j-i+1<minlen){
                    minlen=j-i+1;
                    sIndex=i;
                }
                
                hash[s[i]]++;
                
                if(hash[s[i]]>0){
                    count--;
                }
                
                i++;
            }
            j++;
        }
        if(sIndex == -1) return "";
        return s.substr(sIndex,minlen);
    }
};