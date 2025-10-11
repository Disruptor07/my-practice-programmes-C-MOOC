#include<stdio.h>
void f(int x);
int main()
{
	int a=2;
	f(a);
	printf("%d",a);
	return 0;
}
void f(int x)
{
	x*=2;
	printf("%d\n",x);
}