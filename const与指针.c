#include<stdio.h>
int main()
{
	int t=1;
	int m=2;
	const int *p=&t;
	printf("%d %d %p\n",t,*p,p);
	t=0;
	printf("%d %d %p\n",t,*p,p);
	p=&m;
	printf("%d %d %p\n",t,*p,p);
	return 0;
}