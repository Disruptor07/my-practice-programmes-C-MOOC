#include<stdio.h>
int search(int a[],int target,int asize);
int main()
{
	int shuzu[5]={1,2,3,4,5};
	int n=search(shuzu,1,5);
	if(n!=-1)
	{
		printf("位于%d处",n);
	}
	else
	{
		printf("不存在");
	}
	return 0;
}

int search(int a[],int target,int asize)
{
	int i;
	for(i=0;i<asize;i++)
	{
		if(a[i]==target)
		{
			return i;
		}
	}
	return -1;
}