#include<stdio.h>
int main()
{
	int zheng=0;
	int ni=0;
	int i=0;
	scanf("%d",&zheng);
	do
	{
		i=zheng%10;
		zheng/=10;
		ni=10*ni+i;
	}while(zheng>0);
	printf("%d",ni);
	return 0;
}