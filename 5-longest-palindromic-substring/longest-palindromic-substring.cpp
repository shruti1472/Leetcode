class Solution {
public:

    string longestPalindrome(string s) {
        if (s.length()<=1) return s;

        int n=s.size();
        string ans="";
        //for odd length
        for(int i=0;i<n;i++){
            int low=i;
            int high=i;
            while(low>=0 && high<n && s[low]==s[high]){
                low--;
                high++;

            }
            
            string palidrome=s.substr(low+1,high-low-1);
            if(palidrome.length()>ans.length()){
                ans=palidrome;
            }
        
        //for even length
            low=i;
            high=i+1;
            while(low>=0 && high<n && s[low]==s[high]){
                low--;
                high++;

            }
             palidrome=s.substr(low+1,high-low-1);
            if(palidrome.length()>ans.length()){
                ans=palidrome;
            }
        }
       return ans;
        
    }
};