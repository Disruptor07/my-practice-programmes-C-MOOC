#include<stdio.h>
#include<string.h>
int main()
{
	char a[]="I love C language!";
	char b[50];
	strcpy(b,a);
	printf("%s",b);
	return 0;
}