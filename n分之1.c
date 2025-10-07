#include<stdio.h>
int main()
{
	int n,i;
	double sum=0.0;
	double one=1.0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum+=one/i;
		one=-one;
	}
	printf("%f",sum);
	return 0;
}