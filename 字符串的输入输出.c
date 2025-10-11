#include<stdio.h>
int main()
{
	char a[]={'H','i','\0'};
	printf("%s\n",a);
	
	char b[50];
	printf("请输入字符串：");
	fgets(b,sizeof(b),stdin);
	printf("%s",b);
	
	return 0;
}