#include<stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
	switch(x)
	{
		case 1:
			printf("hi");
			break;
		case 2:
			printf("hello");
			break;
		default:
			printf("bye");
			break;
			
	}
	return 0;
}