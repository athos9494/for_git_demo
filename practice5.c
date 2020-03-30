/*以下函数都需要实现配套的测试用例
  实现计算长方体体积的函数
 double cuboid(double length, double width, double height);
  实现计算第n项斐波拉契数列的函数(n >= 0) int fib(int n);
  实现计算三个数中最大值的函数: int max(int a, int b, int c)
 */

/*
 #include <stdio.h>
double cuboid (double length,double width,double height)

{
    double result;
    result = length * width * height;
    return result;
}

int main()
{
    double length,width,height,result;
    printf("请输入长方体的长：");
    scanf("%lf",&length);
    printf("请输入长方体的宽：");
    scanf("%lf",&width);
    printf("请输入长方体的高：");
    scanf("%lf",&height);
    result = cuboid (length,width,height);
    printf("长方体的面积是：%lf\n",result);
    

    return 0;
    
}
 */
/*
 实现计算第n项斐波拉契数列的函数(n >= 0) int fib(int n);
 斐波那契数列：1,1,2,3,5,8,13,21...
 从第三项开始，每一项都是前两项之和。

 
 */
#include <stdio.h>
int fib(int n)
{
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else
        return fib(n-1)+fib(n-2);
}
int main(void)
{
    int n,i;
    printf("请输入一个正数:\n");
    scanf("%d",&n);
    i=fib(n);
    printf("第%d项是：%d\n",n,i);
    return 0;
}



/*
 实现计算三个数中最大值的函数: int max(int a, int b, int c)
 */

/*
#include <stdio.h>
int max(int a,int b,int c)
{
    int n;
    if(a>b)
        n=a;
    else
        n=b;
    if(c>n)
        n=c;
    else
        n=n;
    
    
    return n;
}
int main(void)
{
    int a,b,c,m;
    printf("请输入三个数\n");
    scanf("%d %d %d\n",&a,&b,&c);
    m=max(a,b,c);
    printf("三个数最大的数是：%d\n",m);
    return 0;
}
*/
