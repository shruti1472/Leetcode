class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size()!=t.size()) return false;

        unordered_map<char,char>map_s;
        unordered_map<char,char>map_t;

        for(int i=0;i<s.size();i++){
            char c1=s[i];
            char c2 =t[i];

            if(map_s.find(c1)!=map_s.end()){
                if(map_s[c1]!= c2) return false;
            }
            else{
                    map_s[c1]=c2;
                }
            

            
            if(map_t.find(c2)!=map_t.end()){
                if(map_t[c2]!= c1) return false;
            }
            else{
                    map_t[c2]=c1;
                }
            
        }
        return true;
    }


};