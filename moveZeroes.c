void moveZeroes(int* nums, int numsSize) {
    int temp;
    for(int i=0;i<numsSize;i++)
    {
        for(int j=0;j<numsSize-1;j++)
        {
            if(nums[j]==0)
            {
                temp=nums[j];
                nums[j]=nums[j+1];
                nums[j+1]=temp;
            }
        }
    }
}