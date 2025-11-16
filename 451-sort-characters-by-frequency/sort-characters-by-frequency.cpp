class Solution {
public:
    string frequencySort(string s) {
        int n=s.size();
        unordered_map<char,int>map;
        for(char c : s){
            map[c]++;
        }
        
        vector<vector<char>>bucket(n+1);
      
        for(auto &p:map){
            bucket[p.second].push_back(p.first);
        }

        string result="";
        result.reserve(n);
        for(int i =n;i>0;i--){
            for(char c : bucket[i])
            result.append(i,c);
        }
        return result;
    }
};