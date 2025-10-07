#include<stdio.h>
int main()
{
	int sushu[10]={2};
	int i;
	int x;
	int y=1;
	int count=1;
	for(x=3;count<10;x++)
	{
		for(i=2;i<x;i++)
		{
			if(x%i==0)
			{
				y=0;
				break;
		    }    
		}
		if(y==1)
		{
			sushu[count]=x;
			count++;
		}
		y=1;
	}
	
	{
		int i;
		for(i=0;i<10;i++)
		{
			printf("%d\n",sushu[i]);
		}
    }
	return 0;
}