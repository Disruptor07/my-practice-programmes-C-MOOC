#include<stdio.h>
#include<string.h>
int main()
{
	char a[66]="Hello ";
	char b[]="World!";
	strcat(a,b);
	printf("%s\n",a);
	
	char c[66]="Hello ";
	strcat(c,"World!");
	printf("%s\n",c);
	
	char d[66]="Hello ";
	char e[50];
	printf("请输入：");
	fgets(e,sizeof(e),stdin);
	strcat(d,e);
	printf("%s",d);
	return 0;
}