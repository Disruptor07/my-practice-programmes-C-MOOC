#include<stdio.h>
int main()
{
    int n;
    int result=1;
    printf("请输入数字：");
    scanf("%d",&n);
    for(int i=1;i<=n;++i)
    {
        result*=i;
    }
    printf("%d的阶乘是%d",n,result);
}