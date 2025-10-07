#include<stdio.h>
int main()
{
	int a[6]={1,2,3,4,5,6};
	int *p=a;
	for(p=&a[0];p<=&a[5];p++)
	{
		printf("%d\n",*p);
	}
	return 0;
}