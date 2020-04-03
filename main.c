#include <stdio.h>
#include <math.h>
int main(void)
{
    int flag,fenmu;
    double item,pi,sum=0;
    flag=1;
    fenmu=1;
    item=1.0;
    while(item<0.0001)
    {
        item=1.0/fenmu;
        sum=sum+flag*item;
        flag =flag *(-1);
        fenmu=fenmu+2;
    }
    pi=sum*4;
    printf("pi:%lf\n",pi);
    
}
