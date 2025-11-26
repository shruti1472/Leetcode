class Solution {
public:
    string num_binary(int n){
        string s="";
        while(n>0){
            s+=(n%2+'0');
            n/=2;
        }
        reverse(s.begin(),s.end());
        return s;
    }

    string reversed(string s){
         reverse(s.begin(),s.end());
        return s;
    }
    
    int minimumFlips(int n) {
       string a=num_binary(n);
       string b=reversed(a);
        int ans=0;
        for(int i=0;i<a.size();i++){
            if(a[i]!=b[i]) ans++;
        }
        return ans;
    }
};