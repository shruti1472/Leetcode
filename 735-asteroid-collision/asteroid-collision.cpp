class Solution {
public:

    vector<int> asteroidCollision(vector<int>& asteroids) {
      list<int>lst;
      for(int a:asteroids){
        bool distroyed=false;
        while(!lst.empty() && lst.back()>0 && a<0){
            if(lst.back()==abs(a)){
                lst.pop_back();
                distroyed=true;
                break;
            }
            else if(lst.back()>abs(a)){
                distroyed=true;
                break;
            }
            else{
                lst.pop_back();
            }
        }
        if(!distroyed){
            lst.push_back(a);
        }
      }
     
      return vector<int>(lst.begin(), lst.end());
    }
};