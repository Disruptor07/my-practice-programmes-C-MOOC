#include<stdio.h>
int fb(int n);
int main()
{
    printf("请输入数字");
    int n;
    scanf("%d",&n);
    printf("第%d项为%d",n,fb(n));
    return 0;
}

int fb(int n)
{
    if(n==1)
    {
        return 1;
    }
    else if(n==2)
    {
        return 1;
    }
    else
    {
        return fb(n-1)+fb(n-2);
    }
}