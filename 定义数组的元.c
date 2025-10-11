#include<stdio.h>
int main()
{
	int number;
	scanf("%d",&number);
	int a[number];
	printf("%d\n",sizeof(a));
	printf("%d",sizeof(a)/sizeof(a[0]));
	return 0;
}