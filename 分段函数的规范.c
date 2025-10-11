#include <stdio.h>
int main()
{
	int x,y;
	scanf("%d",&x);
	if(x<0)
	{
		y=-6;
	}
	else
	{
		if(x==0)
		{
			y=6;
		}
		else y=x+6;
	}
	printf("%d",y);
	return 0;
}