#include<stdio.h>
int main()
{
	int a,b,i;
	scanf("%d %d",&a,&b);
	do
	{
		i=a%b;
		a=b;
		b=i;
	}while(i!=0);
	printf("%d",a);
	return 0;
}