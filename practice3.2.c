/*统计字符*/
#include <stdio.h>
int main(void)
{
    char ch;
    int letter=0,digits=0,others=0;
    printf("请输入一行字符串：\n");
    while((ch=getchar())!='\n')
    {
        if ((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
            letter=letter+1;
        else if (ch>='0'&&ch<='9')
            digits=digits+1;
        else
            others=others+1;
        
    }
    printf("字母数：%d,数字数：%d,其他字符数：%d\n",letter,digits,others);
    return 0;
    
}
