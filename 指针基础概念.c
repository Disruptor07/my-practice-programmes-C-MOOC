#include<stdio.h>
int main()
{
	int package=10;
	int *p=&package;
	
	printf("%d\n",package);
	printf("%d\n",&package);
	printf("%d\n",p);
	printf("%d\n",*p);
	return 0;
}