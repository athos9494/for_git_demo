#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
/*
int singleNumber(int* nums, int numsSize)
{
    if( numsSize <2 )
    {
        return nums[0];
    }
    int i,j;
    int a = 0;
    for( i = 0; i < numsSize;i++ )
    {
        a=0;
        for( j = 0; j < numsSize; j++ )
        {
            if( i == j )
            {
                continue;
            }
            if( nums[i] == nums[j] )
            {
                a = 1;
                break;
            }
        }
        if( a == 1 )
        {
            continue;
        }
        else
        {
            break;
        }
    }
    return nums[i];
}
 */

/*
 int singleNumber(int* nums, int numsSize)
{
    int a=nums[0];
    int i;
    for(i=1;i<numsSize;i++)
    {
        a=a^nums[i];
    }
    return a;
}
 */
int max(int a,int b)
{
        return a>b?a:b;
}

int lengthOfLongestSubstring(char * s)
{
    int len=(int)strlen(s);
    if(len<2)
    {
        return len;
        
    }
    int m=1,p=0;
    for(int i=1;i<len;i++)
    {
        for(int j=p;j<i;j++)
        {
            if(s[j]==s[i])
            {
                m=max(m,i-p);
                p=j+1;
            }
        }
    }
    m=max(m,len-p);
    
    return m;
    
}

