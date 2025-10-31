class Solution {

public:
    vector<int> merge(vector<int>& nums1, vector<int>& nums2){
        int i=0,j=0;
        vector<int>merge;
        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i]<nums2[j]){
                merge.push_back(nums1[i]);
                i++;
            }
            else{
                merge.push_back(nums2[j]);
                j++;
            }
        }
    while(i<nums1.size()){
        merge.push_back(nums1[i]);
        i++;
        
    }

    while(j<nums2.size()){
        merge.push_back(nums2[j]);
        j++;
        
    }
    return merge;
    }

public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>arr=merge(nums1,nums2);
        double median;
        int mid=(arr.size()-1)/2;

        if(arr.size()%2==0){
            median=(arr[mid]+arr[mid+1])/2.0;
        }
        else{
         median=arr[mid];
        }
    return median;
    }
};