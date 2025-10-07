#include <stdio.h>
int main()
{
	int price=0;
	int money=0;
	//first
	printf("price:");
	scanf("%d",&price);
	printf("money:");
	scanf("%d",&money);
	//preparation
	if (money>=price){
		printf("your change is %d",money-price);
	}
	else{
		printf("sorry");
	}
	return 0;
}