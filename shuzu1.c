#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main ()
{
    // 生成100个随机数的数组, 分布到0-100
    srand((unsigned int)time(NULL));
    int a[100];
    for (int i = 0; i < 100; i++)
    {
        a[i] = rand() % 101;
    }
    for (int i = 0; i < 100; )
    {
        printf("%4d", a[i]);
        i++;
        if (i%10 == 0)
        {
            printf("\n");
        }
        
    }
    puts("\n---分布图---");
    printf("100:");
    for (int j = 0; j<sizeof(a)/sizeof(a[0]); j++)
    {
        if(a[j]==100)
            putchar('*');
        
    }
    putchar('\n');
    for(int i=9;i>=0;)
    {
        printf("%d-%d:",i*10,i*10+9);
        i--;
        for(int j = 0;j < sizeof(a)/sizeof(a[0]);j++)
        {
            if(a[j]>=i*10&&a[j]<i*10+9)
                putchar('*');
                
        }
        
        putchar('\n');
    }
    putchar('\n');
    
}
