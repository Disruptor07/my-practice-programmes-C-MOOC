#include<stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
	int i,y=1;
	for(i=2;i<x;i++)
	{
		if(x%i==0)
		{
			y=0;
			break;
		}
	}
	if(y==0)
	{
		printf("no");
	}
	else
	{
		printf("yes");
	}
	return 0;
}