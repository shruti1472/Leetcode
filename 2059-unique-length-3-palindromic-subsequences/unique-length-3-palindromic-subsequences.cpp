class Solution {
public:
    int countPalindromicSubsequence(string s) {
        int ans=0;
        //checking the first and last occurance of each alphabet present in the string
        for(char c='a';c<='z';c++){
            int first=-1,last=-1;
            for(int i=0;i<s.size();i++){
                   if(s[i]==c){
                    if(first==-1)  first=i;
                    last=i;
                   }
            }
                   if(first==-1 || first==last) continue;
                   vector<bool>present(26,false);
                   
                   //marking the unique element between first and second
                   for(int i=first+1;i<last;i++){
                    present[s[i]-'a']=true;
                   }
                   
                   //checking the number of unique element between first and second
                   for(int i=0;i<26;i++){
                   if(present[i]) ans++;
                   }
            }
            
    
        

       return ans;
    }
};