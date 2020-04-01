#include <stdio.h>
/*
int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
     int *result=malloc(2*sizeof(int));
     for(int i=0;i<numsSize-1;i++)
        {
            for(int j=1+i;j<numsSize-1;j++)
                {
                    if(nums[i]+nums[j]==target)
                    {
                        result[0]=i;
                        result[1]=j;
                        *returnSize=2;
                        return result;
                    }
                }
        }
    return NULL;
 }
 */


int* smallerNumbersThanCurrent(int* nums, int numsSize, int* returnSize)
{
    int m=0,i;
    int *result=malloc(numsSize*sizeof(int));
    for(i=0;i<numsSize;i++)
    {
        int sum=0,j;
        for(j=0;j<numsSize;)
        {
            if(nums[i]>nums[j])
            {
                sum++;
                j++;
            }
            else
            {
                j++;
            }
        }
        result[m++]=sum;
        *returnSize=m;
    }
    return result;
}

/*
 对比字符串的所有字符，设置一个变量x初始值为0
 输出第一个字符  x=x+1
 第二个字符与第一个字符对比，如果重复x，不重复x=x+1；
 第三个字符与第一第二字符对比，有重复x，不重复x=x+1
 第四个字符与之前所有字符对比，有重复x，不重复x=x+1
 第n个字符与1到n-1对比，有重复x，不重复输出此字符x=x+1
 最后的x值应该就是无重复字符子串的最长长度
 */

