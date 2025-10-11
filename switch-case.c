#include<stdio.h>
int main()
{
	int n;
	double r=0;
	scanf("%d",&n);
	switch(n/10)
	{
		case 9:
			r=4.0;
			break;
		case 8:
			r=3.0;
			break;
		default :
			r=1.6;
			break;
	}
	printf("%f",r);
	return 0;
}