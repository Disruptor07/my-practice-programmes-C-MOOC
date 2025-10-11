#include<stdio.h>
int max(int a,int b)
{
	int max;
	if(a>b)
	{
		max=a;
	}
	else
	{
		max=b;
	}
	return max;
}
int main()
{
	int x;
	int y;
	scanf("%d %d",&x,&y);
	printf("%d",max(x,y));
	return 0;
}