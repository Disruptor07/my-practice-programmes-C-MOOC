#include<stdio.h>
int main(){
	int c1,c2;
	scanf("%d %d",&c1,&c2);
	if(c1==0){
		if(c2==5){
			printf("down");
		}else{
			printf("up");
		}
	}else{
		printf("sleepy");
	}
	return 0;
}