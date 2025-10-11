#include<stdio.h>
int main()
{
	const int money=100;
	int price=0;
	int change=0;
	scanf("%d",&price);
	change=money-price;
	printf("%d",change);
	return 0;
}