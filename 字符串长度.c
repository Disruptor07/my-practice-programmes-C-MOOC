#include<stdio.h>
#include<string.h>
int main()
{
	char a[]={'n','i','h','a','o','\0'};
	printf("%zu\n",strlen(a));
	
	char b[50];
	fgets(b,sizeof(b),stdin);
	printf("%zu",strlen(b));
	return 0;
}