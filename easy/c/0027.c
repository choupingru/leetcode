int removeElement(int* nums, int numsSize, int val){
    int head = 0;
    for(int i = 0 ; i < numsSize; i++){
        if(nums[i] != val) nums[head++] = nums[i];
    }
    return head;
}