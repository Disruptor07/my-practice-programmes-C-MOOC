#include<stdio.h>
int main()
{
	int number[10];
	printf("%d",sizeof(number)/sizeof(number[0]));
	return 0;
}