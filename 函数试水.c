#include<stdio.h>
void sum(int begin,int end);
int main()
{
	int x,y;
	scanf("%d %d",&x,&y);
	sum(x,y);
	return 0; 
}
void sum(int begin,int end)
{
	int i;
	int sum=0;
	for(i=begin;i<=end;i++)
	{
		sum+=i;
	}
	printf("%d",sum);
}