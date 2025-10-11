#include<stdio.h>
int main()
{
	char a[]="hello";
	printf("%s\n",a);
	printf("%c\n",a[1]);
	
	char b[20];
	fgets(b,sizeof(b),stdin);
	for(int i=0;b[i]!='\0';++i)
	{
		if(b[i]=='c')
		{
			b[i]='d';
		}
	}
	b[0]='e';
	printf("%s",b);
	return 0;
}