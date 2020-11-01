int searchInsert(int* nums, int numsSize, int target){
    // for(int i = 0 ; i < numsSize; i++)if(nums[i] >= target)return i;
    // return numsSize;
    if(nums[0] > target) return 0;
    if(nums[numsSize-1] < target) return numsSize;
    int left = 0, right = numsSize;
    int m = 0;
    while(left <= right){
        m = (left + right) / 2;
        if(nums[m] > target){
            right = m-1;
        }else if(nums[m] < target){
            left = m+1;
        }else{
            return m;
        }
    }
    if(nums[m] > target)return m;
    else if(nums[m] < target)return m+1;
    return numsSize;
}