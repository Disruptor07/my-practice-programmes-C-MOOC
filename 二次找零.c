#include<stdio.h>
int main()
{
	int yingfu,shifu;
	scanf("%d %d",&yingfu,&shifu);
	if(yingfu<=shifu)
	{
		printf("zhaoling is %d",shifu-yingfu);
	}
	else
	{
		printf("not enough");
	}
	return 0;
}