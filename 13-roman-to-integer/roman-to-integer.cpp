class Solution {
public:
    int romanToInt(string s) {
        int n=s.size();
        unordered_map<char,int>map;
        map['I'] = 1;
        map['V'] = 5;
        map['X'] = 10;
        map['L'] = 50;
        map['C'] = 100;
        map['D'] = 500;
        map['M'] = 1000;

         int result=0;
         for(int i=n-1;i>=0;i--){
             if( i+1<n && map[s[i]]<map[s[i+1]]){
                  result-=map[s[i]];
             }
             else{
                 result += map[s[i]];
             }
         }
       return result;
    }
};