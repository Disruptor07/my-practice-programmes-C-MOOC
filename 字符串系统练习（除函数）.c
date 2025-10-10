#include<stdio.h>
int main()
{
	char a[]="hello\n";
	printf("%s",a);
	
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