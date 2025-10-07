#include<stdio.h>
int main()
{
	int marks;
	const int jige=60;
	printf("your marks");
	scanf("%d",&marks);
	if(marks<jige){
		printf("sorry");
	}else{
		printf("good");
	}
	return 0;
}