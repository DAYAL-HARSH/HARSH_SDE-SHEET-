// GAP algorithm => (n1+n2)/2
// after that place two pointer, first at 0 index and second at (n1+n2)/2 index
// then compare both values if second value is small then swap the values 
// and increment both pointer by 1
// now we divide the value of (n1+n2) by and 2 and repeat the steps again and so on.
// if n1+n2 is odd then take (n1+n2)/2 + 1 as the gap for pointers.

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=m-1,j=n-1,last=m+n-1;
        while(j>=0 && i>=0)
        {  
            if(nums1[i]>nums2[j])
                nums1[last--]=nums1[i--];
            else
                nums1[last--]=nums2[j--];
        }
        while(j>=0)
             nums1[last--]=nums2[j--];
         while(i>=0)
             nums1[last--]=nums1[i--];
    }
};
