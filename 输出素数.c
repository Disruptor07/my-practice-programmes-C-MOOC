#include<stdio.h>
int main()
{
	int x;
	int count=0;
	for(x=2;count<=49;x++)
	{
		int y=0;
		int i=2;
		for(i=2;i<x;i++)
		{
			if(x%i==0)
			{
				y=1;
				break;
			}
		}
		if(y==0)
		{
			count++;
			printf("%d\t",x);
			if(count%5==0)
			{
				printf("\n");
			}
		}
	}
	return 0;
}