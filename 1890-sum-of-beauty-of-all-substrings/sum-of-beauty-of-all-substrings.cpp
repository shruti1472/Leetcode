class Solution {
public:
    int beautySum(string s) {
       int n=s.size();
       
       int ans=0;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
               string sub=s.substr(i,j-i+1);
                    vector<int> freq(26, 0);
                    for(char c : sub) freq[c - 'a']++;
                    int mx = 0, mn = INT_MAX;
                    for(int f : freq) {
                    if(f == 0) continue; 
                    mx = max(mx, f);
                    mn = min(mn, f);
                    }
                    ans+=( mx - mn);
               }
            }
            return ans;
        }   
    };
