int removeElement(int* nums, int numsSize, int val) {
    //使用快速排序的思想两头分别开始着手，比较
    int len=numsSize;
    if(len < 1 ) return 0;
    
    // printf("current len is %d\n", numsSize);
    if(nums == NULL) return -1;
    if(len == 1 && val != nums[0]) return 1;
    if(len == 1 && val == nums[0]) return 0;

    
    
    int i,j;
    int tag=nums[0];
    i=0;
    j=len-1;
    
    while(i<j)
    {
        while(i<j && nums[j] == val) --j;
        if(i<j)
        {
            nums[i]=nums[j];
            i++;
        }
        
        while(i<j && nums[i] != val)  ++i;
        if(i<j)
        {
            nums[j]=nums[i];
            j--;
        }
        
        nums[i]=tag;
        
    }
    
    for(i=0; nums[i]!=val && i< len; ++i);
        // printf("%d\t", nums[i]);
    return i;
    
}