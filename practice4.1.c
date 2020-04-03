/* 用最少的步骤完成素数的判断*/
#include <stdio.h>
int main(void)
{
    int a=0,i,m;
    printf("请输入一个数字\n");
    scanf("%d",&m);
    for (i=2;i<=m/2;i++)
    {
        
        if(m%i==0)
        
        {
            a++;
            {
                if(a>=1)
                    break;
            }
        }
        
    }
    
        
        
        
    if (a==0)
        printf("yes\n");
    else
        printf("no\n");
      
    
    return 0;
    
}
/*当m%i==0时，说明有这个数不是素数，a的计数+1然后直接跳出去，比如9只用计算到3，接下来的数不用计算*/
