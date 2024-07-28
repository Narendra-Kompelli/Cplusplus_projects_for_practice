int removeElement(int* nums, int numsSize, int val) {
    int k=0;
    int numsSize_local = numsSize;
    for(int i=0;i<numsSize_local;i++)
    {
        if(nums[i]==val){
            int temp = nums[i];
            int j;
            printf("i=%d\n",i);
            for(j=i;j<numsSize_local-1;j++)
            {
                printf("before %d\t%d\n",nums[j],nums[j+1]);
                nums[j] = nums[j+1];
                //printf("after %d\t%d\n",nums[j],nums[j+1]);
            }
            nums[j] = temp;
        }
        else{
            ++k;
            printf("k = %d",k);
        }
    }
    for(int i = 1;i<k;i++)
    {
        nums[numsSize-i] = '\0';
    }
    return k;
}