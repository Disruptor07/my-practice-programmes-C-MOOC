#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n=0;
	scanf("%d",&n);
	int *a=(int*)malloc(n*sizeof(int));
	int i=0;
	for(i=0;i<n;i++)
	{
		int m=0;
		scanf("%d",&m);
		a[i]=m;
	}
	int sum=0;
	for(i=0;i<n;i++)
	{
		sum+=a[i];
	}
	printf("%d",sum);
	free(a);
	return 0;
}