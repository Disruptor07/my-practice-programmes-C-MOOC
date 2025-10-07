#include<stdio.h>
#include<string.h>
int main()
{
	char a[]="secret1314520";
	char b[50];
	fgets(b,sizeof(b),stdin);
	b[strcspn(b, "\n")] = '\0';
	if(strcmp(a,b)==0)
	{
		printf("成功");
	}
	else
	{
		printf("失败");
	}
	return 0;
}