class Solution {
public:
    int numberOfSubstrings(string s) {
        int count=0;
        int a[3]={0};
        int i=0,j=0;
        while(j<s.size()){
            a[s[j]-'a']++;
            while(a[0]>=1 && a[1]>=1 && a[2]>=1){
                count+=s.size()-j;
                a[s[i]-'a']--;
                i++;
            }
            j++;
        }
        return count;
    }
};