#include<stdio.h>
int main(){
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	int max=0;
	if(a>b){
		max=a;
		if(a<c){
			max=c;
		}
	}else{
		max=b;
		if(b<c){
			max=c;
		}
	}
	printf("%d",max);
	return 0;
}