void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){
    int h1 = m - 1, h2 = n - 1;
    int last = m + n - 1;
    while(h1 > -1 && h2 > -1){
        if(nums1[h1] > nums2[h2]) nums1[last--] = nums1[h1--];
        else nums1[last--] = nums2[h2--];
    }
    for(int i = h1; i > -1; i--) nums1[last--] = nums1[i];
    for(int i = h2; i > -1; i--) nums1[last--] = nums2[i];
    
}