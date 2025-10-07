#include<stdio.h>
void f(int *p1,int *p2,int a[]);
int main()
{
	int max,min;
	int a[5];
	int t;
	scanf("%d",&t);
	int i;
	for(i=0;i<5;i++)
	{
		a[i]=t;
		scanf("%d",&t);
	}
	int *p1=&max;
	int *p2=&min;
	f(&max,&min,a);
	printf("%d %d",max,min);
	return 0;
}
void f(int *p1,int *p2,int a[])
{
	*p1=*p2=a[0];
	int i=0;
	for(i=0;i<5;i++)
	{
		if(*p1<a[i])
		{
			*p1=a[i];
		}
		if(*p2>a[i])
		{
			*p2=a[i];
		}
	}
}