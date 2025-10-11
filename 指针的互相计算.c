#include<stdio.h>
int main()
{
	int a[2]={0,1};
	int *p=&a[0];
	int *q=&a[1];
	printf("%d\n%d\n%p\n%p\n",*p,*q,p,q);
	//*p=*q;
	//printf("%d\n%d\n%p\n%p\n",*p,*q,p,q);
	p=q;
	printf("%d\n%d\n%p\n%p\n",*p,*q,p,q);
	return 0;
}