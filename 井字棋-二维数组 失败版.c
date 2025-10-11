#include<stdio.h>
int main()
{
	int result=-1;
	int a[3][3];
	for(int i=0;i<3;++i)
	{
		for(int j=0;j<3;++j)
		{
			scanf("%d",&a[i][j]);
		}
	}
	{
		for(int i=0;i<3;++i)
	{
		for(int j=0;j<3;++j)
		{
			int count0=0;
			int count1=0;
			if(a[i][j]==0)
			{
				++count0;
			}
			else
			{
				++count1;
			}
			if(count0==3)
			{
				result=0;
				break;
			}
			if(count1==3)
			{
				result=1;
				break;
			}
		}
	}
	}
	if(result!=-1)
	{
		for(int j=0;j<3;++j)
	{
		for(int i=0;i<3;++i)
		{
			int count0=0;
			int count1=0;
			if(a[i][j]==0)
			{
				++count0;
			}
			else
			{
				++count1;
			}
			if(count0==3)
			{
				result=0;
				break;
			}
			if(count1==3)
			{
				result=1;
				break;
			}
		}
	}
	}
	if(result==-1)
	{
		printf("平局");
	}
	else {
	if(result==0)
	{
		printf("0赢了");
	}
	else
	{
		printf("1赢了");
	}
}
	return 0;
}