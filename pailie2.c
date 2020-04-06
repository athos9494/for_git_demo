#include <stdio.h>
int* constructArray(int n, int k, int* returnSize)
{
    int *res;
    res=(int*)malloc(sizeof(int)*n);
    *returnSize=n;
    int i,start=1,temp=k;
    
    for(i=0;i<=k;i++)
    {
        if(i%2==0)
        {
            res[i]=start;
            start++;
        }
        else
        {
            res[i]=temp+1;
            temp--;
        }
    }
    for(i=k+1;i<n;i++)
        res[i]=i+1;
    
    return res;
}

