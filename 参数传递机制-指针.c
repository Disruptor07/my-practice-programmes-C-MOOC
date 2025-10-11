#include<stdio.h>
void f(int *p);
int main()
{
	int a=2;
	f(&a);
	printf("%d",a);
	return 0;
}

void f(int *p)
{
	*p+=1;
}