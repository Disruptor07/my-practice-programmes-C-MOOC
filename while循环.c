#include<stdio.h>
int main()
{
	int x;
	int n=0;
	scanf("%d",&x);
	if(x>0)
	{
		while(x>0)
		{
			n=n+1;
			x=x/10;
		}
	}
	else
	{
		n=1;
	}
	printf("%d",n);
	return 0;
}