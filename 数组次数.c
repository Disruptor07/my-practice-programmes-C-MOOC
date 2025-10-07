#include<stdio.h>
int main()
{
	int number[10]={[3]=10};
	int i;
	int x;
	scanf("%d",&x);
	while(x!=-1)
	{
		number[x]++;
		scanf("%d",&x);
	}
	for(i=0;i<sizeof(number)/sizeof(number[0]);i++)
	{
		printf("%d %d\n",i,number[i]);
	}
	return 0;
}