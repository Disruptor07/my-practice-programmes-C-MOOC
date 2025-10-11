#include<stdio.h>
int main()
{
	int x;
	int number[10];
	int count=0;
	double sum=0;
	scanf("%d",&x);
	while(x!=0)
	{
		number[count]=x;
		sum+=x;
		count++;
		scanf("%d",&x);
	}
	printf("%f\n",sum/count);
	int i=0;
	for(i=0;i<=count;i++)
	{
		if(number[i]<sum/count)
		{
			printf("%d ",number[i]);
		}
	}
	return 0;
}