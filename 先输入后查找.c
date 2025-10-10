#include<stdio.h>
int search(int a[],int target,int asize);
int main()
{
	int a[5];
	printf("请输入5个数：\n");
	for(int j=0;j<5;++j)
	{
		scanf("%d",&a[j]);
	}
	printf("请输入待查找的数：");
	int n;
	scanf("%d",&n);
	int m=search(a,n,5);
	if(m!=-1)
	{
		printf("位于%d处",m);
	}
	else
	{
		printf("不存在");
	}
	return 0;
}

int search(int a[],int target,int asize)
{
	for(int i=0;i<asize;++i)
	{
		if(a[i]==target)
		{
			return i;
		}
	}
	return -1;
}