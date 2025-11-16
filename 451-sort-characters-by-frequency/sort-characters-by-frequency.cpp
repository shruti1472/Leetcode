class Solution {
public:
    string frequencySort(string s) {
        int n=s.size();
        unordered_map<char,int>map;
        for(char c : s){
            map[c]++;
        }

        priority_queue<pair<int,char>>pq;
        for(auto &p : map){
            pq.push({p.second,p.first}); 
        }
        

        string result="";
        while(!pq.empty()){
            auto top=pq.top();
            pq.pop();
            result.append(top.first,top.second);
        }
        return result;
    }
};