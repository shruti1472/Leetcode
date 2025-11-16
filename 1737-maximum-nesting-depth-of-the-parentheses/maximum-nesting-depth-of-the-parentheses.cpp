class Solution {
public:
    int maxDepth(string s) {
        int counter=0;
        int maxi=0;

        for(char c : s){
            if(c=='(') counter++;
            else if(c==')') counter--;
            maxi=max(maxi,counter);
        }
        return maxi;
    }
};