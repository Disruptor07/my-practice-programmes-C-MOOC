#include<stdio.h>
int main()
{
	int a[2][3];
	for(int i=0;i<2;++i)
	{
		for(int j=0;j<3;++j)
		{
			scanf("%d",&a[i][j]);
		}
	}
	a[0][0]=100;
	{
		for(int i=0;i<2;++i)
	{
		for(int j=0;j<3;++j)
		{
			printf("%d\n",a[i][j]);
		}
	}
	}
	return 0;
}