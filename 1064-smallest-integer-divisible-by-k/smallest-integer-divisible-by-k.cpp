class Solution {
public:
    int smallestRepunitDivByK(int k) {
        if(k%2==0) return -1;
        else if(k%5==0) return -1;
        else if(k==1) return 1;

        int rem=1;
        int count=1;
        while(rem!=0){
            rem=(rem*10+1)%k;
            count++;
            if(rem==0){
                return count;
            }  
        }
        return -1;
    }
};