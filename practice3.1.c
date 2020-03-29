/*根据输入的月份输出改月的天数,假设画不是闰年*/
#include <stdio.h>
int main(void)
{
    int month,day;
    printf("请输入月份：\n");
    scanf("%d\n",&month);
    if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
        day=30;
    else if(month==4||month==6||month==9||month==11)
        day=31;
    else
        day=28;
    printf("该月的天数是：%d\n",day);
    return 0;
}
