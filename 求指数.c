#include<stdio.h>
int main()
{
	int x;
	int y=0;
	scanf("%d",&x);
	int t=x;
	while(x>1)
	{
		x/=2;
		y++;
	}
	printf("%d %d",t,y);
	return 0;
}