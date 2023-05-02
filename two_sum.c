#include<stdio.h>
#include<stdlib.h>

int* twoSum(int *nums, int numSize, int target, int* returnSize)
{
    returnSize=(int*)malloc(sizeof(int)*2);
    for(int i=0;i<numSize;i++)
    {
        for(int j=0;j<numSize;j++)
        {
            if(j!=i)
            {
                if(nums[i]+nums[j]==target)
                {
                    returnSize[0]=i;
                    returnSize[1]=j;
                    return returnSize;
                }
            }
        }
    }
}

int main()
{
    int* nums=(int*)malloc(sizeof(int)*4);
    nums[0]=2;
    nums[1]=7;
    nums[2]=11;
    nums[3]=15;
    int* ans;
    ans=twoSum(nums,4,9,ans);
    printf("%d\t%d",ans[0],ans[1]);
    return 0;
}