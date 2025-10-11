#include<stdio.h>
int main()
{
	int a[]={1,2,3,4};
	int *p=a;
	printf("%p\n",p);
	printf("%p\n",&a[0]);
	printf("%p\n",&a[1]);
	*p=5;
	printf("%d\n",a[0]);
	++p;
	*p=6;
	printf("%p\n",p);
	printf("%d\n",a[1]);
	return 0;
}