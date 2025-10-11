#include<stdio.h>
void f(int *p1,int *p2);
int main()
{
	int x,y;
	scanf("%d %d",&x,&y);
	int *p1=&x;
	int *p2=&y;
	f(&x,&y);
	printf("%d %d",x,y);
	return 0;
}
void f(int *p1,int *p2)
{
	int t;
	t=*p1;
	*p1=*p2;
	*p2=t;
}	