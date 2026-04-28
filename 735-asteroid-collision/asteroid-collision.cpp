class Solution {
public:

    vector<int> asteroidCollision(vector<int>& asteroids) {
      stack<int>st;
      for(int a:asteroids){
        bool distroyed=false;
        while(!st.empty() && st.top()>0 && a<0){
            if(st.top()==abs(a)){
                st.pop();
                distroyed=true;
                break;
            }
            else if(st.top()>abs(a)){
                distroyed=true;
                break;
            }
            else{
                st.pop();
            }
        }
        if(!distroyed){
            st.push(a);
        }
      }
      vector<int>ans(st.size());
        for(int i=st.size()-1;i>=0;i--){
            ans[i]=st.top();
            st.pop();
        }
      return ans;
    }
};