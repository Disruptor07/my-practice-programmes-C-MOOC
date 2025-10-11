#include<stdio.h>
int main()
{
	int x,y,i;
	scanf("%d %d",&x,&y);
	int min,objective=1;
	if(x<y)
	{
		min=x;
	}
	else
	{
		min=y;
	}
	for(i=2;i<=min;i++)
	{
		if(x%i==0)
		{
			if(y%i==0)
			{
				objective=i;
			}
		}
	}
	printf("%d",objective);
	return 0;
}