#include<stdio.h>
int main()
{
	int grade;
	scanf("%d",&grade);
	grade/=10;
	switch(grade)
	{
		case 9:
			printf("S");
			break;
		case 8:
			printf("A");
			break;
		case 7:
			printf("B");
			break;
		default:
			printf("C");
			break;
	}
	return 0;
}