class Solution {
public:
    string removeOuterParentheses(string s) {
        string result="";
        int countleft=0;
        int countright=0;
        for(char c: s){
            if(c=='('){
                if(countleft==0){
                    countleft++;
                    continue;  
                }else{
                countleft++;
                }
            }
            else{
                countright++;
                if(countleft==countright){
                    countleft=0;
                    countright=0;
                continue;
            }
            }
            
             result+=c;
        }
        return result;
    }
};