/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 #include<stdio.h>
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int *ptr=(int*)malloc(2*sizeof(int));
    for(int i=0;i<numsSize;i++)
    {
        for(int j=i+1;j<numsSize;j++)
        {
            if(nums[i]+nums[j]==target)
            {
                *returnSize=2;
                ptr[0]=i;
                ptr[1]=j;
                return ptr;
            }
        }

    }
    return 0;
}           