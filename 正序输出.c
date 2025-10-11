#include<stdio.h>
int main()
{
	int n,m=1;
	int i;
	scanf("%d",&n);
	int t=n;
	while(t>9)
	{
		t/=10;
		m*=10;
	}
	printf("%d\n",m);
	while(m>0)
	{
		i=n/m;
		n%=m;
		m/=10;
		printf("%d",i);
		if(m>0) 
		{
			printf(" ");
		}
	}
	return 0;
}