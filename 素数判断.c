#include<stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
	int i;
	int y=1;
	for(i=2;i<x;i++)
	{
		if(x%i==0)
		{
			y=0;
			break;
		}
	}
	if(y==1)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}