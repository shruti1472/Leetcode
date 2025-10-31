class Solution {



public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        int n2=nums2.size();
        int n=n1+n2;
        int count=0;
        int i=0,j=0;
        int ele1=-1,ele2=-1;
        for(;count<=n/2;count++){
            ele1=ele2;
            if(i<n1&&(j>=n2 || nums1[i]<nums2[j])){
                ele2=nums1[i++];
            }
            else{
                ele2=nums2[j++];
            }
        }

        if(n%2==0){
            return (ele1+ele2)/2.0;
        }
        else{
            return ele2;
        }
    }
};