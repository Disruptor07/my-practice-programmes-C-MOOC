#include<stdio.h>
int chachong(int x,int a[],int length);
int main()
{
	int in;
	int out;
	scanf("%d",&in);
	int number[]={2,3,4,5,6,9,8,7,12,10,11};
	out=chachong(in,number,sizeof(number)/sizeof(number[0]));
	if(out!=-1)
	{
		printf("%d",out+1);
	}
	else
	{
		printf("no");
	}
	return 0;
}



int chachong(int x,int a[],int length)
{
	int weizhi=-1;
	int i=0;
	for(i=0;i<length;i++)
	{
		if(a[i]==x)
		{
			weizhi=i;
			break;
		}
	}
	return weizhi;
}