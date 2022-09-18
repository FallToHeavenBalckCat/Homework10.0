class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int q[2010];
        double res;
        int i=0,j=0,k=0;
        while(i<nums1.size()&&j<nums2.size())
        {
            if(nums1[i]<=nums2[j]) q[k++]=nums1[i++];
            else q[k++]=nums2[j++];
        }
        while(i<nums1.size()) q[k++]=nums1[i++];
        while(j<nums2.size()) q[k++]=nums2[j++];
        if(k%2==0) res=(double)(q[k/2-1]+q[k/2])/2;
        else res=q[k/2];
        return res;
    }
};