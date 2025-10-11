#include<stdio.h>
int main()
{
	srand(time(0));
	int a=rand()%100+1;
	//random shengcheng
	int b;
	int c=0;
	do
	{
		scanf("%d",&b);
		c++;//jicishu
		if(b>a)
		{
			printf("big\n");
		}
		else if(b<a)
		{
			printf("small\n");
		}
		else
		{
			printf("right\n");
		}
	}while(a!=b);
	printf("%d",c);
	return 0;
}