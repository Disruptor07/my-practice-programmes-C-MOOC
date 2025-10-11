#include<stdio.h>
int main()
{
	double foot=0;
	double inch=0;
	double height=0;
	scanf("%lf %lf",&foot,&inch);
	height=(foot+inch/12)*0.3048;
	printf("%f",height);
	return 0;
}