#include <stdio.h>
int main(void)
{
    
    int n;
    int factorial(int n);
    printf("请输入一个整数:");
    scanf("%d",&n);
    printf("这个整数的阶乘是：%d\n",factorial(n));
    
    return 0;
    
    
}

int factorial(int(n))

{
    int i;
    int fact = 1;
    for(i = 1;i <= n;i++)
        fact = fact * i;
    return fact;
    
}
/*int定义的整数最大范围是2^32,取值范围（-2147483678，2147483677），13的阶乘就已经大于这个取值范围了，所以13以上的阶乘都是无法正确显示计算数值的*/
