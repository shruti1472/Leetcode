class Solution {
public:
    int numberOfSubstrings(string s) {
        int count=0;
        int a=-1,b=-1,c=-1;
        int r=0;
        while(r<s.size()){
            if(s[r]=='a') a=r;
            else if(s[r]=='b') b=r;
            else if(s[r]=='c') c=r;

            if(a!=-1 && b!=-1 && c!=-1){
                count+=min(a,min(b,c))+1;
            }
            r++;
        }
        return count;
    }
};