#include<stdio.h>
int main()
{
	int hour1,minute1;
	int hour2,minute2;
	scanf("%d %d %d %d",&hour1,&minute1,&hour2,&minute2);
	int t1=hour2-hour1;
	int t2=minute2-minute1;
	if(t2<0)
	{
		t1=t1-1;
		t2=t2+60;
	}
	printf("%d %d",t1,t2);
	return 0;
}