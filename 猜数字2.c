#include<stdio.h>
int main()
{
	int number=rand()%100+1;
	int cai;
	int count=1;
	scanf("%d",&cai);
	while(cai!=number)
	{
		if(cai<number)
		{
			printf("small\n");
		}
		else
		{
			printf("big\n");
		}
		count++;
		scanf("%d",&cai);
	}
	printf("%d",count);
	return 0;
}