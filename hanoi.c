#include <stdio.h>
#include <string.h>
//将n-1从a移动到c上，n移动到b，再将n-1从c移动到a上。
int main()
{
    void hanoi(int n,char a,char b,char c);
    int n = 3;
    int a='A',b='B',c='C';
    hanoi(n,a,b,c);
    return 0;
}
void hanoi(int n,char A,char B,char C)
{
    if (n==1)
        printf("%c-->%c\n",A,B);        //只有一层直接从A搬到B。
    else
    {
        hanoi(n-1,A,C,B);               //不止一层的时候将n-1从A搬到B
        printf("%c-->%c\n",A,B);        //再将第n块搬到B
        hanoi(n-1,C,B,A);               //将n-1从C搬到A
    }
}
