#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int leicheng=1;
	while(n>=2)
	{
		leicheng*=n;
		n--;
	}
	printf("%d",leicheng);
	return 0;
}