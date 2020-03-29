/* c=5(f-32/9)*/
#include <stdio.h>
int main(void)
{
    int F;
    double C;
    printf("F    C\n");
    for(F=40;F<=300;F=F+20)
    {   if(F==260)
        continue;
        else if(F==280)
        continue;
        else
        C= 5 * (F - 32) / 9;
        printf("%d    %.2f\n",F,C);
        
    }
    return 0;
}
