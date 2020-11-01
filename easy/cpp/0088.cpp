class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int h1 = m - 1, h2 = n - 1;
        int i = m + n - 1;
        while(h1 > -1 and h2 > -1){
            if(nums1[h1] > nums2[h2]) nums1[i] = nums1[h1--];
            else nums1[i] = nums2[h2--];
            i--;
        }
        for(int j = h1; j > -1; j--) nums1[i--] = nums1[j];
        for(int j = h2; j > -1; j--) nums1[i--] = nums2[j];
    }
};