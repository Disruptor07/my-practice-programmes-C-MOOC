#include <stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
	double amount=x*1.033*1.033*1.033;
	printf("%f",amount);
	return 0;
}