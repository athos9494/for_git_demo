
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
    printf("\n");
    printf("99-90");
    for (int j = 0; j<sizeof(a)/sizeof(a[0]); j++)
    {
        if(a[j]<=99&&a[j]>90)
            putchar('*');
        
    }
    printf("\n");
    printf("89-80");
    for (int j = 0; j<sizeof(a)/sizeof(a[0]); j++)
    {
        if(a[j]<=89&&a[j]>80)
            putchar('*');
        
    }
    printf("\n");
    printf("79-70");
    for (int j = 0; j<sizeof(a)/sizeof(a[0]); j++)
    {
        if(a[j]<=79&&a[j]>70)
            putchar('*');
        
    }
    printf("\n");
    printf("69-60");
    for (int j = 0; j<sizeof(a)/sizeof(a[0]); j++)
    {
        if(a[j]<=69&&a[j]>60)
            putchar('*');
        
    }
    printf("\n");
    printf("59-50");
    for (int j = 0; j<sizeof(a)/sizeof(a[0]); j++)
    {
        if(a[j]<=59&&a[j]>50)
            putchar('*');
        
    }
    printf("\n");
    printf("49-40");
    for (int j = 0; j<sizeof(a)/sizeof(a[0]); j++)
    {
        if(a[j]<=49&&a[j]>40)
            putchar('*');
        
    }
    printf("\n");
    printf("39-30");
    for (int j = 0; j<sizeof(a)/sizeof(a[0]); j++)
    {
        if(a[j]<=39&&a[j]>30)
            putchar('*');
        
    }
    printf("\n");
    printf("29-20");
    for (int j = 0; j<sizeof(a)/sizeof(a[0]); j++)
    {
        if(a[j]<=29&&a[j]>20)
            putchar('*');
        
    }
    printf("\n");
    printf("19-10");
    for (int j = 0; j<sizeof(a)/sizeof(a[0]); j++)
    {
        if(a[j]<=19&&a[j]>10)
            putchar('*');
        
    }
    printf("\n");
    printf("9-0");
    for (int j = 0; j<sizeof(a)/sizeof(a[0]); j++)
    {
        if(a[j]<=9&&a[j]>0)
            putchar('*');
        
    }
    
    putchar('\n');
  
}

 

