#include<stdio.h>
int main()
{
	int in;
	int count=0;
	int number=0;
	scanf("%d",&in);
	while(in!=-1)
	{
		number+=in;
		count++;
		scanf("%d",&in);
	}
	printf("%f",1.0*number/count);
	return 0;
}