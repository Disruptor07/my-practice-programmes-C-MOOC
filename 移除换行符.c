#include<stdio.h>
#include<string.h>
int main()
{
	char a[]="你好";
	printf("%zu\n",strlen(a));
	
	char b[20];
	printf("请输入：");
	fgets(b,sizeof(b),stdin);
	printf("%zu\n",strlen(b));
	
	char c[20];
	printf("请输入：");
	fgets(c,sizeof(c),stdin);
	c[strcspn(c,"\n")]=0;
	printf("%zu\n",strlen(c));
	return 0;
}