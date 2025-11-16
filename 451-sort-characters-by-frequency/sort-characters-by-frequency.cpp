class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>map;
        for(char c : s){
            map[c]++;
        }
        
        vector<pair<char,int>> list(map.begin(),map.end());

        
        sort(list.begin(),list.end() ,[](auto &a, auto &b){
            return a.second>b.second;
        });

        string result="";
        for(auto &p :list){
            result.append(p.second,p.first);
        }
        return result;
    }
};