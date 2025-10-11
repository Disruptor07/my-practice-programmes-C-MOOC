#include<stdio.h>
int main()
{
	int x,y;
	scanf("%d",&x);
	if(x<0)
	{
		y=-x;
	}
	else if(x==0)
	{
		y=100;
	}
	else if(0<x<5)
	{
		y=x*2;
	}
	else
	{
		y=x*3;
	}
	printf("%d",y);
	return 0;
}