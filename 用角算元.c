#include<stdio.h>
int main()
{
	int five,two,one;
	int x;
	scanf("%d",&x);
	for(five=1;five<x*2;five++)
	{
		for(two=1;two<x*5;two++)
		{
			for(one=1;one<x*10;one++)
			{
				if(one+two*2+five*5==x*10)
				{
					printf("five%d\ntwo%d\none%d\n",five,two,one);
					break;
				}
			}
			break;
		}
		break;
	}
	return 0;
}