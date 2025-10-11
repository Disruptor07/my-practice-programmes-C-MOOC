#include<stdio.h>
int main()
{
	const int pass=60;
	int score=0;
	scanf("%d",&score);
	if(score<pass)
	{
		printf("sorry");
	}
	else
	{
		printf("congratulations");
	}
	return 0;
}