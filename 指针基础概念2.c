#include<stdio.h>
void f(int *p);
int main()
{
	int i=6;
	printf("%p\n",&i);
	f(&i);
	printf("%d\n",i);
	printf("%p\n",&i);
	return 0;
}
void f(int *p)
{
	++*p;
}