#include<stdio.h>
int step(int n);
int main()
{
    printf("请输入数字：");
    int n;
    scanf("%d",&n);
    printf("%d\n",step(n));
    return 0;
}

int step(int n)
{
    if(n==1)
    {
        return 1;
    }
    else
    {
        return n*step(n-1);
    }
}