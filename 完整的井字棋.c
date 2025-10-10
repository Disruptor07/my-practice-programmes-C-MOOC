#include<stdio.h>
int main()
{
	int a[3][3];
	int i,j;
	for(i=0;i<3;++i)
	{
		for(j=0;j<3;++j)
		{
			scanf("%d",&a[i][j]);
		}
	}
	int result=-1;
	for(i=0;i<3;++i)
	{
		int count0=0;
		for(j=0;j<3;++j)
		{
			if(a[i][j]==0)
			{
				++count0;
			}
		}
		if(count0==3)
		{
			result=0;
		}
		else if(count0==0)
		{
			result=1;
		}
		if(result!=-1)
		{
			break;
		}
	}
	if(result==-1)
	{
		for(j=0;j<3;++j)
		{
			int count0=0;
			for(i=0;i<3;++i)
			{
				if(a[i][j]==0)
			{
				++count0;
			}
			if(count0==3)
		{
			result=0;
		}
		else if(count0==0)
		{
			result=1;
		}
		if(result!=-1)
		{
			break;
		}
			}
		}
	}
	printf("%d",result);
	return 0;
}