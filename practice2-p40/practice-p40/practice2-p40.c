#include <stdio.h>
int main(void)
{
    int i,n,sum=1;
    printf("请输入n的值：\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum = sum * i;
        printf("%d的阶乘是:%d\n",i,sum);
    }
    
    return 0;
    
}
