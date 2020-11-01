int removeDuplicates(int* nums, int numsSize){
    if(numsSize<=1) return numsSize;
    int head = 1;
    int prev = nums[0];
    for(int i = 1; i < numsSize; ++i){
        if(nums[i] != prev){
            prev = nums[i];
            nums[head++] = nums[i];
        }
    }
    return head;
}