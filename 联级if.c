#include<stdio.h>
int main(){
	int x=0;
	scanf("%d",&x);
	int y=0;
	if(x==0){
		y=0;
	}else if(x<0){
		y=1;
	}else{
		y=3;
	}
	printf("%d",y);
	return 0;
}