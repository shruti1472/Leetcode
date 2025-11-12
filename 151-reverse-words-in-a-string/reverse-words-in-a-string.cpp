class Solution {
public:
    string reverseWords(string s) {
        stack<string>st;
        string result,word;
        for(int i=0;i<s.length();i++){
            if(s[i]!=' '){
             word+=s[i];
            }
            else if(!word.empty()){
               st.push(word);
               word.clear();
            }
        }
        if (!word.empty())
            st.push(word);

        while(!st.empty()){
            result+=st.top();
            st.pop();
            if(!st.empty()) result+=' ';
        }
        
        return result;
    }
};