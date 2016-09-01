/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 
int a[2]; 

int* twoSum(int* nums, int numsSize, int target) {
    	int i=0;
	    int j=0;
	  /*  p=a;  */
 	
    	for(i=0; i<numsSize; i++)
    		for(j=0; j<numsSize; j++)
    			{
    			    
        			if(nums[i] + nums[j] == target && i!=j)
        			    {	
        			        printf("%d--%d\n",i,j);
        			        a[0]=i;
        			        a[1]=j;
        			        break;
        			    }
    			}
	    printf("%d+++%d\n",a[0],a[1]);
	    
	return a;
}